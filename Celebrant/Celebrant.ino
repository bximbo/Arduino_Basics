int x = 3;
int y = 5;
int t = 200;
int d = 300;
String age = "";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 
pinMode(x,INPUT);
pinMode(y,OUTPUT);
}


void blinkBIMBO(int cycles, int d)
{
digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(y, LOW);    // turn the LED off by making the voltage LOW
  delay(200);    
}

void loop() {
  
  // put your main code here, to run repeatedly:
  Serial.print("press the button!!!!!!!!\n");

delay(100);
  if ( digitalRead (x)== HIGH)
{
  delay(2000);
  //delay(2000);
  Serial.print (" CAUTION❗❗❗     CELEBRANT'S DAY \n ");
delay(2000);
delay(2000);
delay(2000);
/*digitalWrite(y, random(0,2));
delay(100);
digitalWrite(y, LOW);
//delay(10);
*/

Serial.println("   WHATS YOUR AGE  :");
while(Serial.available()==0)
{}
age = Serial.readString();
Serial.println("Hmmmm...he said his age is " + age);
delay(1500);
  Serial.print("HAPPY BIRTHDAY \n");
//delay(100000000);



//beginningPATTERNS
/*blinkBIMBO(500, 200);
delay(1500);


 






digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(y, LOW);    // turn the LED off by making the voltage LOW

digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(y, LOW);    
  digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(y, LOW);    
  digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(y, LOW);    
  digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(y, LOW);    
  digitalWrite(y, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(y, LOW);






*/

















//endPATTERNS
blinkBIMBO(200, 200);

}
else blinkBIMBO(200, 200);
}
