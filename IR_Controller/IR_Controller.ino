#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
int redLED = 4;
int yellowLED = 6;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode (redLED, OUTPUT);
  pinMode (yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(& results)){
  Serial.println(results.value, HEX);
 switch(results.value){
  case 0xFF30CF:
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(500);
  }
  
    switch(results.value){
      case 0xFF18E7:
      digitalWrite(yellowLED, HIGH);
      delay(1000);
      digitalWrite(yellowLED, LOW);
      delay(500);
      }
    
  irrecv.resume();
 }
}
