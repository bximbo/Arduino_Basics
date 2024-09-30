int trig = 8;
int echo = 9;
int greenled = 6;
int redled = 7;
int yellowled = 5;
long duration;
int distance; 
void setup() {
  // put your setup code here, to run once:
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(9600);
pinMode(redled, OUTPUT);
pinMode(greenled, OUTPUT);
pinMode(yellowled, OUTPUT);
}
/*void bimbo()
{
  if(distance <= 10)
  {
    digitalWrite(greenled, 1);
    
    }*/

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, 0);
delayMicroseconds(20);
digitalWrite(trig, 1);
delayMicroseconds(100);
digitalWrite(trig, 0);
duration = pulseIn(echo,1);
distance = duration*0.034/2;
Serial.print(" Distance ");
Serial.println(distance);
delay(100);
 //bimbo();


if (distance <= 10)
  {
    digitalWrite(greenled, 1);
  }
  else 
  {
  digitalWrite(greenled, 0);
  }
}
