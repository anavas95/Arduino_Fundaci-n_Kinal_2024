/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD com interfaz I2C
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: https://www.tinkercad.com/things/dXZ86M7xFGg-uso-de-la-lcd-con-interfaz-i2c
*/


//Librerias 
#include <Wire.h>    //Liberias para usar el protocolo i2c
#include <LiquidCrystal_I2C.h>  //Libreria que controla la LCD por medio de I2C


//Directivas de preprocesador
#define direccion_lcd 0x20
#define filas 2
#define columnas 16

//Constructor
LiquidCrystal_I2C lcdAlejandro(direccion_lcd, columnas, filas); //LCD con direccion 0x20 y tamanio 16x2


void setup()
{
  //Configuraciones
  lcdAlejandro.init(); //inicio la comunicacion serial con el modulo i2c
  lcdAlejandro.backlight(); //Enciendo la luz de fondo para poder ver el texto
  //lcdAlejandro.noBacklight(); //En caso quiero apagar la luz de fondo
  lcdAlejandro.print("Hola");  //Muestro el texto en la LCD

}


void loop()
{
}
