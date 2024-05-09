/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Recepción de un único caracter por medio del puerto serie.
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: 
   
*/

void setup() {
  Serial.begin(19200);      //Inicio la comunicacion serial a 19200 bps.
  Serial.println("Clase de prueba - Envio y recepción de datos por medio de UART");

}

void loop() {

  //mientras exista informacion disponible
  while(Serial.available()>0)
  {
    char info_recibida = Serial.read();
    Serial.print("He recibido el caracter: ");
    Serial.print(info_recibida);
  }
  
}
