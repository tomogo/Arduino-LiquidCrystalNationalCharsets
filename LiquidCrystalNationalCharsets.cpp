#include <Arduino.h>
#include <LiquidCrystal.h>
#include <LiquidCrystalNationalCharsets.h>

LiquidCrystalNationalCharsets::LiquidCrystalNationalCharsets(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3):LiquidCrystal( rs, enable, d0, d1, d2, d3) {
}

void LiquidCrystalNationalCharsets::begin(uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS) {
  LiquidCrystal::begin(cols, rows);
  _cols=cols;
  _rows=rows;
}

void LiquidCrystalNationalCharsets::setCursorLCD(int column, int row) {
  if ( column >= 0 && row >= 0 ) {
    LiquidCrystal::setCursor(column, row);
  }
}

void LiquidCrystalNationalCharsets::createChar(uint8_t location, uint8_t charmap[], uint8_t instead){
  LiquidCrystal::createChar(location, charmap);
  insteadOff[location]=instead;  
}

void LiquidCrystalNationalCharsets::writeLCD( String text, int column, int row) {
  setCursorLCD( column, row);
  
  for(int i=0; i<text.length(); i++) {
    writeLCD( text.charAt(i), -1, -1);
  }
}

void LiquidCrystalNationalCharsets::writeLCD( uint8_t outChar, int column, int row) {
  setCursorLCD( column, row);

  for (uint8_t i=0; i<8; i++) {
    if (outChar==insteadOff[i]) {
      outChar=uint8_t(i);
      i=8;
    }
  }
  write(outChar);
}

void LiquidCrystalNationalCharsets::writeLCD( uint8_t *text, int column, int row) {
  setCursorLCD(column, row);
  
  for (int i=0; *text != 0; i++) {
    writeLCD( *text++, -1, -1);
  }
}

void LiquidCrystalNationalCharsets::scrollStringLeft(String r, uint8_t row) {
  String r1;
  String r2;
  for (uint8_t i = 0; i < _cols; i++) {
    r1 += " ";
  }
  writeLCD(r1, 0, row);
  r1 += r;
  if (scrollIndex+_cols>r1.length()){
    r2=r1.substring(scrollIndex,r1.length());
  } else {
    r2=r1.substring(scrollIndex,scrollIndex+_cols);
  }
  delay(25);
  writeLCD(r2, 0, row);
  delay(350);
  if (scrollIndex++>=r1.length()) scrollIndex=0;
}

void LiquidCrystalNationalCharsets::scrollReset() {
  scrollIndex=0;
}
