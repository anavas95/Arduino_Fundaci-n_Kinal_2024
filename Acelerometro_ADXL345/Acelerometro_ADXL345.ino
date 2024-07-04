/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del acelerometro ADXL345
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 21 de junio.
   link de la simulacion: 
*/

#include<Wire.h>                    //libreria que me permite usar el protocolo i2c
#include <SparkFun_ADXL345.h>       //libreria que me permite usar el acelerometro ADXL345

ADXL345 acelerometro_ADXL345 = ADXL345();    //constructor para poder utilizar el acelerometro.

//Variables donde guardo las aceleraciones.
int x;
int y;
int z;

void setup() {
  Serial.begin(9600);     //Inicio la comunicacion serial a 9600 baudios.
  Serial.println("Uso del acelerometro ADXL345");
  acelerometro_ADXL345.powerOn();             //Enciendo el acelerometro.
  acelerometro_ADXL345.setRangeSetting(8);    //Configuro para medir la aceleracion con 8g.
}

void loop() {
 /*
  * Obtengo las aceleraciones por cada eje
 */
 acelerometro_ADXL345.readAccel(&x,&y,&z);
 Serial.print("La aceleracion en x es de: ");
 Serial.println(x);
 Serial.print("La aceleracion en y es de: ");
 Serial.println(y);
 Serial.print("La aceleracion en z es de: ");
 Serial.println(z);
 delay(500);
}
