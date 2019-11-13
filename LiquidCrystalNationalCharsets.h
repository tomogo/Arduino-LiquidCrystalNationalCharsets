#ifndef LiquidCrystalNationalCharsets_h
#define LiquidCrystalNationalCharsets_h

void writeLCD(LiquidCrystal lcd, uint8_t outChar, uint8_t column, uint8_t row);
void writeLCD(LiquidCrystal lcd, String text, uint8_t column, uint8_t row);
void createChar(LiquidCrystal lcd, uint8_t location, uint8_t charmap[], uint8_t instead);

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
