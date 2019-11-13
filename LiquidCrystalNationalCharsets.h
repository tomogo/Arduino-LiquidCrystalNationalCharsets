/*
Czech charset for LCD display. There are only czech small chars: áčďéěíňóřšťúůýž
you can add next chars you need for your language

There are named [long/hook/ring/umlaut]_[capital]

Using:

#include <LiquidCrystal.h>
#include <LiquidCrystalNationalCharsets.h>

const int RS = 8;
const int EN = 9;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;

LiquidCrystal lcd( RS, EN, d4, d5, d6, d7);

void setup() {
// You can add chars with id 0-7 in procedure: createChar(yourLCD, id, charMap, charInsteadOf)

createChar(lcd, 0, hook_c, '#');
createChar(lcd, 1, hook_e, '$');
createChar(lcd, 2, hook_s, '%');
createChar(lcd, 3, long_i, '^');
createChar(lcd, 4, hook_d, '&');
createChar(lcd, 5, hook_z, '|');
createChar(lcd, 6, long_u, ''');
createChar(lcd, 7, ring_u, '+');

lcd.begin(16,2);

// Print on LCD by procedure: writeLCD(yourLCD, char/String, column, row)
// This prints "Test: ěšíďžúů" on the cursor position: 
writeLCD(lcd, "Test: #$%^&|'+", -1, -1);

//This prints "ě" on row 1 
writeLCD(lcd, '#', 0, 1);

//This prints "Hi!" on cursor position:
writeLCD(lcd, "Hi!", -1, -1);
}
*/


#ifndef LiquidCrystalNationalCharsets_h
#define LiquidCrystalNationalCharsets_h

void createChar(LiquidCrystal lcd, uint8_t location, uint8_t charmap[], uint8_t instead);
void writeLCD(LiquidCrystal lcd, uint8_t outChar, uint8_t column, uint8_t row);
void writeLCD(LiquidCrystal lcd, String text, uint8_t column, uint8_t row);

// Czech small capitals
uint8_t smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
uint8_t long_a[8] = {
  B00010,
  B00100,
  B01110,
  B00001,
  B01111,
  B10001,
  B01110,
};
uint8_t hook_c[8] = {
  B01010,
  B00100,
  B01110,
  B10000,
  B10000,
  B10001,
  B01110,
};
uint8_t hook_d[8] = {
  B00101,
  B00011,
  B01101,
  B10011,
  B10001,
  B10001,
  B01110,
};
uint8_t hook_e[8] = {
  B01010,
  B00100,
  B01110,
  B10001,
  B11111,
  B10000,
  B01110,
};
uint8_t long_e[8] = {
  B00010,
  B00100,
  B01110,
  B10001,
  B11111,
  B10000,
  B01110,
};
uint8_t long_i[8] = {
  B00010,
  B00100,
  B01100,
  B00100,
  B00100,
  B00100,
  B01110,
};
uint8_t hook_n[8] = {
  B01010,
  B00100,
  B10110,
  B11001,
  B10001,
  B10001,
  B10001,
};
uint8_t long_o[8] = {
  B00010,
  B00100,
  B01110,
  B10001,
  B10001,
  B10001,
  B01110,
};
uint8_t hook_r[8] = {
  B01010,
  B00100,
  B10110,
  B11001,
  B10000,
  B10000,
  B10000,
};
uint8_t hook_s[8] = {
  B01010,
  B00100,
  B01110,
  B10000,
  B01110,
  B00001,
  B11110,
};
uint8_t hook_t[8] = {
  B01101,
  B01010,
  B11100,
  B01000,
  B01000,
  B01001,
  B00110,
};
uint8_t long_u[8] = {
  B00010,
  B00100,
  B10001,
  B10001,
  B10001,
  B10011,
  B01101,
};
uint8_t ring_u[8] = {
  B00110,
  B00110,
  B10001,
  B10001,
  B10001,
  B10011,
  B01101,
};
uint8_t long_y[8] = {
  B00010,
  B00100,
  B10001,
  B10001,
  B01111,
  B00001,
  B01110,
};
uint8_t hook_z[8] = {
  B01010,
  B00100,
  B11111,
  B00010,
  B00100,
  B01000,
  B11111,
};

#endif
