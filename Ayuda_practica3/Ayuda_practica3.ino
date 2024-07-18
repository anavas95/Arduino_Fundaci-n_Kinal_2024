/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Ayuda practica 3 - matriz led
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 09 de julio.
   link de la simulacion: 
   Link para animaciones led: https://www.riyas.org/2013/12/online-led-matrix-font-generator-with.html
*/


//Librerias
#include <LedControl.h>         //Libreria que me permita usar el IC MAX7219 (matriz led)

//Directivas de preprocesador
#define din_matrix        3     //pin3 del arduino conectado al pin DIN de la matriz led
#define cs_matrix         2     //pin2 del arduino conectado al pin CS de la matriz led
#define clk_matrix        4     //pin4 del arduino conectado al pin CLK de la matriz led

//Constructores
//Voy a controlar con el objeto PacmanMatrix un arreglo de 1 matriz led
LedControl PacmanMatrix = LedControl(din_matrix, clk_matrix, cs_matrix,1);

//Variables
//Array que contiene los valores binarios para representar un pacman con la boca abierta
byte pacman_boca_abierta[8]= {
  B00111000,
  B01000100,
  B10001000,
  B10010000,
  B10001000,
  B01000100,
  B00111000,
  B00000000
};

//Configuraciones
void setup()
{
  Serial.begin(9600); //Inicio la comunicacion serial a 9600 baudios.
  PacmanMatrix.shutdown(0, false);    //Encendiendo mi matriz led. 
  PacmanMatrix.setIntensity(0,15);    //Configuro el brillo de la matriz led a la mitad (este valor puede ser desde el 0 al 30)
  PacmanMatrix.clearDisplay(0);        //limpio la pantalla de alguna animacion.
  Serial.println("Uso de la matriz led");

}


//Ciclo infinito
void loop()
{
  for(int i=0; i<8;i++)
  {
    PacmanMatrix.setRow(0,i,pacman_boca_abierta[i]);
  }
}




/*

//Librerias
#include <LedControl.h>   //libreria que me permite usar el controlador led max7219

//Directivas de preprocesador
#define dataPin0   12   //pin 12 conectado al pin de datos del max7219.
#define dataClock0 11   //pin 11 conectado al pin de clock del max7219.
#define dataLoad0  10   //pin 10 conectado al pin de carga del max7219.


//Constructores
LedControl matrix_unidades = LedControl(dataPin0,dataClock0,dataLoad0,1);



byte pacman_open[8]=
{
  B00111000,
  B01000100,
  B10001000,
  B10010000,
  B10001000,
  B01000100,
  B00111000,
  B00000000
};

byte pacman_close[8]=
{
  B00111000,
  B01000100,
  B10000010,
  B10011110,
  B10000010,
  B01000100,
  B00111000,
  B00000000
};

unsigned long update_delay = 850;   //espacio entre animaciones.

//Prototipos de funciones
void print_pacman_open(void);
void print_pacman_close(void);

void setup()
{
  Serial.begin(9600); //Inicio la comunicacion serial a 9600 baudios.
  matrix_unidades.shutdown(0,false); //Activo el max7219 para poder mostrar los digitos.
  matrix_unidades.setIntensity(0,30);  //Brilo a la mitad 
  matrix_unidades.clearDisplay(0);    //limpio el display
  Serial.println("Animacion con la matriz led");
}


void loop() 
{
 
  print_pacman_open();
  delay(update_delay);
  print_pacman_close();
  delay(update_delay);
}

void print_pacman_open(void)
{      
  for(int i=0; i<8;i++)
  {
    matrix_unidades.setRow(0,i,pacman_open[i]);
  }
}

void print_pacman_close(void)
{
  for(int i=0; i<8;i++)
  {
    matrix_unidades.setRow(0,i,pacman_close[i]);
  }
}
*/

