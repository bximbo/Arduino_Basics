Servo door;
void setup() {
  // Setip
door.attach(9)
}

void access() {
  // Open door and hold for a 5 seconds delay
  door.write(120);
  delay (5000);
  }

void deny(){
  // Close door 
  door.write(90);
  }


  
void loop() {
  // put your main code here, to run repeatedly:
 access();
 deny();
}
