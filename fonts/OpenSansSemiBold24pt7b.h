// Created by https://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Open_Sans_SemiBold_24Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xEE,0xEE,0xEE,0xEE,0xEE,0xEC,0x0E,0xEE,0xE0, // '!'
	0x66,0x33,0x19,0x8C,0xC6,0x63,0x30, // '"'
	0x06,0x30,0x0C,0x60,0x18,0xC0,0x71,0x80,0xC6,0x0F,0xFF,0x9F,0xFF,0x06,0x30,0x18,0xE0,0x31,0x83,0xFF,0xF7,0xFF,0xE3,0x8C,0x06,0x38,0x0C,0x60,0x18,0xC0,0x31,0x80, // '#'
	0x06,0x00,0x30,0x07,0xF0,0xFF,0xC7,0x66,0x73,0x03,0x98,0x0E,0xC0,0x7E,0x00,0xFC,0x01,0xF8,0x0D,0xC0,0x67,0x03,0x3B,0x1B,0x9F,0xFC,0x7F,0x80,0x30,0x01,0x80, // '$'
	0x3C,0x06,0x07,0xE0,0xE0,0xE6,0x0C,0x0C,0x71,0x80,0xC7,0x18,0x0C,0x73,0x00,0xC7,0x70,0x0E,0x66,0x78,0x7E,0xEF,0xC3,0xCC,0xCE,0x01,0xDC,0x60,0x19,0xC6,0x03,0x1C,0x60,0x71,0xC6,0x06,0x0C,0xE0,0xE0,0xFC,0x0C,0x07,0x80, // '%'
	0x0F,0x80,0x0F,0xF0,0x03,0x8E,0x00,0xC3,0x80,0x30,0xE0,0x0E,0x70,0x01,0xFC,0x00,0x3C,0x00,0x3F,0x07,0x1F,0xE1,0xCF,0x3C,0xE3,0x87,0xB8,0xE0,0x7C,0x38,0x0F,0x07,0x0F,0xC1,0xFF,0xB8,0x1F,0x87,0x00, // '&'
	0xDB,0x6D,0x80, // '''
	0x1C,0x30,0xE3,0x87,0x0C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x30,0x70,0xE0,0xE0,0xC1,0xC0, // '('
	0xE0,0xC1,0xC1,0x83,0x83,0x07,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0C,0x38,0x71,0xC3,0x0E,0x00, // ')'
	0x0E,0x00,0xE0,0x0E,0x08,0x42,0xFF,0xEF,0xFE,0x0E,0x01,0xB0,0x3B,0x83,0x18,0x11,0x00, // '*'
	0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x7F,0xFB,0xFF,0xC0,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00, // '+'
	0x73,0x39,0xCC,0x60, // ','
	0xFD,0xF8, // '-'
	0xEE,0xEE, // '.'
	0x03,0x80,0xC0,0x70,0x1C,0x06,0x03,0x80,0xE0,0x30,0x1C,0x06,0x03,0x80,0xE0,0x30,0x1C,0x07,0x01,0x80,0xE0,0x00, // '/'
	0x1F,0x01,0xFE,0x1C,0x38,0xE1,0xCE,0x06,0x70,0x3B,0x81,0xDC,0x0E,0xE0,0x77,0x03,0xB8,0x1D,0xC0,0xEE,0x07,0x38,0x71,0xC3,0x87,0xF8,0x1F,0x80, // '0'
	0x0E,0x1E,0x3E,0xF6,0xE6,0x46,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // '1'
	0x1F,0x83,0xFE,0x1C,0x38,0x01,0xC0,0x06,0x00,0x70,0x03,0x80,0x3C,0x01,0xC0,0x1C,0x01,0xC0,0x1C,0x01,0xC0,0x1C,0x01,0xC0,0x1F,0xFE,0xFF,0xF0, // '2'
	0x3F,0x87,0xFE,0x18,0x38,0x01,0xC0,0x0E,0x00,0x70,0x07,0x03,0xF0,0x1F,0xC0,0x0F,0x00,0x1C,0x00,0xE0,0x07,0x00,0x7B,0x07,0x9F,0xF8,0x7F,0x00, // '3'
	0x00,0xE0,0x03,0xC0,0x07,0x80,0x1B,0x00,0x7E,0x00,0xDC,0x03,0x38,0x0E,0x70,0x38,0xE0,0x61,0xC1,0x83,0x87,0xFF,0xEF,0xFF,0xC0,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0, // '4'
	0x7F,0xE3,0xFF,0x1C,0x00,0xE0,0x07,0x00,0x38,0x01,0xFE,0x0F,0xF8,0x01,0xE0,0x07,0x80,0x1C,0x00,0xE0,0x07,0x00,0x73,0x07,0x9F,0xF8,0x7F,0x00, // '5'
	0x07,0xE0,0xFF,0x0F,0x00,0xE0,0x07,0x00,0x30,0x03,0x9E,0x1F,0xFC,0xF0,0xE7,0x03,0xB8,0x1D,0xC0,0xEE,0x07,0x38,0x39,0xE3,0x87,0xF8,0x0F,0x80, // '6'
	0xFF,0xF7,0xFF,0x80,0x1C,0x01,0xC0,0x0E,0x00,0xE0,0x07,0x00,0x70,0x03,0x80,0x1C,0x01,0xC0,0x0E,0x00,0xE0,0x07,0x00,0x70,0x03,0x80,0x38,0x00, // '7'
	0x1F,0x81,0xFE,0x1C,0x38,0xC0,0xC6,0x06,0x38,0x71,0xE7,0x07,0xF0,0x1F,0x83,0xDE,0x1C,0x39,0xC0,0xEE,0x07,0x70,0x3B,0xC3,0x8F,0xFC,0x1F,0x80, // '8'
	0x1F,0x01,0xFE,0x1C,0x79,0xC1,0xCE,0x07,0x70,0x3B,0x81,0xDC,0x0E,0x70,0xF3,0xFF,0x87,0x9C,0x00,0xC0,0x0E,0x00,0x70,0x0F,0x0F,0xF0,0x7E,0x00, // '9'
	0xEE,0xEE,0x00,0x00,0x0E,0xEE,0xE0, // ':'
	0x73,0x9C,0xE0,0x00,0x00,0x00,0x1C,0xE6,0x73,0x18, // ';'
	0x00,0x10,0x03,0x80,0x78,0x0F,0x01,0xE0,0x7C,0x03,0xC0,0x0F,0x80,0x0F,0x80,0x1F,0x00,0x3C,0x00,0x20, // '<'
	0xFF,0xF7,0xFF,0x80,0x00,0x00,0x00,0x00,0x7F,0xFB,0xFF,0xC0, // '='
	0x80,0x07,0x00,0x1E,0x00,0x3C,0x00,0x7C,0x00,0xF8,0x03,0xC0,0x7C,0x1F,0x03,0xE0,0x3C,0x01,0x00,0x00, // '>'
	0x3F,0x1F,0xF1,0x87,0x00,0x60,0x0C,0x03,0x80,0x70,0x3C,0x0F,0x01,0x80,0x70,0x0E,0x00,0x00,0x38,0x07,0x00,0xE0,0x1C,0x00, // '?'
	0x01,0xFC,0x00,0x3F,0xF8,0x03,0x80,0xE0,0x30,0x01,0x83,0x00,0x0E,0x38,0x7E,0x31,0x8F,0xF1,0x8C,0x61,0x86,0xE7,0x0C,0x36,0x30,0x63,0xB1,0x83,0x19,0xCE,0x38,0xC6,0x3F,0xFC,0x30,0xF1,0xC1,0xC0,0x00,0x06,0x00,0x00,0x1C,0x02,0x00,0x7F,0xF0,0x00,0xFF,0x00, // '@'
	0x03,0xC0,0x01,0xE0,0x01,0xF0,0x00,0xFC,0x00,0x66,0x00,0x73,0x80,0x39,0xC0,0x18,0x60,0x1C,0x38,0x0E,0x1C,0x0F,0xFF,0x07,0xFF,0x83,0x81,0xC3,0x80,0x71,0xC0,0x38,0xC0,0x1C,0xE0,0x07,0x00, // 'A'
	0xFF,0x83,0xFF,0x8E,0x0F,0x38,0x1C,0xE0,0x73,0x81,0xCE,0x0E,0x3F,0xF0,0xFF,0xE3,0x83,0xCE,0x07,0x38,0x0E,0xE0,0x3B,0x81,0xEE,0x0F,0x3F,0xF8,0xFF,0xC0, // 'B'
	0x07,0xF0,0x7F,0xE3,0xC1,0x8E,0x00,0x70,0x01,0xC0,0x07,0x00,0x38,0x00,0xE0,0x03,0x80,0x06,0x00,0x1C,0x00,0x70,0x01,0xE0,0x03,0xC0,0x87,0xFE,0x07,0xF0, // 'C'
	0xFF,0x80,0xFF,0xE0,0xE0,0xF8,0xE0,0x38,0xE0,0x1C,0xE0,0x1C,0xE0,0x1C,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x1C,0xE0,0x1C,0xE0,0x1C,0xE0,0x38,0xE0,0xF0,0xFF,0xE0,0xFF,0x80, // 'D'
	0xFF,0xDF,0xFB,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0xFC,0xFF,0x9C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0xFE,0xFF,0xC0, // 'E'
	0xFF,0xDF,0xFB,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xFF,0xDF,0xFB,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x00, // 'F'
	0x03,0xF8,0x1F,0xF8,0xF8,0x21,0xC0,0x07,0x00,0x0E,0x00,0x1C,0x00,0x70,0x00,0xE0,0xFD,0xC1,0xF9,0x80,0x73,0x80,0xE7,0x01,0xCF,0x03,0x8F,0x07,0x0F,0xFE,0x07,0xF8, // 'G'
	0xE0,0x1D,0xC0,0x3B,0x80,0x77,0x00,0xEE,0x01,0xDC,0x03,0xB8,0x07,0x7F,0xFE,0xFF,0xFD,0xC0,0x3B,0x80,0x77,0x00,0xEE,0x01,0xDC,0x03,0xB8,0x07,0x70,0x0E,0xE0,0x1C, // 'H'
	0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xE0, // 'I'
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x1C,0xFC,0xF8, // 'J'
	0xE0,0x73,0x83,0xCE,0x0E,0x38,0x70,0xE3,0x83,0x9C,0x0E,0xE0,0x3F,0x80,0xFE,0x03,0xDC,0x0E,0x78,0x38,0xE0,0xE1,0xC3,0x87,0x8E,0x0E,0x38,0x1C,0xE0,0x78, // 'K'
	0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0xFE,0xFF,0xC0, // 'L'
	0xF0,0x03,0xDF,0x00,0xFB,0xE0,0x1F,0x7C,0x03,0xEF,0xC0,0xFD,0xD8,0x1B,0xBB,0x07,0x77,0x70,0xCE,0xE6,0x19,0xDC,0xE7,0x3B,0x9C,0xC7,0x71,0x98,0xEE,0x3F,0x1D,0xC7,0xC3,0xB8,0x78,0x77,0x0F,0x0E,0xE1,0xC1,0xC0, // 'M'
	0xF0,0x0E,0xF8,0x0E,0xF8,0x0E,0xFC,0x0E,0xFE,0x0E,0xEE,0x0E,0xE7,0x0E,0xE7,0x0E,0xE3,0x8E,0xE1,0xCE,0xE1,0xCE,0xE0,0xEE,0xE0,0xFE,0xE0,0x7E,0xE0,0x3E,0xE0,0x3E,0xE0,0x1E, // 'N'
	0x07,0xF0,0x07,0xFF,0x03,0xC1,0xE0,0xE0,0x38,0x70,0x07,0x1C,0x01,0xC7,0x00,0x73,0x80,0x0E,0xE0,0x03,0xB8,0x00,0xE7,0x00,0x71,0xC0,0x1C,0x70,0x07,0x0E,0x03,0x83,0xC1,0xE0,0x7F,0xF0,0x07,0xF0,0x00, // 'O'
	0xFF,0x87,0xFF,0x38,0x39,0xC0,0xEE,0x07,0x70,0x3B,0x81,0xDC,0x3C,0xFF,0xC7,0xF8,0x38,0x01,0xC0,0x0E,0x00,0x70,0x03,0x80,0x1C,0x00,0xE0,0x00, // 'P'
	0x07,0xF0,0x07,0xFF,0x03,0xC1,0xE0,0xE0,0x38,0x70,0x07,0x1C,0x01,0xC7,0x00,0x73,0x80,0x0E,0xE0,0x03,0xB8,0x00,0xE7,0x00,0x71,0xC0,0x1C,0x70,0x07,0x0E,0x03,0x83,0xC1,0xE0,0x7F,0xF0,0x07,0xF0,0x00,0x1E,0x00,0x03,0xC0,0x00,0x78,0x00,0x0F,0x00, // 'Q'
	0xFF,0x03,0xFF,0x0E,0x1E,0x38,0x38,0xE0,0xE3,0x83,0x8E,0x0E,0x38,0x78,0xFF,0xC3,0xFC,0x0E,0x38,0x38,0xE0,0xE1,0xC3,0x83,0x8E,0x0E,0x38,0x1C,0xE0,0x70, // 'R'
	0x1F,0xC7,0xFC,0x70,0x4E,0x00,0xE0,0x0E,0x00,0x78,0x07,0xE0,0x1F,0x80,0x7C,0x01,0xE0,0x0E,0x00,0xE0,0x0E,0xC1,0xCF,0xFC,0x7F,0x00, // 'S'
	0xFF,0xFD,0xFF,0xF8,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00, // 'T'
	0xE0,0x1D,0xC0,0x3B,0x80,0x77,0x00,0xEE,0x01,0xDC,0x03,0xB8,0x07,0x70,0x0E,0xE0,0x1D,0xC0,0x3B,0x80,0x77,0x00,0xEE,0x01,0xCE,0x07,0x1E,0x1E,0x1F,0xF8,0x0F,0xC0, // 'U'
	0xE0,0x0E,0x60,0x0C,0x70,0x1C,0x70,0x1C,0x30,0x18,0x38,0x38,0x38,0x38,0x18,0x30,0x1C,0x70,0x1C,0x70,0x0C,0xE0,0x0E,0xE0,0x0E,0xE0,0x06,0xC0,0x07,0xC0,0x07,0xC0,0x03,0x80, // 'V'
	0xE0,0x38,0x0E,0x60,0x38,0x0C,0x70,0x7C,0x1C,0x70,0x7C,0x1C,0x70,0x6C,0x1C,0x30,0xEC,0x18,0x38,0xEE,0x38,0x38,0xCE,0x38,0x38,0xC6,0x38,0x19,0xC7,0x30,0x1D,0xC7,0x70,0x1D,0x83,0x70,0x1D,0x83,0x70,0x0F,0x83,0xE0,0x0F,0x01,0xE0,0x0F,0x01,0xE0,0x07,0x01,0xC0, // 'W'
	0x70,0x1C,0x70,0x1C,0x38,0x38,0x1C,0x70,0x1C,0x70,0x0E,0xE0,0x07,0xC0,0x07,0xC0,0x03,0x80,0x07,0xC0,0x0E,0xE0,0x0E,0xE0,0x1C,0x70,0x38,0x38,0x38,0x38,0x70,0x1C,0xE0,0x1E, // 'X'
	0xE0,0x1C,0xE0,0x71,0xC0,0xE1,0xC3,0x83,0x87,0x03,0x9C,0x07,0x38,0x07,0xE0,0x07,0x80,0x0F,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00, // 'Y'
	0xFF,0xF7,0xFF,0x80,0x38,0x01,0xC0,0x1C,0x01,0xC0,0x0E,0x00,0xE0,0x0E,0x00,0x70,0x07,0x00,0x70,0x03,0x80,0x38,0x03,0x80,0x1F,0xFE,0xFF,0xF0, // 'Z'
	0xFB,0xEC,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x3E,0xF8, // '['
	0xE0,0x18,0x07,0x01,0xC0,0x30,0x0E,0x03,0x80,0x60,0x1C,0x03,0x00,0xE0,0x38,0x06,0x01,0xC0,0x70,0x0C,0x03,0x80, // '\'
	0xFB,0xE1,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0xBE,0xF8, // ']'
	0x06,0x00,0x1C,0x00,0xF0,0x03,0x60,0x1D,0x80,0x63,0x03,0x8C,0x0C,0x18,0x30,0x61,0x80,0xC6,0x03,0x00, // '^'
	0xFF,0xDF,0xF8, // '_'
	0xF0,0xE0,0xE0,0xE0, // '`'
	0x1F,0x83,0xFC,0x30,0xE0,0x0E,0x00,0xE1,0xFE,0x7F,0xEF,0x0E,0xE0,0xEE,0x0E,0xE1,0xE7,0xF6,0x3E,0x60, // 'a'
	0xE0,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0x77,0xC3,0xFF,0x1E,0x1C,0xE0,0xE7,0x03,0xB8,0x1D,0xC0,0xEE,0x07,0x70,0x3B,0x83,0x9E,0x1C,0xDF,0xC6,0x7C,0x00, // 'b'
	0x0F,0xC7,0xF9,0xE0,0x38,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x0E,0x01,0xE1,0x1F,0xE1,0xF8, // 'c'
	0x00,0x70,0x03,0x80,0x1C,0x00,0xE0,0x07,0x0F,0xB8,0xFF,0xCE,0x1E,0x70,0x77,0x03,0xB8,0x1D,0xC0,0xEE,0x07,0x70,0x39,0xC1,0xCE,0x1E,0x3F,0xF0,0xF9,0x80, // 'd'
	0x0F,0x81,0xFE,0x1C,0x38,0xC0,0xEE,0x07,0x7F,0xFB,0xFF,0xDC,0x00,0xE0,0x03,0x80,0x1E,0x08,0x7F,0xC0,0xFC,0x00, // 'e'
	0x0F,0xC3,0xF0,0x70,0x0C,0x01,0x80,0xFF,0x3F,0xE0,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00, // 'f'
	0x0F,0xF8,0xFF,0xE3,0x8E,0x1C,0x38,0x70,0xE1,0xC3,0x83,0x8E,0x0F,0xF0,0x1F,0x80,0xC0,0x03,0x00,0x0F,0xF8,0x3F,0xF1,0xC1,0xCE,0x03,0x38,0x0C,0xE0,0x71,0xFF,0x83,0xF8,0x00, // 'g'
	0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0xF8,0xFF,0xCF,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E, // 'h'
	0xEE,0xE0,0x0E,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE, // 'i'
	0x1C,0x38,0x70,0x00,0x03,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0xBE,0x78, // 'j'
	0xE0,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0x70,0x73,0x87,0x1C,0x70,0xE7,0x07,0x70,0x3F,0x01,0xFC,0x0F,0xF0,0x73,0x83,0x8E,0x1C,0x38,0xE1,0xE7,0x07,0x80, // 'k'
	0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE, // 'l'
	0xCF,0x8F,0x8D,0xFD,0xFC,0xF1,0xF0,0xEE,0x0E,0x0E,0xE0,0xE0,0xEE,0x0E,0x0E,0xE0,0xE0,0xEE,0x0E,0x0E,0xE0,0xE0,0xEE,0x0E,0x0E,0xE0,0xE0,0xEE,0x0E,0x0E,0xE0,0xE0,0xE0, // 'm'
	0xCF,0x8D,0xFC,0xF0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xE0, // 'n'
	0x0F,0x80,0xFF,0x87,0x8F,0x1C,0x1C,0xE0,0x3B,0x80,0xEE,0x03,0xB8,0x0E,0xE0,0x39,0xC1,0xC7,0x8F,0x0F,0xF8,0x0F,0x80, // 'o'
	0xCF,0x86,0xFE,0x3C,0x39,0xC1,0xCE,0x07,0x70,0x3B,0x81,0xDC,0x0E,0xE0,0x77,0x07,0x3C,0x39,0xFF,0x8E,0xF8,0x70,0x03,0x80,0x1C,0x00,0xE0,0x07,0x00,0x38,0x00, // 'p'
	0x1F,0x31,0xFF,0x9C,0x3C,0xE0,0xEE,0x07,0x70,0x3B,0x81,0xDC,0x0E,0xE0,0x73,0x83,0x9C,0x3C,0x7F,0xE1,0xF7,0x00,0x38,0x01,0xC0,0x0E,0x00,0x70,0x03,0x80,0x1C, // 'q'
	0xCF,0x6F,0x3F,0x9E,0x0E,0x07,0x03,0x81,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x00, // 'r'
	0x3F,0x8F,0xF3,0x82,0x70,0x0F,0x00,0xF8,0x0F,0xE0,0x3E,0x01,0xC0,0x3B,0x07,0x7F,0xC7,0xF0, // 's'
	0x18,0x0C,0x0E,0x0F,0xEF,0xF1,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x03,0x81,0xC0,0x7C,0x1E, // 't'
	0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE0,0xEE,0x0E,0xE1,0xE7,0xF6,0x3E,0x60, // 'u'
	0xE0,0x39,0x80,0xC7,0x07,0x1C,0x1C,0x30,0xE0,0xE3,0x81,0x8E,0x07,0x70,0x1D,0xC0,0x36,0x00,0xD8,0x03,0xE0,0x07,0x00, // 'v'
	0xE0,0xF0,0x73,0x07,0x83,0x1C,0x3C,0x38,0xE3,0xF1,0xC3,0x1B,0x8C,0x1C,0xCC,0xE0,0xE6,0x67,0x07,0x73,0xB8,0x1B,0x0D,0x80,0xD8,0x7C,0x07,0xC3,0xE0,0x1C,0x1E,0x00,0xE0,0x70,0x00, // 'w'
	0x70,0x71,0xE3,0x83,0x8E,0x07,0x70,0x0D,0x80,0x3E,0x00,0x70,0x03,0xE0,0x1D,0xC0,0x77,0x03,0x8E,0x1C,0x1C,0x70,0x70, // 'x'
	0xE0,0x39,0xC1,0xC7,0x07,0x1C,0x1C,0x38,0xE0,0xE3,0x81,0x8E,0x07,0x70,0x1D,0xC0,0x36,0x00,0xF8,0x01,0xE0,0x07,0x00,0x1C,0x00,0x70,0x03,0x80,0x1E,0x01,0xF0,0x07,0x00,0x00, // 'y'
	0xFF,0xBF,0xE0,0x38,0x1C,0x0E,0x03,0x81,0xC0,0xE0,0x38,0x1C,0x0E,0x03,0xFE,0xFF,0x80, // 'z'
	0x0E,0x1E,0x1C,0x18,0x18,0x18,0x18,0x38,0x38,0xF0,0xE0,0x78,0x38,0x18,0x18,0x18,0x18,0x18,0x1C,0x1E,0x0E, // '{'
	0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE, // '|'
	0xE0,0xF0,0x70,0x30,0x30,0x30,0x30,0x38,0x38,0x1E,0x0E,0x3C,0x38,0x30,0x30,0x30,0x30,0x30,0x70,0xF0,0xC0 // '}'
};
const GFXglyph Open_Sans_SemiBold_24Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   2,   1,   7,    0,   -1 }, // ' '
	  {     1,   4,  17,   8,    2,  -17 }, // '!'
	  {    10,   9,   6,  11,    1,  -17 }, // '"'
	  {    17,  15,  17,  17,    1,  -17 }, // '#'
	  {    49,  13,  19,  15,    1,  -18 }, // '$'
	  {    80,  20,  17,  22,    1,  -17 }, // '%'
	  {   123,  18,  17,  19,    1,  -17 }, // '&'
	  {   162,   3,   6,   7,    2,  -17 }, // '''
	  {   165,   7,  21,   9,    1,  -17 }, // '('
	  {   184,   7,  21,   9,    1,  -17 }, // ')'
	  {   203,  12,  11,  14,    1,  -18 }, // '*'
	  {   220,  13,  12,  15,    1,  -15 }, // '+'
	  {   240,   5,   6,   7,    1,   -3 }, // ','
	  {   244,   7,   2,   9,    1,   -8 }, // '-'
	  {   246,   4,   4,   8,    2,   -4 }, // '.'
	  {   248,  10,  17,  10,    0,  -17 }, // '/'
	  {   270,  13,  17,  15,    1,  -17 }, // '0'
	  {   298,   8,  17,  15,    2,  -17 }, // '1'
	  {   315,  13,  17,  15,    1,  -17 }, // '2'
	  {   343,  13,  17,  15,    1,  -17 }, // '3'
	  {   371,  15,  17,  15,    0,  -17 }, // '4'
	  {   403,  13,  17,  15,    1,  -17 }, // '5'
	  {   431,  13,  17,  15,    1,  -17 }, // '6'
	  {   459,  13,  17,  15,    1,  -17 }, // '7'
	  {   487,  13,  17,  15,    1,  -17 }, // '8'
	  {   515,  13,  17,  15,    1,  -17 }, // '9'
	  {   543,   4,  13,   8,    2,  -13 }, // ':'
	  {   550,   5,  16,   8,    1,  -13 }, // ';'
	  {   560,  13,  12,  15,    1,  -15 }, // '<'
	  {   580,  13,   7,  15,    1,  -12 }, // '='
	  {   592,  13,  12,  15,    1,  -15 }, // '>'
	  {   612,  11,  17,  12,    0,  -17 }, // '?'
	  {   636,  21,  19,  23,    1,  -17 }, // '@'
	  {   686,  17,  17,  17,    0,  -17 }, // 'A'
	  {   723,  14,  17,  17,    2,  -17 }, // 'B'
	  {   753,  14,  17,  16,    1,  -17 }, // 'C'
	  {   783,  16,  17,  19,    2,  -17 }, // 'D'
	  {   817,  11,  17,  14,    2,  -17 }, // 'E'
	  {   841,  11,  17,  14,    2,  -17 }, // 'F'
	  {   865,  15,  17,  18,    1,  -17 }, // 'G'
	  {   897,  15,  17,  19,    2,  -17 }, // 'H'
	  {   929,   4,  17,   8,    2,  -17 }, // 'I'
	  {   938,   8,  22,   8,   -2,  -17 }, // 'J'
	  {   960,  14,  17,  16,    2,  -17 }, // 'K'
	  {   990,  11,  17,  14,    2,  -17 }, // 'L'
	  {  1014,  19,  17,  23,    2,  -17 }, // 'M'
	  {  1055,  16,  17,  20,    2,  -17 }, // 'N'
	  {  1089,  18,  17,  20,    1,  -17 }, // 'O'
	  {  1128,  13,  17,  16,    2,  -17 }, // 'P'
	  {  1156,  18,  21,  20,    1,  -17 }, // 'Q'
	  {  1204,  14,  17,  16,    2,  -17 }, // 'R'
	  {  1234,  12,  17,  14,    1,  -17 }, // 'S'
	  {  1260,  15,  17,  15,    0,  -17 }, // 'T'
	  {  1292,  15,  17,  19,    2,  -17 }, // 'U'
	  {  1324,  16,  17,  16,    0,  -17 }, // 'V'
	  {  1358,  24,  17,  24,    0,  -17 }, // 'W'
	  {  1409,  16,  17,  16,    0,  -17 }, // 'X'
	  {  1443,  15,  17,  15,    0,  -17 }, // 'Y'
	  {  1475,  13,  17,  15,    1,  -17 }, // 'Z'
	  {  1503,   6,  21,   9,    2,  -17 }, // '['
	  {  1519,  10,  17,  10,    0,  -17 }, // '\'
	  {  1541,   6,  21,   9,    1,  -17 }, // ']'
	  {  1557,  14,  11,  14,    0,  -17 }, // '^'
	  {  1577,  11,   2,  11,    0,    2 }, // '_'
	  {  1580,   7,   4,  15,    4,  -19 }, // '`'
	  {  1584,  12,  13,  15,    1,  -13 }, // 'a'
	  {  1604,  13,  18,  16,    2,  -18 }, // 'b'
	  {  1634,  11,  13,  13,    1,  -13 }, // 'c'
	  {  1652,  13,  18,  16,    1,  -18 }, // 'd'
	  {  1682,  13,  13,  15,    1,  -13 }, // 'e'
	  {  1704,  11,  18,  10,    0,  -18 }, // 'f'
	  {  1729,  14,  19,  14,    0,  -13 }, // 'g'
	  {  1763,  12,  18,  16,    2,  -18 }, // 'h'
	  {  1790,   4,  18,   8,    2,  -18 }, // 'i'
	  {  1799,   7,  24,   8,   -1,  -18 }, // 'j'
	  {  1820,  13,  18,  15,    2,  -18 }, // 'k'
	  {  1850,   4,  18,   8,    2,  -18 }, // 'l'
	  {  1859,  20,  13,  24,    2,  -13 }, // 'm'
	  {  1892,  12,  13,  16,    2,  -13 }, // 'n'
	  {  1912,  14,  13,  16,    1,  -13 }, // 'o'
	  {  1935,  13,  19,  16,    2,  -13 }, // 'p'
	  {  1966,  13,  19,  16,    1,  -13 }, // 'q'
	  {  1997,   9,  13,  11,    2,  -13 }, // 'r'
	  {  2012,  11,  13,  13,    1,  -13 }, // 's'
	  {  2030,   9,  16,  10,    0,  -16 }, // 't'
	  {  2048,  12,  13,  16,    2,  -13 }, // 'u'
	  {  2068,  14,  13,  14,    0,  -13 }, // 'v'
	  {  2091,  21,  13,  21,    0,  -13 }, // 'w'
	  {  2126,  14,  13,  14,    0,  -13 }, // 'x'
	  {  2149,  14,  19,  14,    0,  -13 }, // 'y'
	  {  2183,  10,  13,  12,    1,  -13 }, // 'z'
	  {  2200,   8,  21,  10,    1,  -17 }, // '{'
	  {  2221,   4,  24,  14,    5,  -18 }, // '|'
	  {  2233,   8,  21,  10,    1,  -17 } // '}'
};
const GFXfont Open_Sans_SemiBold_24 PROGMEM = {
(uint8_t  *)Open_Sans_SemiBold_24Bitmaps,(GFXglyph *)Open_Sans_SemiBold_24Glyphs,0x20, 0x7E, 33};
