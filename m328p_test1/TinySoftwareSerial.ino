
#include <avr/wdt.h>
//#include <Encoder.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

uint8_t luarrow[8]  = {0x1e,0x18,0x14,0x12,0x01,0x0,0x0};
uint8_t ldarrow[8]  = {B0,B0,B1,B10010,B10100,B11000,B11110};
uint8_t ruarrow[8] = {B01111,B00011,B00101,B01001,B10000,0,0};
uint8_t rdarrow[8] = {0,0,B10000,B01001,B00101,B00011,B01111};
uint8_t check[8] = {0x0,0x1,0x3,0x16,0x1c,0x8,0x0};
uint8_t degc[8] = {B01000, B10100, B01000, 0, B00011, B00100, B00100, B00011};


#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))  // set bit
void setup_watchdog() 
{
  cli();
  MCUSR &= ~(1<<WDRF);
  //wdt_reset(); 
  
  WDTCSR |= (1<<WDCE) | (1<< WDE);
  WDTCSR = (0<<WDP3) | (1<<WDP2) | (1<<WDP1) | (0<<WDP0);
  //wdt_reset();
  
  //WDTCR = 0;
  //WDTCSR = 6; // 1 sec
  //WDTCR = (1<<WDP3); // 4 sec
  WDTCSR |= (1<<WDIE);
  sei();
}

int sec_passed = 0;
ISR(WDT_vect) {
  
  //sec_passed++;
  //lcd.setCursor(0, 1);
  //lcd.print(sec_passed);

  
  digitalWrite(13, LOW);
}

void setup() {
  Serial.begin(9600);
  Serial.println("Basic Encoder Test:");

  
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();

  lcd.createChar(0, luarrow);
  lcd.createChar(1, ldarrow);
  lcd.createChar(2, ruarrow);
  lcd.createChar(3, rdarrow);
  lcd.createChar(4, check);
  lcd.createChar(5, degc);
  
  lcd.setCursor(0,0);
  for (int j=0; j<6; j++) {
    lcd.write(j);
  }

  setup_watchdog();

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

long oldPosition  = -999;

void loop() {
  /*long newPosition = -myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }*/

  while (1)  {

    delay(1000);
    //wdt_reset();
  }
  
  //lcd.setCursor(0,1);
  //lcd.print(123);
  //lcd.print("   ");
}


