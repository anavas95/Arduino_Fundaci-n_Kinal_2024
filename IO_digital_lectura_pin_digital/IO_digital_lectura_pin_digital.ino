/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - Lectura de una entrada digital
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/3c3GbkDR8Z1-entradas-y-salidas-digitales-lectura-pin-digital
*/


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Entradas y salidas digitales - Lectura de una entrada digital");     //Envio el siguiente mensaje al monitor serial.
  pinMode(2, INPUT);     //Pin 2 del arduino como entrada.
  pinMode(3, INPUT);     //Pin 3 del arduino como entrada.

}

//Funcion donde se ejecutan de manera "infinita" el código.
void loop() {

  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
    delay(50);      //hago una pausa para evitar el rebote.
    Serial.println("He presionado el pulsador de la izquierda");    //Envio el siguiente mensaje al monitor serial.
  }
  else if(digitalRead(3)==HIGH) //Leo el estado digital del pin 3 y si este es bajo.
  {
    delay(50);    //hago una pausa para evitar el rebote.
    Serial.println("He presinado el pulsador de la derecha");
  }
  else
  {
    Serial.println("No he presionado ningun interruptor");        //Envio el siguiente mensaje al monitor serial.
    delay(250);   //pausa de 150 milisegundos
  }
}