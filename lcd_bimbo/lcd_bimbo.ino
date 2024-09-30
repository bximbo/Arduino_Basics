#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
lcd.setCursor(1,0);
lcd.print("BIMBO");
delay(1000);
lcd.setCursor(8,1);
lcd.print("GRAM");
delay(1000);
}
