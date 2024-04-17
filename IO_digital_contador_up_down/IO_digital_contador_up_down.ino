/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - contador ascedente/descendente
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/gAUq0AIh1Xo-entradas-y-salidas-digitales-contador-updown
*/

//variable donde almaceno el valor del contador
byte contador = 0;

//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Entradas y salidas digitales - contador ascedente/descendente");     //Envio el siguiente mensaje al monitor serial.
  pinMode(2, INPUT);     //Pin 2 del arduino como entrada.
  pinMode(3, INPUT);     //Pin 3 del arduino como entrada.

}

//Funcion donde se ejecutan de manera "infinita" el código.
void loop() {

  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
   delay(350);
   contador = contador+1;   //aumento en uno el contador
   Serial.print("El valor del contador es de: ");
   Serial.println(contador);
  }
  else if(digitalRead(3)==HIGH) //Leo el estado digital del pin 3 y si este es bajo.
  {
   delay(350);
   contador = contador-1;   //disminuyo en uno el contador
   Serial.print("El valor del contador es de: ");
   Serial.println(contador);
  }
}