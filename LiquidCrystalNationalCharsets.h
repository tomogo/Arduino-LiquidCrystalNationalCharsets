#ifndef LiquidCrystalNationalCharsets_h
#define LiquidCrystalNationalCharsets_h

#include <LiquidCrystal.h>

class LiquidCrystalNationalCharsets : public LiquidCrystal {
  public:
    LiquidCrystalNationalCharsets(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);
    LiquidCrystalNationalCharsets(uint8_t rs, uint8_t rw, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);
    LiquidCrystalNationalCharsets(uint8_t rs, uint8_t rw, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);
    LiquidCrystalNationalCharsets(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);
    
    void begin(uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS);

    void createChar(uint8_t location, uint8_t charmap[], uint8_t instead);
    
    void writeLCD(String text, int column, int row);
    void writeLCD(uint8_t outChar, int column, int row);
    void writeLCD(uint8_t *text, int column, int row);
    
    void scrollStringLeft(String r, uint8_t row);
    void scrollStringRight(String r, uint8_t row);
    void scrollReset();
  private:
    uint8_t insteadOff[8] = {255, 255, 255, 255, 255, 255, 255, 255};
    uint8_t _cols;
    uint8_t _rows;
    int scrollIndexL;
    int scrollIndexR;

    void setCursorLCD(int column, int row);
};

#endif
