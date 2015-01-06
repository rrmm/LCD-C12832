CPU=atmega88pa
XTAL=1000000

AVRISP=avrdude -P usb -c avrispmkII  
PRGMR=$(AVRISP)
UPLOADERVERBOSE=$(PRGMR) -p m88p
UPLOADER=$(UPLOADERVERBOSE) -p m88p -q -q 



CC=avr-gcc -O2 -g -mmcu=$(CPU) -DF_CPU=$(XTAL) 
LD=avr-ld 
OBJCPY=avr-objcopy 
LIBS=-lc 


ELF=lcd-test.elf
HEX=lcd-test.hex

all: $(HEX)

$(HEX): $(ELF) 
	$(OBJCPY) $(ELF) -O ihex $(HEX)

$(ELF): lcd-test.o
	$(CC) -o lcd-test.elf $^ $(LIBS)

.c.o:
	$(CC) -c $< $(CFLAGS)

up: $(HEX)
	sudo $(UPLOADER)	-U flash:w:$(HEX):i

verify: $(HEX)
	sudo $(UPLOADERVERBOSE)	-U flash:v:$(HEX):i

print_fuse:
	sudo $(UPLOADER)	-U lfuse:r:-:b
	@#sudo $(UPLOADER)	-U hfuse:r:-:b

#write_fuse:
	#sudo $(UPLOADER)	-U lfuse:w:0b11101101:m 

# performs a dummy sig read to reset the part 
r: 
	sudo $(UPLOADER)	-U signature:r:-:h

clean:
	rm -rf *~ *.o $(ELF) $(HEX)
