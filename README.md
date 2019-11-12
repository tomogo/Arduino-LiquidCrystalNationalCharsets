# Arduino-LiquidCrystalNationalCharsets
Czech charset for LCD display. There are only czech small capitals: áčďéěíňóřšťúůýž<br>

There are named [long/hook/ring]_[capital]

Using:

#include <LiquidCrystal.h>

#include <LiquidCrystalNationalCharsets.h>
  
const int RS = 8;<br>
const int EN = 9;<br>
const int d4 = 4;<br>
const int d5 = 5;<br>
const int d6 = 6;<br>
const int d7 = 7;<br>

LiquidCrystal lcd( RS,  EN,  d4,  d5,  d6,  d7);

void setup() {<br>
  lcd.createChar(0, long_a);<br>
  /* <br>
  You can add next capitals with id 0-7:<br>
  lcd.createChar(1, hook_e);<br>
  lcd.createChar(2, hook_s);<br>
  lcd.createChar(3, long_i);<br>
  lcd.createChar(4, hook_s);<br>
  lcd.createChar(5, hook_z);<br>
  lcd.createChar(6, long_u);<br>
  lcd.createChar(7, ring_u);<br>
  */<br>

  lcd.begin(16,2);<br>

}<br>
