int d = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int a = 0; a<255; a++)
     {
  analogWrite(3, a);
  delay(d);
     }
for(int a=255; a>0; a--)
     {
  analogWrite(3,a);
  delay(d);
     }
     digitalWrite(3,LOW);
      
for(int a=0; a<255; a++)
     {
  analogWrite(5,a);
  delay(d);
     }
for(int a=255; a>0; a--)
     {
  analogWrite(5,a);
  delay(d);
     }
      digitalWrite(5,LOW);
for(int a=0; a<255; a++)
     {
  analogWrite(6,a);
  delay(d);
     }
for(int a=255; a>0; a--)
     {
  analogWrite(6,a);
  delay(d);
     }
      digitalWrite(6,LOW);
     
 for(int a=0; a<255; a++)
     {
  analogWrite(5,a);
  delay(d);
     }
for(int a=255; a>0; a--)
     {
  analogWrite(5,a);
  delay(d);
     }
      digitalWrite(5,LOW);
}
