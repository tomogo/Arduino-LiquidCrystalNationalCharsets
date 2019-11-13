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
  // You can add capitals with id 0-7 in procedure:<br>
  // createChar(yourLCD, id, charMap, charInsteadOf)
  
  createChar(lcd, 0, hook_c, '#');<br>
  createChar(lcd, 1, hook_e, '$');<br>
  createChar(lcd, 2, hook_s, '%');<br>
  createChar(lcd, 3, long_i, '^');<br>
  createChar(lcd, 4, hook_d, '&');<br>
  createChar(lcd, 5, hook_z, '|');<br>
  createChar(lcd, 6, long_u, '\'');<br>
  createChar(lcd, 7, ring_u, '+');<br>

  lcd.begin(16,2);<br>
  
  // Print on LCD<br>
  writeLCD(lcd, "Test: #$%^&|'+", 0, 0);<br>
  //  - it prints: "Test: ěšíďžúů"

}<br>
