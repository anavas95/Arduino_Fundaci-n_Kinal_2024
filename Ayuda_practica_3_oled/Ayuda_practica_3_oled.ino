/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Ayuda practica 3 - parte 2 - pantalla oled
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
#define pot_pin       A0        //pin A0 donde conectare el potenciometro

//Constructores
Adafruit_SSD1306 oled_display(widht_oled,height_oled,&Wire, -1);

//Variables
unsigned int adc_valor;

//Configuraciones
void setup() 
{

 Serial.begin(9600);  //Inicio la comunicación serial
 delay(100);          //pausa de 100 milisegundos
 Serial.println("Uso de la pantalla oled - practica 3 parte 2");
 pinMode(A0, INPUT);

 //Inicio la comunicacion con la pantalla OLEC

 if(!oled_display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
 {
  Serial.println("No puedo comunicarme con la pantalla oled");
  Serial.println("Favor de revisar conexiones o alimentacion");
  while(1);   //Ciclo infinito
 }

 oled_display.setTextSize(4);
 //Defino el color del texto a imprimir (la pantalla es monocromatica)
 oled_display.setTextColor(SSD1306_WHITE);
 //Coloco el cursor en una posicion especifica
 oled_display.setCursor(0, 0);
 //Imprimo la cadena de texto
 oled_display.println("Alejandro Navas");
 oled_display.display();
}

//Ciclo infinito
void loop() 
{
  /*
  oled_display.setTextSize(1);
 //Defino el color del texto a imprimir (la pantalla es monocromatica)
 oled_display.setTextColor(SSD1306_WHITE);
 //Coloco el cursor en una posicion especifica
 oled_display.setCursor(0, 0);
 //Imprimo la cadena de texto
 oled_display.println("Valor del ADC");
 //Muestro en pantalla la cadena 
 oled_display.display();
  adc_valor = analogRead(A0);       //leo el valor del canal 0 del ADC
  Serial.print("El valor del ADC es de: ");
  Serial.println(adc_valor);
  oled_display.setTextSize(3);
  oled_display.setTextColor(SSD1306_WHITE);
  oled_display.setCursor(0,12);
  oled_display.println(adc_valor);
  oled_display.display();
  delay(150);
  oled_display.clearDisplay();*/
}
