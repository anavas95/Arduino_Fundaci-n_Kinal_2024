/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - Encender y apagar un led con un pulsador
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/cK26Y6BVx1s-entradas-y-salidas-digitales-onoff-con-pulsador
   
*/


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Entradas y salidas digitales - Encender y apagar un led con un pulsador");     //Envio el siguiente mensaje al monitor serial.
  pinMode(2, INPUT);     //Pin 2 del arduino como entrada.
  pinMode(3, OUTPUT);     //Pin 3 del arduino como salida.
  digitalWrite(3, LOW);   //apago el pin 3

}

//Funcion donde se ejecutan de manera "infinita" el código.
void loop() {
  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
    delay(50);      //hago una pausa para evitar el rebote.
    digitalWrite(3,HIGH);     //enciendo el pin 3
  }
  else
  {
    digitalWrite(3, LOW);     //apago el pin 3
  }

}