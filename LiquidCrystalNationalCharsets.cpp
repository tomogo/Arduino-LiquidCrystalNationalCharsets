#include <Arduino.h>
#include <LiquidCrystal.h>

uint8_t insteadOff[8] = {255, 255, 255, 255, 255, 255, 255, 255};

void writeLCD(LiquidCrystal lcd, uint8_t outChar, uint8_t column, uint8_t row) {
  
  if ( column>=0 && row>=0 ) {
    lcd.setCursor(column, row);
  }

  for (uint8_t i=0; i<8; i++) {
    if (outChar==insteadOff[i]) outChar=uint8_t(i);
  }
  lcd.write(outChar);
}

void writeLCD(LiquidCrystal lcd, String text, uint8_t column, uint8_t row) {
  
  if ( column>=0 && row>=0 ) {
    lcd.setCursor(column, row);
  }
  
  for(int i=0; i<text.length(); i++) {
    writeLCD( lcd, text.charAt(i),-1, -1);
  }
}

void createChar(LiquidCrystal lcd, uint8_t location, uint8_t charmap[], uint8_t instead) {
  lcd.createChar(location, charmap);
  insteadOff[location]=instead;
}
