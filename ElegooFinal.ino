// servo wasnt working, wired wrong had to flip wire
// fastLED version fix
//servo position kept jumping between certain points, printed time as well and realized it was jumping every second, so must be rounding error

#include <Arduino.h>
#include <Servo.h>
#include "ElegooServo.h"
#include "ElegooLED.h"
#include "MPU.h"
#include "ElegooMovement.h"

unsigned long currentTime;
int state;
int lastState;

void setup() {
  Serial.begin(9600);
  state = 0; // standby
  lastState = -1;
  InitServo();
  InitLED(); 
  InitMPU();
  InitMovement();
}

void loop() {
  currentTime = micros();

  if (state!= lastState){
    HandleServo(state);
  }

  HandleMovement();

  lastState = state;
  delay(60);
} //add handle LED