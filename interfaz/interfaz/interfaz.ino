#include <OpenLamborghino.h>  

#define BOTON  12
#define BUZZER  10

OpenLamborghino OpenLamborghino(BOTON, BUZZER);

void setup() {

  OpenLamborghino.WaitBoton(); //en espera de que precione el boton
  delay(2000);
  OpenLamborghino.beep(); //suena el buzzer por 10ms a 2000hz
}
void loop() {


}
