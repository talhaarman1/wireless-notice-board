#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

lcd.begin();

Serial.begin(115200);

}

void loop() {

if(Serial.available()){

lcd.write(Serial.read());

}

}
