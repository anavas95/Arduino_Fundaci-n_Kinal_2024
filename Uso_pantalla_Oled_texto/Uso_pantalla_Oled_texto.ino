/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla OLED - Impresion de caracteres
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 09 de julio.
   link de la simulacion: 
*/


//Librerias
#include <Wire.h>             //libreria que me permite usar el protocolo i2c
#include <Adafruit_GFX.h>     //libreria que me permite el uso de graficos en la pantalla oled
#include <Adafruit_SSD1306.h> //libreria que me permite el uso del controlador de la pantalla OLED

//Directivas del preprocesador
#define widht_oled    128       //128 pixeles de ancho 
#define height_oled   64        //64 pixeles de alto

//Constructores
Adafruit_SSD1306 oled_display(widht_oled,height_oled,&Wire, -1);


//Configuraciones
void setup() 
{
 Serial.begin(9600);  //Inicio la comunicación serial
 delay(100);          //pausa de 100 milisegundos
 Serial.println("Uso de la pantalla oled - punto");

 //Inicio la comunicacion con la pantalla OLEC

 if(!oled_display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
 {
  Serial.println("No puedo comunicarme con la pantalla oled");
  Serial.println("Favor de revisar conexiones o alimentacion");
  while(1);   //Ciclo infinito
 }

 //limpio la pantalla para no sobre escribir en ella
 oled_display.clearDisplay();
 //Defino el tamaño del texto, este puede variar entre 1 y 8
 oled_display.setTextSize(1);
 //Defino el color del texto a imprimir (la pantalla es monocromatica)
 oled_display.setTextColor(SSD1306_WHITE);
 //Coloco el cursor en una posicion especifica
 oled_display.setCursor(10, 32);
 //Imprimo la cadena de texto
 oled_display.println("Hola Mundo!!");
 //Muestro en pantalla la cadena 
 oled_display.display();
}

//Ciclo infinito
void loop() 
{
}