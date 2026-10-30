#include "ElegooServo.h"
#include "ElegooLED.h"
#define ServoPin 10
Servo servo;

void InitServo() {
  servo.attach(ServoPin, 500, 2400); // attach takes pin#, (min angle, max angle) in microseconds
  servo.write(90); // Center servo
  Serial.println("Servo Initialized");
}

void HandleServo(int state) {
  

  
  
  switch(state){
    case 0:
      break;

    case 1:
      servo.write(90);
      
      break;
    
  }
  
}