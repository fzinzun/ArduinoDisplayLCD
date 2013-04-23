
#include <LiquidCrystal.h>
//Variable LCD que usaremos para controlar la pantalla
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(60, 2);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
  Serial.begin(9600);
  Serial.print("YES");
  
  lcd.print("Hello Word");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis()/1000);
}
