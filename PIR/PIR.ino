int d = 500;


void setup() {
  //t your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode (2, INPUT);
  pinMode (4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10);
  
  if ( digitalRead (2) == HIGH)

  {
   Serial.println("Bimbo is Around ");
    digitalWrite (4, HIGH);
   // delay(d);
  }
else 
  {
  digitalWrite(4, LOW);
  Serial.print("Bimbo is not Around  ");
  //delay(20);
  }

}
