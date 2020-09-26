#include "main.h"

void setup() {
  Serial.begin(115200);
  /*
  Inicialización de sensores de distancia
  
  Wire.begin();
  setup_sensor(VLDIAGIZQ, TYPE_VL);
  setup_sensor(VLFRONIZQ, TYPE_VL);
  setup_sensor(VLDIAGDCHA, TYPE_VL);
  setup_sensor(VLFRONDCHA, TYPE_VL);
  */

  /*
  Inicialización de la pantalla
  setup_tft();
  */
}

void loop() {
  /*
  Pruebas de los sensores de distancia
  
  Serial.println(read_mm(VLDIAGIZQ));
  Serial.println(read_mm(VLFRONIZQ));
  Serial.println(read_mm(VLDIAGDCHA));
  Serial.println(read_mm(VLFRONDCHA));
  Serial.println();
  */

  /*
  Mostrar el voltaje en pantalla

  show_voltage();
  */

  delay(500);
}