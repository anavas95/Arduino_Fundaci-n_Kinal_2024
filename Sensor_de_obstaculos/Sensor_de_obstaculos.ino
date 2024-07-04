/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del sensor de obstaculos
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 04 de julio.
   link de la simulacion: 
*/


//Directivas del preprocesador
#define sensor_IR 2

//Variables
bool state_sensor;   //variable donde guardo el estado logico del sensor de obstaculos

void setup() 
{
 Serial.begin(9600);  //Inicio la comunicación serial
 pinMode(sensor_IR, INPUT); // pin 2 como entrado. NOTA: no usar la instrucción de INPUT_PULLUP
 Serial.println("Uso del sensor de obstaculos");
}

void loop() {
  state_sensor = digitalRead(sensor_IR);                      //guardo el estado del pin donde tengo conectado el sensor de obstaculos
  
  if(state_sensor == LOW)
  {
    Serial.println("He detectado la presencia del enemigo");
    delay(10);
  }
  
  /*
  Serial.print("El valor leido por el sensor de obstaculos: ");      //imprimo texto   
  Serial.println(state_sensor);                                 //imprimo el estado del sensor de obstaculos
  delay(100);  */                                                //pausa de 10 milisegundos
}
