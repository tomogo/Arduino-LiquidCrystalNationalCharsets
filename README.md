# Arduino-LiquidCrystalNationalCharsets
Czech charset for LCD display. There are only czech small capitals: áčďéěíňóřšťúůýž<br>

National charset for LiquidCrystal.h

czech.h contains only czech small chars: áčďéěíňóřšťúůýž

you can add next chars by your self in next lang.h files

Characters are named [long/hook/ring/umlaut]_[char]

Using in Arduino scetch:

#include <LiquidCrystalNationalCharsets.h>

#include <czech.h>


// Wires for LCD

const int RS = 11;

const int RW = 13;

const int EN = 10;

const int d4 = 5;

const int d5 = 4;

const int d6 = 3;

const int d7 = 2;





LiquidCrystalNationalCharsets lcd(RS,  EN,  d4,  d5,  d6,  d7);



void setup() {

  // You can define chars with id 0-7 in procedure: createChar(yourLCD, id, charMap, charInsteadOf)

  

  lcd.createChar(0, hook_c, '#');

  lcd.createChar(1, hook_e, '$');

  lcd.createChar(2, hook_s, '%');

  lcd.createChar(3, long_i, '^');

  lcd.createChar(4, hook_d, '&');

  lcd.createChar(5, hook_z, '|');

  lcd.createChar(6, long_u, '\'');

  lcd.createChar(7, ring_u, '+');

  

  lcd.begin(16,2);

  

  // Print on LCD by procedure: writeLCD(yourLCD, char/String, column, row)

  // This prints "Test: čěšíďžúů" on the cursor position: 

  lcd.writeLCD("Test: #$%^&|'+", -1, -1);

  

  //This prints "ě" on position 15,0 

  lcd.writeLCD('$', 15, 0);



  // This stes cursor on line 1 first position:

  lcd.setCursor(0,1);



  //This prints "Hi!" on cursor position:

  lcd.writeLCD("Hi!", -1, -1);



  String hallo=", hallo";

  lcd.writeLCD(hallo, -1, -1);

  delay(3000);

}



void loop() {

  lcd.scrollStringLeft("Hi bro!",1);

  delay(200);

}
