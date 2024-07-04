/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del sensor de efecto hall
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 04 de julio.
   link de la simulacion: 
*/


//Directivas del preprocesador
#define sensor_hall 2

//Variables
bool state_sensor;   //variable donde guardo el estado logico del sensor de efecto hall

void setup() 
{
 Serial.begin(9600);  //Inicio la comunicación serial
 pinMode(sensor_hall, INPUT); // pin 2 como entrado. NOTA: no usar la instrucción de INPUT_PULLUP
 Serial.println("Uso del sensor de efecto hall");
}

void loop() {
  state_sensor = digitalRead(sensor_hall);                      //guardo el estado del pin donde tengo conectado el sensor de efecto hall
  if(state_sensor == LOW)
  {
    Serial.println("El eje del motor ha pasado por el sensor");
    delay(10);
  }
  /*
  Serial.print("El valor leido por el sensor de efecto hall: ");      //imprimo texto   
  Serial.println(state_sensor);                                 //imprimo el estado del sensor de efecto hall
  delay(100); */                                                   //pausa de 10 milisegundos
}