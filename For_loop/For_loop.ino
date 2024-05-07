/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: For loop
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: 
   
*/

void setup() 
{
 Serial.begin(9600);

 //Repetir 100 veces lo que tenga entre las llaves
 for(unsigned int i = 0; i<100; i++)
 {
  Serial.print("Esta es la repeticion: ");
  Serial.println(i);
  delay(100);
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
