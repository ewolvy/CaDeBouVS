#include <Arduino.h>
#include <Wire.h>
#include "setup.h"

void setup() {
  Serial.begin(115200);
  Wire.begin();
  setup_sensor(VLDIAGIZQ, TYPE_VL);
}

void loop() {
  Serial.println(read_mm(VLDIAGIZQ));

  delay(500);
}