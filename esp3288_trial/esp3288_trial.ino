int IN2 = 8;
int IN1 = 7;
int IN3 = 4;
int IN4 = 2;
int ENA = 5;
int ENB = 6;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup() {
// put your setup code here, to run once:
//ultrasonic
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
//left
pinMode(ENA, OUTPUT);
pinMode( IN2, OUTPUT);
pinMode( IN1, OUTPUT);
//right
pinMode(ENA, OUTPUT);
pinMode( IN3, OUTPUT);
pinMode( IN4, OUTPUT);
}

void forward() {
  // Drive
  analogWrite (ENA, 255);//left
  analogWrite (ENB, 180);//right
  digitalWrite (IN2, 1);
  digitalWrite (IN1, 0);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 1);  
}

void Backward() {
  // Reverse
  analogWrite (ENA, 255);//left
  analogWrite (ENB, 180);//right
  digitalWrite (IN2, 0);
  digitalWrite (IN1, 1);
  digitalWrite (IN3, 1);
  digitalWrite (IN4, 0);
}

void loop() {
/*//trial function (forward)
analogWrite (ENA, 210);//left
analogWrite (ENB, 200);//right
digitalWrite (IN2, 1);
digitalWrite (IN1, 0);
digitalWrite (IN3, 0);
digitalWrite (IN4, 1);
*/
forward();

//ultrasonic
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
duration = pulseIn(echoPin, HIGH);    
distance = duration * 0.034 / 2;
Serial.print("Distance: ");
Serial.println(distance);

  if (distance <= 25 ) {

      Backward();
      delay(1500);

          }

          
/*
forward();
delay(3000);
Backward();
delay(3000);
*/
}
