# Arduino-LiquidCrystalNationalCharsets
Library for using LCDs national charsets aded.

czech.h contains only czech small capitals: áčďéěíňóřšťúůýž<br>
you can add next chars by your self in next lang.h files

Characters are named [long/hook/ring/umlaut]_[char]

Using in Arduino scetch:

#include <LiquidCrystalNationalCharsets.h><br>
#include <czech.h><br>

// Wires for LCD<br>
const int RS = 11;<br>
const int RW = 13;<br>
const int EN = 10;<br>
const int d4 = 5;<br>
const int d5 = 4;<br>
const int d6 = 3;<br>
const int d7 = 2;

LiquidCrystalNationalCharsets lcd(RS,  EN,  d4,  d5,  d6,  d7);

void setup() {

  // You can define chars with id 0-7 in procedure: createChar(yourLCD, id, charMap, charInsteadOf)

  lcd.createChar(0, hook_c, '#');<br>
  lcd.createChar(1, hook_e, '$');<br>
  lcd.createChar(2, hook_s, '%');<br>
  lcd.createChar(3, long_i, '^');<br>
  lcd.createChar(4, hook_d, '&');<br>
  lcd.createChar(5, hook_z, '|');<br>
  lcd.createChar(6, long_u, '\'');<br>
  lcd.createChar(7, ring_u, '+');

  lcd.begin(16,2);

  // Print on LCD by procedure: writeLCD(yourLCD, char/String, column, row)<br>
  // This prints "Test: čěšíďžúů" on the cursor position: 

  lcd.writeLCD("Test: #$%^&|'+", -1, -1);

  //This prints "ě" on position 15,0 

  lcd.writeLCD('$', 15, 0);

  // This stes cursor on line 1 first position:

  lcd.setCursor(0,1);

  //This prints "Hi!" on cursor position:

  lcd.writeLCD("Hi!", -1, -1);<br>
  String hallo=", hallo";<br>
  lcd.writeLCD(hallo, -1, -1);<br>
  delay(3000);<br>
}

void loop() {<br>
  lcd.scrollStringLeft("Hi bro!",1);<br>
  delay(200);<br>
}
