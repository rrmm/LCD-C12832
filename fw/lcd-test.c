
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>




#include "misc.h"

#define WGM_VALUE_CTC ((1<<1)|(0<<0))
#define CS_VALUE_ON  ((0<<2)|(0<<0)|(1<<1))
#define CS_VALUE_OFF ((0<<2)|(0<<0)|(0<<0))
#define COM_CLR_VALUE  (1<<COM0A1|0<<COM0A0)
#define COM_SET_VALUE  (1<<COM0A1|1<<COM0A0)
#define COM_TGL_VALUE  (0<<COM0A1|1<<COM0A0)
#define COM_DISCONNECT_VALUE  (0<<COM0A1|0<<COM0A0)


/* 
 * clock source
 * CS02:00 = 0 off
 *           1   clk
 *           2   clk/8
 *           3   clk/64
 *           4   clk/256
 *           5   clk/1024
 */

// WGM02 is high, no prescalar
#define PWM_TCCR0B_BYTE 0x09

#define PWM_START() do { TCCR0B = PWM_TCCR0B_BYTE; } while (0)
#define PWM_STOP()  do {						\
	TCCR0A &= ~0x30;							\
	TCCR0B &= ~0x07;							\
  } while (0)

#define PWM_OUTPUT_ENABLE()  do { TCCR0A |= 0x20; } while (0)
#define PWM_OUTPUT_DISABLE() do { \
	TCCR0A &= ~0x30;			  \
  } while (0)



void
set_backlight(unsigned char i)
{
  OCR1A = 0x3ff >> (9-i);
}


inline void
pwm_init(void)
{

  // Assume 1Mhz Oscillator
  
  //PWM_STOP();
  // SET OC1A to do something, clear on compare match, set on bottom
  // in compare output mode/fast pwm mode
  // set to fast pwm 10-bit
  TCCR1A = (TCCR1A & (~0xC0|~0x03)) | 0x80 | 0x3 ;
  // clk/256, bits of wgm 
  TCCR1B = 0x09;

  // top is 0x3f
  OCR1A = 0x3ff >> 5;
  TCNT1 = 0;


  TIMSK1 = 0;  // no interrupts
  
  // clear all flags by writing 1's 
  TIFR1 = 0xff;
  TIMSK1 = BSET(TOIE0);
  
}

#define TCCR0A_WGM_CTC       2
#define TCCR0B_CLKSRC_NONE   0
#define TCCR0B_CLKSRC_1024   5


inline void 
timer_start(void)
{
  TCCR0B = TCCR0B_CLKSRC_1024;
}

void
timer_init(void)
{
  TCCR0B = TCCR0B_CLKSRC_NONE;
  TCCR0A = TCCR0A_WGM_CTC;
  TCNT0 = 0;
  OCR0A = 250;
  //TIMSK0 = BSET(TOIE0);
  TIMSK0 = BSET(OCIE0A);    
  
}


#define enable_ext_int()  do {   EIFR |= 0xff; EIMSK |= 0x01; } while (0)
#define disable_ext_int()  EIMSK &= ~0x01





 // blacklight en PB1
#define SET_BLEN(x) do { PORTB = (PORTB&(~0x02)) | (((x)&1)<<1); } while (0)

 // PC0 is RST
#define SET_RST(x)  do { PORTC = (PORTC&(~0x01)) | (((x)&1)<<0); } while (0)
 // PC1 is A0
#define SET_A0(x)   do { PORTC = (PORTC&(~0x02)) | (((x)&1)<<1); } while (0)
 // PB2 is CS
#define SET_CS(x)   do { PORTB = (PORTB&(~0x04)) | (((x)&1)<<2); } while (0)
 // PC3 is SCL
#define SET_SCL(x)  do { PORTC = (PORTC&(~0x08)) | (((x)&1)<<3); } while (0)
 // PC4 is SI
#define SET_SI(x)   do { PORTC = (PORTC&(~0x10)) | (((x)&1)<<4); } while (0)

     



void
lcd_out(unsigned char x, unsigned char is_data)
{
  unsigned char i;
  unsigned char n;
  unsigned char v;

  i = x;
  SET_CS(0);
  
  if (is_data) { 
	SET_A0(1);
  } else {
	SET_A0(0);
  }
  
  for (n = 0; n < 8; n++) { 
	v = (i & 0x80);
	v >>= 7;
	i <<= 1;
	SET_SCL(0);
	SET_SI(v);
	_delay_us(1);
	SET_SCL(1);
	//_delay_us(2);
  }
  
  SET_CS(1);
  
}


