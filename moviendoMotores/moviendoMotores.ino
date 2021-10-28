#include <OpenTB6612FNG.h>
#include <OpenLamborghino.h>

int base = 0;

#define BOTON  12
#define BUZZER  10

OpenLamborghino OpenLamborghino(BOTON, BUZZER);
OpenTB6612FNG OpenTB6612FNG(0);

void setup() {
  Serial.begin(9600);
  OpenLamborghino.WaitBoton();
  delay(1000);
}

void loop() {

  Serialin();
  OpenTB6612FNG.Motores(base, base);

}


void Serialin() {

  if (Serial.available() > 0) {
    tone(BUZZER, 1300, 100);
    base = Serial.parseInt();
    Serial.println(base);

  }
}
