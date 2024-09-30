#define LED 2
void setup() {
  // put your setup code here, to run once:
pinMode( LED, OUTPUT);
}

void blinkBIMBO(int cycles, int del)
{
  for (int z=0; z<30; z++)
  {
    digitalWrite(LED, 1);
    delay(del);
     digitalWrite(LED, 0);
    delay(del);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
blinkBIMBO(500, 200);
delay(1000);
}
