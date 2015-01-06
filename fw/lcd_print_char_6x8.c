
#define lcd_write(x,y) do { lcd_out(y,1); } while (0)




void
lcd_print_char(unsigned char c)
{
	switch(c) {
	case ' ': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '!': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x5f);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '"': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x07);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x07);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '#': 
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x00);
		break;
	case '$': 
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x2a);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x2a);
		lcd_write(DATA, 0x12);
		lcd_write(DATA, 0x00);
		break;
	case '%': 
		lcd_write(DATA, 0x26);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x32);
		lcd_write(DATA, 0x00);
		break;
	case '&': 
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		break;
	case '\'': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x07);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '(': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case ')': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x00);
		break;
	case '*': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x2a);
		lcd_write(DATA, 0x1c);
		lcd_write(DATA, 0x2a);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '+': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	case ',': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x80);
		lcd_write(DATA, 0x60);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '-': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	case '.': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x60);
		lcd_write(DATA, 0x60);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '/': 
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x00);
		break;
	case '0': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x00);
		break;
	case '1': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x42);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '2': 
		lcd_write(DATA, 0x42);
		lcd_write(DATA, 0x61);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x46);
		lcd_write(DATA, 0x00);
		break;
	case '3': 
		lcd_write(DATA, 0x21);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x4b);
		lcd_write(DATA, 0x31);
		lcd_write(DATA, 0x00);
		break;
	case '4': 
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x12);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x00);
		break;
	case '5': 
		lcd_write(DATA, 0x27);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x39);
		lcd_write(DATA, 0x00);
		break;
	case '6': 
		lcd_write(DATA, 0x3c);
		lcd_write(DATA, 0x4a);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x30);
		lcd_write(DATA, 0x00);
		break;
	case '7': 
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x71);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x05);
		lcd_write(DATA, 0x03);
		lcd_write(DATA, 0x00);
		break;
	case '8': 
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x00);
		break;
	case '9': 
		lcd_write(DATA, 0x06);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x29);
		lcd_write(DATA, 0x1e);
		lcd_write(DATA, 0x00);
		break;
	case ':': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case ';': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x80);
		lcd_write(DATA, 0x6c);
		lcd_write(DATA, 0x2c);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '<': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x22);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '=': 
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x00);
		break;
	case '>': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x22);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	case '?': 
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x06);
		lcd_write(DATA, 0x00);
		break;
	case '@': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x5d);
		lcd_write(DATA, 0x55);
		lcd_write(DATA, 0x0e);
		lcd_write(DATA, 0x00);
		break;
	case 'A': 
		lcd_write(DATA, 0x7e);
		lcd_write(DATA, 0x11);
		lcd_write(DATA, 0x11);
		lcd_write(DATA, 0x11);
		lcd_write(DATA, 0x7e);
		lcd_write(DATA, 0x00);
		break;
	case 'B': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x00);
		break;
	case 'C': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x22);
		lcd_write(DATA, 0x00);
		break;
	case 'D': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x22);
		lcd_write(DATA, 0x1c);
		lcd_write(DATA, 0x00);
		break;
	case 'E': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		break;
	case 'F': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x00);
		break;
	case 'G': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x32);
		lcd_write(DATA, 0x00);
		break;
	case 'H': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case 'I': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case 'J': 
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x3f);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x00);
		break;
	case 'K': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x22);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		break;
	case 'L': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		break;
	case 'M': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case 'N': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case 'O': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x00);
		break;
	case 'P': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x06);
		lcd_write(DATA, 0x00);
		break;
	case 'Q': 
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x21);
		lcd_write(DATA, 0x5e);
		lcd_write(DATA, 0x00);
		break;
	case 'R': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x19);
		lcd_write(DATA, 0x29);
		lcd_write(DATA, 0x46);
		lcd_write(DATA, 0x00);
		break;
	case 'S': 
		lcd_write(DATA, 0x46);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x31);
		lcd_write(DATA, 0x00);
		break;
	case 'T': 
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x00);
		break;
	case 'U': 
		lcd_write(DATA, 0x3f);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x3f);
		lcd_write(DATA, 0x00);
		break;
	case 'V': 
		lcd_write(DATA, 0x1f);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x1f);
		lcd_write(DATA, 0x00);
		break;
	case 'W': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case 'X': 
		lcd_write(DATA, 0x63);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x14);
		lcd_write(DATA, 0x63);
		lcd_write(DATA, 0x00);
		break;
	case 'Y': 
		lcd_write(DATA, 0x03);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x03);
		lcd_write(DATA, 0x00);
		break;
	case 'Z': 
		lcd_write(DATA, 0x61);
		lcd_write(DATA, 0x51);
		lcd_write(DATA, 0x49);
		lcd_write(DATA, 0x45);
		lcd_write(DATA, 0x43);
		lcd_write(DATA, 0x00);
		break;
	case '[': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '\\': 
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x00);
		break;
	case ']': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case '^': 
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x00);
		break;
	case '_': 
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		break;
	case '`': 
		lcd_write(DATA, 0x01);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case 'a': 
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x00);
		break;
	case 'b': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x00);
		break;
	case 'c': 
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x00);
		break;
	case 'd': 
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		break;
	case 'e': 
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x00);
		break;
	case 'f': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x7e);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x09);
		lcd_write(DATA, 0x02);
		lcd_write(DATA, 0x00);
		break;
	case 'g': 
		lcd_write(DATA, 0x58);
		lcd_write(DATA, 0xa4);
		lcd_write(DATA, 0xa4);
		lcd_write(DATA, 0x94);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x00);
		break;
	case 'h': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x00);
		break;
	case 'i': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x7d);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case 'j': 
		lcd_write(DATA, 0x60);
		lcd_write(DATA, 0x80);
		lcd_write(DATA, 0x84);
		lcd_write(DATA, 0x7d);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case 'k': 
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		break;
	case 'l': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case 'm': 
		lcd_write(DATA, 0x7c);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x00);
		break;
	case 'n': 
		lcd_write(DATA, 0x7c);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x78);
		lcd_write(DATA, 0x00);
		break;
	case 'o': 
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x38);
		lcd_write(DATA, 0x00);
		break;
	case 'p': 
		lcd_write(DATA, 0xfc);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x00);
		break;
	case 'q': 
		lcd_write(DATA, 0x18);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0xf8);
		lcd_write(DATA, 0x00);
		break;
	case 'r': 
		lcd_write(DATA, 0x7c);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	case 's': 
		lcd_write(DATA, 0x48);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x24);
		lcd_write(DATA, 0x00);
		break;
	case 't': 
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x3e);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x00);
		break;
	case 'u': 
		lcd_write(DATA, 0x3c);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x20);
		lcd_write(DATA, 0x7c);
		lcd_write(DATA, 0x00);
		break;
	case 'v': 
		lcd_write(DATA, 0x0c);
		lcd_write(DATA, 0x30);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x30);
		lcd_write(DATA, 0x0c);
		lcd_write(DATA, 0x00);
		break;
	case 'w': 
		lcd_write(DATA, 0x3c);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x30);
		lcd_write(DATA, 0x40);
		lcd_write(DATA, 0x3c);
		lcd_write(DATA, 0x00);
		break;
	case 'x': 
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x28);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x00);
		break;
	case 'y': 
		lcd_write(DATA, 0x5c);
		lcd_write(DATA, 0xa0);
		lcd_write(DATA, 0xa0);
		lcd_write(DATA, 0x90);
		lcd_write(DATA, 0x7c);
		lcd_write(DATA, 0x00);
		break;
	case 'z': 
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x64);
		lcd_write(DATA, 0x54);
		lcd_write(DATA, 0x4c);
		lcd_write(DATA, 0x44);
		lcd_write(DATA, 0x00);
		break;
	case '{': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '|': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x7f);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		break;
	case '}': 
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x00);
		lcd_write(DATA, 0x41);
		lcd_write(DATA, 0x36);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	case '~': 
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x04);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x10);
		lcd_write(DATA, 0x08);
		lcd_write(DATA, 0x00);
		break;
	default:
		lcd_write(DATA, 0xff);
		lcd_write(DATA, 0xff);
		lcd_write(DATA, 0xff);
		lcd_write(DATA, 0xff);
		lcd_write(DATA, 0xff);
		lcd_write(DATA, 0x00);
		break;
	}
}
