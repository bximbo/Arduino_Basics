 
 int buzzer = 6;
 int LED = 2;
 int flame_sensor = 3;
 int flame_detected;
 int d = 200;
 
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

flame_detected = digitalRead(3);
 if(flame_detected == 0)
 {
  Serial.println("flame detected, JAPA!!!");
  digitalWrite(6, 1);
  digitalWrite(2, 1);
  delay(d);
 }

 else
 {
  Serial.println("NO flame detected... calm your blood");
  digitalWrite(buzzer, 0);
  digitalWrite(LED, 0);
  }
  delay(1000);
 }
 