void
lcd_init()
{

  SET_RST(0);
  _delay_ms(10);
  SET_RST(1);
  _delay_ms(10);


  lcd_out(0x40, 0);
  lcd_out(0xa0, 0);
  lcd_out(0xc8, 0);
  lcd_out(0xa6, 0);
  lcd_out(0xa2, 0);
  lcd_out(0x2f, 0);
  lcd_out(0xf8, 0);
  lcd_out(0x00, 0);
  lcd_out(0x23, 0);
  lcd_out(0x81, 0);
  lcd_out(0x0a, 0);
  lcd_out(0xac, 0);
  lcd_out(0x00, 0);
  lcd_out(0xaf, 0);


  // blink the entire screen
  lcd_out(0xA5, 0);  
  _delay_ms(200);
  lcd_out(0xA4, 0);  
  /*

  lcd_out(0xA0, 0);
  lcd_out(0xAE, 0);
  lcd_out(0xC0, 0);
  lcd_out(0xA2, 0);
  lcd_out(0x2F, 0);
  lcd_out(0x26, 0);
  lcd_out(0x81, 0);
  lcd_out(0x2F, 0);
  */
  //lcd_out(0xAF, 0);
  
}

#define SET_PAGE(x)  lcd_out(0xB0 | (x&0x0f), 0)
#define SET_COL(x)  do {							\
  lcd_out( 0x10 | ((x)&0xf0)>>4, 0);				\
  lcd_out( 0x00 | (x)&0x0f    , 0);				\
  } while(0)	

void
clrscr(void)
{
  unsigned char i = 0; 
  SET_PAGE(0);
  SET_COL(0);
  for (i = 0; i < 128; i++) { 
	lcd_out(0x0, 1);
  }
  SET_PAGE(1);
  SET_COL(0);
  for (i = 0; i < 128; i++) { 
	lcd_out(0x0, 1);
  }
  SET_PAGE(2);
  SET_COL(0);
  for (i = 0; i < 128; i++) { 
	lcd_out(0x0, 1);
  }
  SET_PAGE(3);
  SET_COL(0);
  for (i = 0; i < 128; i++) { 
	lcd_out(0x0, 1);
  }
    
  SET_PAGE(0);
  SET_COL(0);
}


// 9600 @ 1Mhz clock

void
serial_init(void)
{

  UCSR0A = 0x2; // U2X0 = 1 double speed
  UCSR0B = (1<<RXEN0)|(1<<TXEN0);
  // UCSR0C ; // default is 8-1-N
  UBRR0 = 12; // 9600 @ 1Mhz clock
}

#include "lcd_print_char_6x8.c"


int
main(void)
{ 
  wdt_disable();

  
  serial_init();
  pwm_init();
  PORTC = 0x01;
  DDRC = DIR_OUT(0)|DIR_OUT(1)|DIR_OUT(3)|DIR_OUT(4);


  DDRB = DIR_OUT(1) | DIR_OUT(2);
  PORTB = 0x6;


  lcd_init();
  unsigned char i;
  unsigned char v = 0x20;
  unsigned char page = 0;
  unsigned char col = 0;
  unsigned short blc  = 0;
  unsigned short blv  = 9;

  clrscr();
  SET_PAGE(0);
  SET_COL(0);

  set_backlight(blv);

  while (1) { 
	char c;
	while (! (UCSR0A & (1<<RXC0)));
	c = UDR0;
	
	switch(c) {
	case 0x0c: // FF
	  col = 0;
	  page = 0;
	  clrscr();
	  break;
	case 0x08:
	  if (col > 0) col-=6;
	  SET_COL(col);
	  lcd_print_char(' ');
	  SET_COL(col);
	  break;
	case '\r':
	  page+=1;
	  col = 0;
	  SET_PAGE(page);
	  SET_COL(0);
	  break;
	case 0x1b:
	  // backlight down
	  if (blv > 0) {
		blv--;
		set_backlight(blv);
	  }
	  break;
	case 0x1d:
	  // backlight up
	  if (blv < 10) {
		blv++;
		set_backlight(blv);
	  }
	  break;
	default:
	  col+=6;
	  lcd_print_char(c);
	}

  }
  return 0;
}
