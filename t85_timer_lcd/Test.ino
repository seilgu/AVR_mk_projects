#include <TinyWireM.h>                 
#include <LiquidCrystal_attiny.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set address & 16 chars / 2 lines

uint16_t sec_passed = 0;

#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit)) // clear bit
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))  // set bit

void setup_watchdog() 
{
  MCUSR &= ~(1<<WDRF);
  // start timed sequence
  
  WDTCR |= (1<<WDCE) | (1<< WDE);
  
  //WDTCR = 0;
  WDTCR = 6; // 1 sec
  //WDTCR = (1<<WDP3); // 4 sec
  sbi(WDTCR, WDIE);
}

ISR(WDT_vect) {
	cli();
	sec_passed++;
	//lcd.clear();  // Print a message to the LCD.
  	//lcd.setCursor(0, 0);
  	//lcd.print("Secs passed : ");
	lcd.setCursor(0, 1);
  	lcd.print(sec_passed);
  	sei();
}

void setup()
{
  TinyWireM.begin();                    // initialize I2C lib
  lcd.init();                           // initialize the lcd 
  lcd.backlight(); 
  lcd.clear();  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Secs passed : ");

  setup_watchdog();
}

void loop()
{
	//lcd.clear();  // Print a message to the LCD.
  	//lcd.setCursor(0, 0);
  	//lcd.print("Secs passed : ");
  	//sec_passed++;
	//lcd.setCursor(0, 1);
  	//lcd.print(sec_passed);
	_delay_ms(5000);
}