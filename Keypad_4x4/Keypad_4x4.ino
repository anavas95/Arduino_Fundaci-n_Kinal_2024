/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del keypad 4x4
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 07 de mayo
   link de la simulacion: https://www.tinkercad.com/things/hT3S7wV0sAJ-uso-del-keypad
   
*/

//Librerias
#include <Keypad.h>    //Libreria que me permite usar el teclado matricial.

//Macros o directivas de preprocesador
#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 2  //pin2 conectado a la fila 1
#define f2_teclado 3  //pin3 conectado a la fila 2
#define f3_teclado 4  //pin4 conectado a la fila 3
#define f4_teclado 5  //pin5 conectado a la fila 4
#define c1_teclado 6  //pin6 conectado a la columna 1
#define c2_teclado 7  //pin7 conectado a la columna 2
#define c3_teclado 8  //pin8 conectado a la columna 3
#define c4_teclado 9  //pin9 conectado a la columna 4
#define IN0_bcd    A0 //pinA0 conectado al IN0 del BCD
#define IN1_bcd    A1 //pinA1 conectado al IN1 del BCD
#define IN2_bcd    A2 //pinA2 conectado al IN2 del BCD
#define IN3_bcd    A3 //pinA3 conectado al IN3 del BCD


//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//Arreglos en los que defino los pines a utilizar, tanto para las columnas como para las filas
byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};


//Creo el constructor para poder usar el teclado matricial.
Keypad teclado_profe = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup() 
{
  Serial.begin(9600);    //Inicio la comunicacion serial.
  Serial.println("Prueba del teclado matricial");   //Envio de mensaje
}

void loop() 
{
  
  char tecla = teclado_profe.getKey();  //Obtengo la tecla que presione


  //Si alguna tecla ha sido presionada
  if(tecla)
  {
    Serial.print("La tecla presionada es: ");   //Envio el mensaje
    Serial.println(tecla);    //Muestro por la terminal la tecla presionada

    //Muestro el valor de la tecla presionada en un display de 7 segmentos.
    switch(tecla)
    {
      case('0'):
      {
        digitalWrite(IN0_bcd, LOW);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('1'):
      {
        digitalWrite(IN0_bcd, HIGH);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('2'):
      {
        digitalWrite(IN0_bcd, LOW);
        digitalWrite(IN1_bcd, HIGH);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('3'):
      {
        digitalWrite(IN0_bcd, HIGH);
        digitalWrite(IN1_bcd, HIGH);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('4'):
      {
        digitalWrite(IN0_bcd, LOW);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, HIGH);
        digitalWrite(IN3_bcd, LOW);;
      break;
      }
      case('5'):
      {
        digitalWrite(IN0_bcd, HIGH);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, HIGH);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('6'):
      {
        digitalWrite(IN0_bcd, LOW);
        digitalWrite(IN1_bcd, HIGH);
        digitalWrite(IN2_bcd, HIGH);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('7'):
      {
        digitalWrite(IN0_bcd, HIGH);
        digitalWrite(IN1_bcd, HIGH);
        digitalWrite(IN2_bcd, HIGH);
        digitalWrite(IN3_bcd, LOW);
      break;
      }
      case('8'):
      {
        digitalWrite(IN0_bcd, LOW);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, HIGH);
      break;
      }
      case('9'):
      {
        digitalWrite(IN0_bcd, HIGH);
        digitalWrite(IN1_bcd, LOW);
        digitalWrite(IN2_bcd, LOW);
        digitalWrite(IN3_bcd, HIGH);
      break;
      }
    }
  }
}
