/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - Control del encendido y apagado de un led
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/4KZoYYTZSyp-fabulous-sango/editel?sharecode=uCfRswAmDkGT0GWHqphohHylUVSDb_qFUbo3d6bn3sY
*/


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Entradas y salidas digitales - Control del encendido y apagado de un led");     //Envio el siguiente mensaje al monitor serial.
  pinMode(6, OUTPUT);     //Pin 6 del arduino como salida.
  digitalWrite(6, LOW);   //Pin 6 inicia apagado.
}

//Funcion donde se ejecutan de manera "infinita" el código.
void loop() {
  digitalWrite(6, HIGH);    //enciendo el pin 6 del arduino.
  delay(500);               //espero 500 milisegundos
  digitalWrite(6, LOW);     //apagado el pin 6 del arduino.
  delay(500);               //espero 500 milisegundos.
}
