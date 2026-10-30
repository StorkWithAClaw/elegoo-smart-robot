#include <FastLED.h>
#include "ElegooLED.h"
#define numLEDs 1
#define LEDPin 4

CRGB LEDs[numLEDs];
unsigned long lastChangeTime;

float waveShift;
void InitLED(){
  FastLED.addLeds<NEOPIXEL, LEDPin>(LEDs, numLEDs);
  FastLED.setBrightness(30);
  lastChangeTime = 0;
  Serial.println("LED Initialized");
}

// void HandleLED(unsigned long currentTime){
 

//   if (currentTime > (lastChangeTime + 30)){
//     waveShift = (2 * PI)/3;
//     float time = (currentTime * 0.000001);

//     float colorR = sin(time) * 127.5 + 127.5;
//     float colorG = sin(time - waveShift) * 127.5 + 127.5;
//     float colorB = sin(time - (2 * waveShift)) * 127.5 + 127.5;

//     LEDs[0] = CRGB(colorR, colorG, colorB); 
//     FastLED.show();
//     lastChangeTime = currentTime;
//   }
  

// }