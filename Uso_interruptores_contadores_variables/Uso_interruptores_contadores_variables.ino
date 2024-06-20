/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Interrupciones, variables volatiles y contadores
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 20 de junio.
   link de la simulacion: https://www.tinkercad.com/things/lH4VP0gKmBH-uso-de-las-interrupciones-variables-y-contadores
*/


/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso de interrupciones externas ejemplo 3 - Bimestre III
*/


//Directivas de preprocesador
#define btn_rising  2     //pin 2 utilizado para una interrupción externa por rising
#define btn_falling 3     //pih 3 utilizado para una interrupción externa por falling

//Funciones ISR 
/*
 * ISR = interrupt services routine
 * Estas son las funciones que van a ser llamadas al dispararse una interrupcion externa
 * 
 * NOTA: las funciones deben de ser sin retorno y sin parametros
*/

void funcion_ISR_falling(void);
void funcion_ISR_rising(void);

//Variables
volatile static bool f_print=false; // variable para mostrar en texto en el loop
volatile static unsigned char i=0; // variable que cuenta de 0 - 255;


void setup() {
  
  Serial.begin(19200); //Inicio la comunicación serial
  Serial.println("Uso de las interrupciones y las variables volatiles");
  pinMode(btn_rising, INPUT);  //pin 2 como entrada
  pinMode(btn_falling, INPUT); //pin 3 como entrada
  attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);   //Anclar la interrupción del pin 2 a una funcion de ISR, disparada por el flanco ascendente
  attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING); //Anclar la interrupción del pin 3 a una funcion de ISR, disparada por el flanco descendente
}

void loop() {
  
if(f_print)
{
  f_print = false; //limpio la variable
  Serial.println(i); //imprimo el valor de I
}

}


//Funciones de ISR
void funcion_ISR_rising(void)
{
  f_print = true;
  //aumentar el valor de la variable
  i++; 
  //Serial.println(i);
}

void funcion_ISR_falling(void)
{
  f_print = true;
  //disminuir el valor de una variable
  i--;
  //Serial.println(i);
}