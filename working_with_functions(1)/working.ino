#define LED 2
#define del 200
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
}

void blinkLED()
{
  // put your main code here, to run repeatedly:
   digitalWrite(LED, 1);
   delay(del); 
   digitalWrite(LED, 0);
   delay(del); 
   digitalWrite(LED, 1);
   delay(del); 
   digitalWrite(LED, 0);
   delay(del); 
}

void loop(){

blinkLED();
delay(1000);
}
