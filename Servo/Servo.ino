/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del servomotor
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: https://www.tinkercad.com/things/lcWag1JH9aP-uso-del-servomotor
   
*/

//Libreria
#include <Servo.h> //libreria que me permite usar el servo

//Directivas de preprocesador
#define pin_Servo 5


//Constructor
Servo Servo_profeAlejandro;  //mi servo

void setup()
{
  
  //Servo_profeAlejandro.attach(pin_Servo);           //Especifico que en el pin5 voy a usar un servomotor.
  Servo_profeAlejandro.attach(pin_Servo,0.9,2.1);   //Especifico que en el pin5 voy a usar un servomotor.

}

void loop()
{
  
  /*
  for(unsigned char i =0; i<181;i++)
  {
    Servo_profeAlejandro.write(i);
    delay(10);
  }*/
  
  Servo_profeAlejandro.write(0);
  delay(1000);
  Servo_profeAlejandro.write(45);
  delay(1000);
  Servo_profeAlejandro.write(90);
  delay(1000);
  Servo_profeAlejandro.write(135);
  delay(1000);
  Servo_profeAlejandro.write(180);
  delay(1000);
}

