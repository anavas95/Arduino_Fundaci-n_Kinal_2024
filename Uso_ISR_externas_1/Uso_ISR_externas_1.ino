/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Interrupciones
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 20 de junio.
   link de la simulacion: https://www.tinkercad.com/things/cE9BpvLJ09b-uso-de-interrupciones-externas
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


void setup() {
  
  Serial.begin(19200); //Inicio la comunicación serial
  Serial.println("Uso de las interrupciones externas");
  pinMode(btn_rising, INPUT);  //pin 2 como entrada
  pinMode(btn_falling, INPUT); //pin 3 como entrada
  attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);   //Anclar la interrupción del pin 2 a una funcion de ISR, disparada por el flanco ascendente
  attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING); //Anclar la interrupción del pin 3 a una funcion de ISR, disparada por el flanco descendente
}

void loop() {
 

}


//Funciones de ISR
void funcion_ISR_rising(void)
{
  //Cuando se dispara la interrupcion por RISING
  Serial.println("He presionado el boton de rising");
}

void funcion_ISR_falling(void)
{
  //Cuando se dispara la interrupcion por FAllING
  Serial.println("He presionado el boton de falling");
}