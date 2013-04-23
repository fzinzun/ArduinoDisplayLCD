// 4 X 4 Keypad interfaced with Arduino

#include <LiquidCrystal.h>
#include <Keypad.h>

//Variable LCD que usaremos para controlar la pantalla
LiquidCrystal lcd(12, 11,10, 2, 3, 4, 5);

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns
// Define the Keymap
char keys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};

//byte rowPins[ROWS] = { 8, 7, 6, 9 };
//byte colPins[COLS] = { 5, 4, 3, 2 };
byte rowPins[ROWS] = { 8, 45, 44, 9 };
byte colPins[COLS] = { 47, 46, 49, 48 };
// Create the Keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  lcd.begin(16, 2);
  
  Serial.begin(9600);
  Serial.print("YES");
  
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);//HIGH
  lcd.clear();
}

void loop(){
  char key = keypad.getKey();
  if (key != NO_KEY){
    Serial.println(key);
    lcd.print(key);
  }
} 
