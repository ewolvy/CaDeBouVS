#include <Arduino.h>
#include <Wire.h>
#include "setup.h"

void setup() {
  Serial.begin(115200);
  Wire.begin();
  setup_sensor(VLDIAGIZQ, TYPE_VL);
  setup_sensor(VLFRONIZQ, TYPE_VL);
  setup_sensor(VLDIAGDCHA, TYPE_VL);
  setup_sensor(VLFRONDCHA, TYPE_VL);
}

void loop() {
  Serial.println(read_mm(VLDIAGIZQ));
  Serial.println(read_mm(VLFRONIZQ));
  Serial.println(read_mm(VLDIAGDCHA));
  Serial.println(read_mm(VLFRONDCHA));
  Serial.println();

  delay(500);
}