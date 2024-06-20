/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Interrupciones y variables volatiles
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 20 de junio.
   link de la simulacion: https://www.tinkercad.com/things/3aAKs3RXw8V-uso-de-las-interrupciones-externas-2
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
volatile static bool f_print = false; //Varible booleana que me permite imprimir un texto, en el loop

void setup() {
  
  Serial.begin(19200); //Inicio la comunicación serial
  Serial.println("Uso de las interrupciones externas y las variables volatiles");
  pinMode(btn_rising, INPUT);  //pin 2 como entrada
  pinMode(btn_falling, INPUT); //pin 3 como entrada
  attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);   //Anclar la interrupción del pin 2 a una funcion de ISR, disparada por el flanco ascendente
  attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING); //Anclar la interrupción del pin 3 a una funcion de ISR, disparada por el flanco descendente
}

void loop() {

  //Si el valor de la variable es true
  if(f_print)
  {	
    //imprimo el siguiente mensaje por el monitor serial
    Serial.println("Se ha disparado una interrupcion");
    f_print = false;				//limpio la bandera
    
  }
}


//Funciones de ISR
void funcion_ISR_rising(void)
{
  f_print = true; //Pongo en uno la variable
}

void funcion_ISR_falling(void)
{
  f_print = true; //Pongo en uno la variable
}