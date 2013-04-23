#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);

byte batery[8] = {
  B01110,
  B11011,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111
};
byte batery1[8] = {
  B01110,
  B11011,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
  lcd.createChar(0, batery);
  lcd.createChar(1, batery1);
  lcd.begin(16, 2); 
  
}

void loop() {
lcd.clear();
lcd.setCursor(0,1);
lcd.write((char)0);
delay(300);
lcd.clear();
lcd.setCursor(4,0);
lcd.write((char)1);
delay(300);
}
