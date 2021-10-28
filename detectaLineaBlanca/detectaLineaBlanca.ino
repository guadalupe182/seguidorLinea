//detecta posicion relativa del sensor por sobre la linea blanca
#include <OpenLamborghino.h>

#define BOTON  12
#define BUZZER  10

OpenLamborghino OpenLamborghino(BOTON, BUZZER);


void setup() {
  Serial.begin(9600);
  OpenLamborghino.WaitBoton();  //en espera de precionar el boton
  OpenLamborghino.calibracion(); //inicia calibracion haciendo sonar el buzzer
  OpenLamborghino.WaitBoton(); //en espera de precionar el boton
  delay(1000);
}

void loop() {

  int pos =  OpenLamborghino.LineaBlanca(); //asignando posicion de linea blanca
  Serial.println(pos);

}
 
