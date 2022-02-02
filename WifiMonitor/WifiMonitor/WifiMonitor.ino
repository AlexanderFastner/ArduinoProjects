#include <LiquidCrystal_I2C.h>

#include <Wire.h>                      
#include <LiquidCrystal_I2C.h>       

LiquidCrystal_I2C lcd(0x3F,20,4);  

void setup() {
  Serial.begin(9600);
  //initialize lcd screen
  lcd.init();
  // turn on the backlight
  lcd.backlight();
}
void loop() {
  Serial.println("hi");
  //wait for a second
  delay(1000);
  // tell the screen to write on the top row
  lcd.setCursor(0,0);
  // tell the screen to write “hello, from” on the top row
  lcd.print("Hello, From");
  // tell the screen to write on the bottom row
  lcd.setCursor(0,1);

}
