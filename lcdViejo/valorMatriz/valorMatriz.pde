
#include <LiquidCrystal.h>
//Variable LCD que usaremos para controlar la pantalla
LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);
int row=0;
int col=0;

void setup() {
  lcd.begin(16, 2);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH

  
  //lcd.setCursor(0, 0);
  //lcd.print("Ya funciona Pepero");
   int matriz = 2;
  lcd.print("\"\\valor ");
  lcd.print(matriz);

}

void loop() {

}
