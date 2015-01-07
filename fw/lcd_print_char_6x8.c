
#define lcd_write(x,y) do { lcd_out(y,1); } while (0)





  /*
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
  */

#define SET_BITMAP(bm, a, b, c, d, e, f) do { \
	bm[0] = a;								  \
	bm[1] = b;								  \
	bm[2] = c;								  \
	bm[3] = d;								  \
	bm[4] = e;								  \
	bm[5] = f;								  \
  } while (0)

void
char_get_bitmap(unsigned char c, unsigned char bm[6])
{
	switch(c) {
	case ' ': 
	  SET_BITMAP(bm, 
				 0x00, 
				 0x00, 
				 0x00,
				 0x00,
				 0x00,
				 0x00);
	  break;
	case '!':
	  SET_BITMAP(bm, 
				 0x00,
				 0x00,
				 0x5f,
				 0x00,
				 0x00,
				 0x00);
		break;
	case '"': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x07,
				 0x00,
				 0x07,
				 0x00,
				 0x00);
	  break;
	case '#':
	  SET_BITMAP(bm, 
				 0x14,
				 0x3e,
				 0x14,
				 0x3e,
				 0x14,
				 0x00);
		break;
	case '$': 
	  SET_BITMAP(bm, 
				 0x24,
				 0x2a,
				 0x7f,
				 0x2a,
				 0x12,
				 0x00);
		break;
	case '%': 
	  SET_BITMAP(bm, 
				 0x26,
				 0x10,
				 0x08,
				 0x04,
				 0x32,
				 0x00);
		break;
	case '&': 
	  SET_BITMAP(bm, 
				 0x36,
				 0x49,
				 0x51,
				 0x28,
				 0x40,
				 0x00);
		break;
	case '\'': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x00,
				 0x07,
				 0x00,
				 0x00,
				 0x00);
		break;
	case '(': 
	  SET_BITMAP(bm, 
				 0x3e,
				 0x41,
				 0x00,
				 0x00,
				 0x00,
				 0x00);
		break;
	case ')': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x00,
				 0x00,
				 0x41,
				 0x3e,
				 0x00);
		break;
	case '*': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x2a,
				 0x1c,
				 0x2a,
				 0x00,
				 0x00);
		break;
	case '+': 
	  SET_BITMAP(bm, 
				 0x08,
				 0x08,
				 0x3e,
				 0x08,
				 0x08,
				 0x00);
		break;
	case ',': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x80,
				 0x60,
				 0x20,
				 0x00,
				 0x00);
	  break;
	case '-': 
	  SET_BITMAP(bm, 
				 0x08,
				 0x08,
				 0x08,
				 0x08,
				 0x08,
				 0x00);
		break;
	case '.': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x60,
				 0x60,
				 0x00,
				 0x00,
				 0x00);
		break;
	case '/': 
	  SET_BITMAP(bm, 
				 0x20,
				 0x10,
				 0x08,
				 0x04,
				 0x02,
				 0x00);
		break;
	case '0': 
	  SET_BITMAP(bm, 
				 0x3e,
				 0x51,
				 0x49,
				 0x45,
				 0x3e,
				 0x00);
		break;
	case '1': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x42,
				 0x7f,
				 0x40,
				 0x00,
				 0x00);
		break;
	case '2': 
	  SET_BITMAP(bm, 
				 0x42,
				 0x61,
				 0x51,
				 0x49,
				 0x46,
				 0x00);
		break;
	case '3': 
	  SET_BITMAP(bm, 
				 0x21,
				 0x41,
				 0x45,
				 0x4b,
				 0x31,
				 0x00);
		break;
	case '4':
	  SET_BITMAP(bm,  
				 0x18,
				 0x14,
				 0x12,
				 0x7f,
				 0x10,
				 0x00);
		break;
	case '5': 
	  SET_BITMAP(bm, 
				 0x27,
				 0x45,
				 0x45,
				 0x45,
				 0x39,
				 0x00);
		break;
	case '6': 
	  SET_BITMAP(bm, 
				 0x3c,
				 0x4a,
				 0x49,
				 0x49,
				 0x30,
				 0x00);
		break;
	case '7': 
	  SET_BITMAP(bm, 
				 0x01,
				 0x71,
				 0x09,
				 0x05,
				 0x03,
				 0x00);
		break;
	case '8': 
	  SET_BITMAP(bm, 
				 0x36,
				 0x49,
				 0x49,
				 0x49,
				 0x36,
				 0x00);
		break;
	case '9': 
	  SET_BITMAP(bm, 
				 0x06,
				 0x49,
				 0x49,
				 0x29,
				 0x1e,
				 0x00);
		break;
	case ':': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x36,
				 0x36,
				 0x00,
				 0x00,
				 0x00);
	  break;
	case ';': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x80,
				 0x6c,
				 0x2c,
				 0x00,
				 0x00);
		break;
	case '<': 
	  SET_BITMAP(bm, 
				 0x08,
				 0x14,
				 0x22,
				 0x41,
				 0x00,
				 0x00);
	  break;
	case '=': 
	  SET_BITMAP(bm, 
				 0x14,
				 0x14,
				 0x14,
				 0x14,
				 0x14,
				 0x00);
	  break;
	case '>': 
	  SET_BITMAP(bm, 
				 0x00,
				 0x41,
				 0x22,
				 0x14,
				 0x08,
				 0x00);
	  break;
	case '?': 
	  SET_BITMAP(bm, 
				 0x02,
				 0x01,
				 0x51,
				 0x09,
				 0x06,
				 0x00);
	  break;
	case '@': 
	  SET_BITMAP(bm, 
				 0x3e,
				 0x41,
				 0x5d,
				 0x55,
				 0x0e,
				 0x00);
	  break;
	case 'A': 
	  SET_BITMAP(bm,  
				 0x7e,
				 0x11,
				 0x11,
				 0x11,
				 0x7e,
				 0x00); 
	  break;
	case 'B': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x49,
				 0x49,
				 0x49,
				 0x36,
				 0x00); 
	  break;
	case 'C': 
	  SET_BITMAP(bm,  
				 0x3e,
				 0x41,
				 0x41,
				 0x41,
				 0x22,
				 0x00); 
	  break;
	case 'D': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x41,
				 0x41,
				 0x22,
				 0x1c,
				 0x00); 
	  break;
	case 'E': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x49,
				 0x49,
				 0x49,
				 0x41,
				 0x00); 
	  break;
	case 'F': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x09,
				 0x09,
				 0x09,
				 0x01,
				 0x00); 
	  break;
	case 'G': 
	  SET_BITMAP(bm,  
				 0x3e,
				 0x41,
				 0x41,
				 0x51,
				 0x32,
				 0x00); 
	  break;
	case 'H': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x08,
				 0x08,
				 0x08,
				 0x7f,
				 0x00); 
	  break;
	case 'I': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x41,
				 0x7f,
				 0x41,
				 0x00,
				 0x00); 
	  break;
	case 'J': 
	  SET_BITMAP(bm,  
				 0x20,
				 0x40,
				 0x41,
				 0x3f,
				 0x01,
				 0x00); 
	  break;
	case 'K': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x08,
				 0x14,
				 0x22,
				 0x41,
				 0x00); 
	  break;
	case 'L': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x40,
				 0x40,
				 0x40,
				 0x40,
				 0x00); 
	  break;
	case 'M': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x02,
				 0x04,
				 0x02,
				 0x7f,
				 0x00); 
	  break;
	case 'N': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x04,
				 0x08,
				 0x10,
				 0x7f,
				 0x00); 
	  break;
	case 'O': 
	  SET_BITMAP(bm,  
				 0x3e,
				 0x41,
				 0x41,
				 0x41,
				 0x3e,
				 0x00); 
	  break;
	case 'P': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x09,
				 0x09,
				 0x09,
				 0x06,
				 0x00); 
	  break;
	case 'Q': 
	  SET_BITMAP(bm,  
				 0x3e,
				 0x41,
				 0x51,
				 0x21,
				 0x5e,
				 0x00); 
	  break;
	case 'R': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x09,
				 0x19,
				 0x29,
				 0x46,
				 0x00); 
	  break;
	case 'S': 
	  SET_BITMAP(bm,  
				 0x46,
				 0x49,
				 0x49,
				 0x49,
				 0x31,
				 0x00); 
	  break;
	case 'T': 
	  SET_BITMAP(bm,  
				 0x01,
				 0x01,
				 0x7f,
				 0x01,
				 0x01,
				 0x00); 
	  break;
	case 'U': 
	  SET_BITMAP(bm,  
				 0x3f,
				 0x40,
				 0x40,
				 0x40,
				 0x3f,
				 0x00); 
	  break;
	case 'V': 
	  SET_BITMAP(bm,  
				 0x1f,
				 0x20,
				 0x40,
				 0x20,
				 0x1f,
				 0x00); 
	  break;
	case 'W': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x20,
				 0x18,
				 0x20,
				 0x7f,
				 0x00); 
	  break;
	case 'X': 
	  SET_BITMAP(bm,  
				 0x63,
				 0x14,
				 0x08,
				 0x14,
				 0x63,
				 0x00); 
	  break;
	case 'Y': 
	  SET_BITMAP(bm,  
				 0x03,
				 0x04,
				 0x78,
				 0x04,
				 0x03,
				 0x00);
	  break;
	case 'Z': 
	  SET_BITMAP(bm,  
				 0x61,
				 0x51,
				 0x49,
				 0x45,
				 0x43,
				 0x00);
	  break;
	case '[': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x41,
				 0x41,
				 0x00,
				 0x00,
				 0x00); 
	  break;
	case '\\':
	  SET_BITMAP(bm,  
				 0x02,
				 0x04,
				 0x08,
				 0x10,
				 0x20,
				 0x00); 
	  break;
	case ']': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x00,
				 0x41,
				 0x41,
				 0x7f,
				 0x00); 
	  break;
	case '^': 
	  SET_BITMAP(bm,  
				 0x04,
				 0x02,
				 0x01,
				 0x02,
				 0x04,
				 0x00); 
	  break;
	case '_': 
	  SET_BITMAP(bm,  
				 0x40,
				 0x40,
				 0x40,
				 0x40,
				 0x40,
				 0x00); 
	  break;
	case '`': 
	  SET_BITMAP(bm,  
				 0x01,
				 0x02,
				 0x00,
				 0x00,
				 0x00,
				 0x00); 
	  break;
	case 'a': 
	  SET_BITMAP(bm,  
				 0x20,
				 0x54,
				 0x54,
				 0x24,
				 0x78,
				 0x00); 
	  break;
	case 'b': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x28,
				 0x44,
				 0x44,
				 0x38,
				 0x00); 
	  break;
	case 'c': 
	  SET_BITMAP(bm,  
				 0x38,
				 0x44,
				 0x44,
				 0x44,
				 0x28,
				 0x00); 
	  break;
	case 'd': 
	  SET_BITMAP(bm,  
				 0x38,
				 0x44,
				 0x44,
				 0x28,
				 0x7f,
				 0x00); 
	  break;
	case 'e': 
	  SET_BITMAP(bm,  
				 0x38,
				 0x54,
				 0x54,
				 0x54,
				 0x18,
				 0x00); 
	  break;
	case 'f': 
	  SET_BITMAP(bm,  
				 0x08,
				 0x7e,
				 0x09,
				 0x09,
				 0x02,
				 0x00); 
	  break;
	case 'g': 
	  SET_BITMAP(bm,  
				 0x58,
				 0xa4,
				 0xa4,
				 0x94,
				 0x78,
				 0x00); 
	  break;
	case 'h': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x08,
				 0x04,
				 0x04,
				 0x78,
				 0x00); 
	  break;
	case 'i': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x44,
				 0x7d,
				 0x40,
				 0x00,
				 0x00); 
	  break;
	case 'j': 
	  SET_BITMAP(bm,  
				 0x60,
				 0x80,
				 0x84,
				 0x7d,
				 0x00,
				 0x00); 
	  break;
	case 'k': 
	  SET_BITMAP(bm,  
				 0x7f,
				 0x10,
				 0x18,
				 0x24,
				 0x40,
				 0x00); 
	  break;
	case 'l': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x41,
				 0x7f,
				 0x40,
				 0x00,
				 0x00); 
	  break;
	case 'm': 
	  SET_BITMAP(bm,  
				 0x7c,
				 0x04,
				 0x18,
				 0x04,
				 0x78,
				 0x00); 
	  break;
	case 'n': 
	  SET_BITMAP(bm,  
				 0x7c,
				 0x08,
				 0x04,
				 0x04,
				 0x78,
				 0x00); 
	  break;
	case 'o': 
	  SET_BITMAP(bm,  
				 0x38,
				 0x44,
				 0x44,
				 0x44,
				 0x38,
				 0x00); 
	  break;
	case 'p': 
	  SET_BITMAP(bm,  
				 0xfc,
				 0x24,
				 0x24,
				 0x24,
				 0x18,
				 0x00); 
	  break;
	case 'q': 
	  SET_BITMAP(bm,  
				 0x18,
				 0x24,
				 0x24,
				 0x24,
				 0xf8,
				 0x00); 
	  break;
	case 'r': 
	  SET_BITMAP(bm,  
				 0x7c,
				 0x08,
				 0x04,
				 0x04,
				 0x08,
				 0x00); 
	  break;
	case 's': 
	  SET_BITMAP(bm,  
				 0x48,
				 0x54,
				 0x54,
				 0x54,
				 0x24,
				 0x00); 
	  break;
	case 't': 
	  SET_BITMAP(bm,  
				 0x04,
				 0x3e,
				 0x44,
				 0x44,
				 0x20,
				 0x00); 
	  break;
	case 'u': 
	  SET_BITMAP(bm,  
				 0x3c,
				 0x40,
				 0x40,
				 0x20,
				 0x7c,
				 0x00); 
	  break;
	case 'v': 
	  SET_BITMAP(bm,  
				 0x0c,
				 0x30,
				 0x40,
				 0x30,
				 0x0c,
				 0x00); 
	  break;
	case 'w': 
	  SET_BITMAP(bm,  
				 0x3c,
				 0x40,
				 0x30,
				 0x40,
				 0x3c,
				 0x00); 
	  break;
	case 'x': 
	  SET_BITMAP(bm,  
				 0x44,
				 0x28,
				 0x10,
				 0x28,
				 0x44,
				 0x00); 
	  break;
	case 'y': 
	  SET_BITMAP(bm,  
				 0x5c,
				 0xa0,
				 0xa0,
				 0x90,
				 0x7c,
				 0x00); 
	  break;
	case 'z': 
	  SET_BITMAP(bm,  
				 0x44,
				 0x64,
				 0x54,
				 0x4c,
				 0x44,
				 0x00); 
	  break;
	case '{': 
	  SET_BITMAP(bm,  
				 0x08,
				 0x36,
				 0x41,
				 0x00,
				 0x00,
				 0x00);
	  break;
	case '|': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x00,
				 0x7f,
				 0x00,
				 0x00,
				 0x00); 
	  break;
	case '}': 
	  SET_BITMAP(bm,  
				 0x00,
				 0x00,
				 0x41,
				 0x36,
				 0x08,
				 0x00); 
	  break;
	case '~': 
	  SET_BITMAP(bm,  
				 0x08,
				 0x04,
				 0x08,
				 0x10,
				 0x08,
				 0x00); 
	  break;
	default: 
	  SET_BITMAP(bm, 
				 0xff,
				 0xff,
				 0xff,
				 0xff,
				 0xff,
				 0x00);
	  break;
    }
}


