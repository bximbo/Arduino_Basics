int n;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT); 
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 /*
 digitalWrite (3,HIGH);
  delay(100);
   digitalWrite (3,LOW);
    digitalWrite (5,HIGH);
  delay(100);
   digitalWrite (5,LOW);
    digitalWrite (7,HIGH);
  delay(100);
   digitalWrite (7,LOW);
   digitalWrite (5,HIGH);
  delay(100);
   digitalWrite (5,LOW);
    */
  n = random(13);
   
if (digitalRead(2)== HIGH)
{
  if(digitalRead(n)== n=0; n<4; n++)
  Serial.println("PLAYER ONE WINS");
  digitalWrite (3,HIGH);
  delay(10000);
   digitalWrite (3,LOW);
}
}


if (digitalRead(4)== HIGH)
{
  Serial.println("PLAYER TWO WINS");
  digitalWrite (5,HIGH);
  delay(10000);
   digitalWrite (5,LOW);
}


if (digitalRead(6)== HIGH)
{
  Serial.println("PLAYER THREE WINS");
  digitalWrite (7,HIGH);
  delay(10000);
   digitalWrite (7,LOW);
}
}
