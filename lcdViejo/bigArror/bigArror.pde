#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);

byte body[8] = {
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};

byte arrow[8] = {
  B00100,
  B01110,
  B11111,
  B01110,
  B01110,
  B01110,
  B01110,
  B01110
};

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
  lcd.createChar(0, body);
  lcd.createChar(1, arrow);
  
  lcd.begin(16, 2);  
  lcd.write((char)0);
  lcd.print("Hola");
  lcd.write((char)1);
}

void loop() {}
