/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Do While loop
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: 
   
*/

//Variables
int i = 0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Uso del do While");

}

void loop() 
{
  do
  {
    Serial.print("Numero: ");
    Serial.println(i); 
    i++;
    delay(500);
  }while(i!=10);
  i =0;
}
