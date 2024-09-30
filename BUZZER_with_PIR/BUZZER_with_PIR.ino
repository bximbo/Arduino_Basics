void setup() {
  // put your setup code here, to run once:
  pinMode (4, OUTPUT);
  Serial.begin(9600);
  pinMode (2, INPUT);
  pinMode (6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(10);
 if (digitalRead(2)== HIGH)
 {
Serial.println("bimbo is around");
 digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
 }
else 
{
 digitalWrite(4,  LOW);
  digitalWrite(6, LOW);
 Serial.println("bimbo is not around");
 }
 //delay(500);
  //digitalWrite(4, LOW);
}
