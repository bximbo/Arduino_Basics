
void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(2, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
      (digitalRead (2) == 0);
     digitalWrite (6,LOW);
if (digitalRead(2)== 1)
{
  Serial.println("PLAYER THREE WINS");
  digitalWrite (6,HIGH);
 // delay(200);
   //digitalWrite (3,LOW);
}
}
