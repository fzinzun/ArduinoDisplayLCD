#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);

byte body1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};
byte body2[8] = {
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte arrow1[8] = {
  B000000,
  B100000,
  B110000,
  B111000,
  B111100,
  B111100,
  B111110,
  B111111
};
byte arrow2[8] = {
  B111111,
  B111110,
  B111100,
  B111100,
  B111000,
  B110000,
  B100000,
  B000000
};
int row=0;

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
  lcd.createChar(0, body1);
  lcd.createChar(1, body2);
  lcd.createChar(2, arrow1);
  lcd.createChar(3, arrow2);
  
  lcd.begin(16, 2);  

}

void loop() {
  lcd.setCursor(row, 0);
  lcd.write((char)0);
    delay(1000);
  lcd.write((char)0);
  delay(1000);
  lcd.write((char)2);
  delay(1000);
  lcd.setCursor(row, 1);
  lcd.write((char)1);
  delay(1000);
  lcd.write((char)1);
  delay(1000);
  lcd.write((char)3);
  row++;
  
  if (row == 16){
    row=0;
  }  

  delay(2000);
  lcd.clear();
}
