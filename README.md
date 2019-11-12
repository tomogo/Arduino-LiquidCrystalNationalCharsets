# Arduino-LiquidCrystalNationalCharsets
Czech charset for LCD display. There are only czech small capitals: áčďéěíňóřšťúůýž

There are named [long/hook/ring]_[capital]

Using:

<code>
#include <LiquidCrystal.h> 
#include <LiquidCrystalNationalCharsets.h>
  
const int RS = 8;
const int EN = 9;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;

LiquidCrystal lcd( RS,  EN,  d4,  d5,  d6,  d7);

void setup() {
  lcd.createChar(0, long_a);
  /* 
  You can add next capitals with id 0-7:
  lcd.createChar(1, hook_e);
  lcd.createChar(2, hook_s);
  lcd.createChar(3, long_i);
  lcd.createChar(4, hook_s);
  lcd.createChar(5, hook_z);
  lcd.createChar(6, long_u);
  lcd.createChar(7, ring_u);
  */

  lcd.begin(16,2);

}  
</code>
