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

//Variables para controlar el cursor
int rowCursor=0;
int colCursor=0;

void setup(){
  lcd.begin(16, 2);
  
  Serial.begin(9600);
  Serial.print("YES");
  
  pinMode(13, OUTPUT);
  //digitalWrite(13, HIGH);//HIGH
  analogWrite(13,10);
  lcd.cursor();
  lcd.blink();
  lcd.clear();
}



void loop(){
  char key = keypad.getKey();
  if (key != NO_KEY){
    
    if (key == 'A'){
      lcd.scrollDisplayRight();
    }else if (key == 'B'){
      lcd.scrollDisplayLeft();
    }else if (key == 'C'){
      colCursor++;
      lcd.setCursor(colCursor,rowCursor);
    }else if (key == 'D'){
      colCursor--;
      lcd.setCursor(colCursor,rowCursor);      
    }else if (key == '*'){
      lcd.clear();
      lcd.setCursor(4,0);
      lcd.print("Hola MX");
      colCursor=12;
      rowCursor=0;
    }else if (key == '#'){
      rowCursor++;
      colCursor=0;
      if(rowCursor==2){ //se compara con 2 por que es el caso donde
        rowCursor = 0;  // ya se paso de lineas ya que solo tiene 0, 1
      }
      lcd.setCursor(colCursor,rowCursor);
    }else{
      
      Serial.println(key);
      lcd.print(key);
      colCursor++;
    }
  }
} 
