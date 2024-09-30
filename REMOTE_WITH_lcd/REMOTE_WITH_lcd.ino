#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int G = 10;
int R = 11;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.clear();
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(G,INPUT);
pinMode(R,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// digitalRead(G == 0);
 if (digitalRead (G) == 1)
 {
  digitalWrite(8, 1); 
  lcd.setCursor(2,0);
lcd.print( "GREEN-ON" );
 }
 else   digitalWrite(8, 0);
 lcd.setCursor(2,0);
lcd.print( "GREEN-off" );




 //digitalRead(R == 0);
 if (digitalRead (R) == 1)
 {
  digitalWrite(9, 1); 
 lcd.setCursor(4, 1);
 lcd.print(" RED-ON  ");
 delay(3000);
 }
 else   digitalWrite(9, 0);
lcd.setCursor(4, 1);
lcd.print( " RED-off " );



}
