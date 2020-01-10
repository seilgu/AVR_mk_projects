#include <TinyWireM.h>                 
#include <LiquidCrystal_attiny.h>
//#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set address & 16 chars / 2 lines
//LiquidCrystal_I2C lcd(0x27);  // set address & 16 chars / 2 lines

void setup()
{

  TinyWireM.begin();                    // initialize I2C lib
  lcd.init();                           // initialize the lcd 
  lcd.backlight(); 
  lcd.clear();  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.println("Hello World on Attiny85");
}

void loop()
{
  
}