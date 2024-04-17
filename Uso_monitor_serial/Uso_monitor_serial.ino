/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del monitor serial
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/0rUuDdIFDuj-uso-del-monitor-serial
*/

//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Uso del monitor serial");     //Envio el siguiente mensaje al monitor serial.

  //Serial.print se usa para enviar información sin el salto del linea
  Serial.print("Mi nombre es: ");
  //Serial.println se usa para enviar información con el salto de linea
  //Nota: recuerda que cuando se envian palabras o letras, estas deben de ir entre comillas.
  Serial.println("Alejandro");

  //Si quisiera enviar números hago uso de esta forma
  Serial.print("Mi edad es ");
  Serial.println(int(18));  
}

//Funcion donde se ejecutan de manera "infinita" el código. 
void loop() {
