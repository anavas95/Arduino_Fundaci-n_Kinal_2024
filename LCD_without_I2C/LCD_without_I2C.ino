/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD sin interfaz I2C
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: https://www.tinkercad.com/things/1CMtswoDbR5-uso-de-la-lcd
   
*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

//Constructor
LiquidCrystal LCD_Alejandro(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD

byte ninoConBrazoAbajo[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001
};

byte ninoConBrazoArriba[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B01110,
  B00100,
  B01010,
  B01010
};

void setup()
{
  LCD_Alejandro.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD_Alejandro.createChar(1,ninoConBrazoAbajo);
  LCD_Alejandro.createChar(2,ninoConBrazoArriba);
  LCD_Alejandro.setCursor(0,0);
  LCD_Alejandro.print("Hola patojos");
}
void loop()
{
  LCD_Alejandro.setCursor(0,1);  //Primera columna y segunda fila  
  LCD_Alejandro.write(1);
  delay(250);
  LCD_Alejandro.setCursor(0,1);
  LCD_Alejandro.write(2);
  delay(250);
}
