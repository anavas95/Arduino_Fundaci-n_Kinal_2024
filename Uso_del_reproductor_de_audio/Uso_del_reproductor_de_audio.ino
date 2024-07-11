/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del reproductor de audio.
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 09 de julio.
   link de la simulacion: 
*/


//Librerias 
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

//Objeto para emular otro puerto serial
//RX pin 10
//TX pin 11
SoftwareSerial DFPlayerSerial(10, 11); // RX, TX


//Configuraciones
void setup()
{
  Serial.begin(9600);               //Inicio la comunicacion serial
  Serial.println("Uso del reproductor MP3");      //Imprimo el texto
  DFPlayerSerial.begin(9600);       //Inicio la comunicacion serial (emulada)
  mp3_set_serial(DFPlayerSerial);   //Inicio la comunicacion serial con el modulo  
  mp3_set_volume(15);               //Configuro el volumen a la mitad
}

void loop()
{
  mp3_play(1);
  delay(6000);
  mp3_next();
  delay(6000);
  mp3_prev();
  delay(6000);
  mp3_play(4);
  delay(6000);
}