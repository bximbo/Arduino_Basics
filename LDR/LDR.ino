  int LDR = A330;
  int LED = 3;
  int val = 0;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode (LED, OUTPUT);                                                                                                   
  
}

void loop() {
  // put your main code here, to run repeatedly:
 val = analogRead(LDR);
 Serial.println(val);
 analogWrite(LED, val);
 delay(100);
}
