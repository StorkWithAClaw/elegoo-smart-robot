#include <HCSR04.h>
#include "ElegooUltrasonic.h"

HCSR04 hc(13, 12);

void InitUltrasonic() {
}

int GetDistance() {
  int distance = hc.dist();
  return distance;
}