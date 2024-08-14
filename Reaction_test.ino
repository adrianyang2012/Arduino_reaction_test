#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int start;
int end;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  pinMode(9, OUTPUT);     
  digitalWrite(9,HIGH);
  // Print a message to the LCD.
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(".");
  lcd.setCursor(1,0);
  delay(1000);
  lcd.print(".");
  lcd.setCursor(2,0);
  delay(1000);
  lcd.print(".");
  lcd.setCursor(3,0);
  delay(1000);
  lcd.print(".");
  lcd.setCursor(4,0);
  delay(1000);
  lcd.print(".");
  delay(3000);
  lcd.clear();
  start = millis();
  while (true){
     if (digitalRead(9) == LOW){
       end = millis();
       lcd.setCursor(0,0);
       lcd.print(end-start);
       lcd.setCursor(7,0);
       lcd.print("ms");
       break;
  }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 
}
