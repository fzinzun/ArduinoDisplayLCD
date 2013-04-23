#include <LiquidCrystal.h>
//Variable LCD que usaremos para controlar la pantalla
LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);

void setup() {
  lcd.begin(16, 2);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
 
  lcd.print("Hola Mundo");
}

void loop() {}
