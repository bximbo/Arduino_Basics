int redLed = 2;
int greenLed = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(greenLed,OUTPUT);
pinMode(redLed,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(greenLed,1);
delay(1000);
digitalWrite(greenLed,0);
digitalWrite(redLed,1);
delay(1000);
digitalWrite(redLed,0);
}
