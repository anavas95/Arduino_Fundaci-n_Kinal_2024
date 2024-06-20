/* 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del sensor Ultrasónico
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 20 de junio.
   link de la simulacion: https://www.tinkercad.com/things/jPaBW2ORTZb-uso-del-sensor-ultrasonico
 */

//Directivas de preprocesador
#define pin_trig 4        //pin 4 conectado al trigger del sensor ultrasonico
#define pin_echo 5        //pin 5 conectado al echo del sensor ultrasonico

//Funcion que utilizo para obtener la distancia leida por el sensor ultrasonico
float readDistance(void);

//Configuraciones iniciales
void setup()
{
  pinMode(pin_trig, OUTPUT);            //pin 4 como salida.
  pinMode(pin_echo, INPUT);             //pin 5 como entrada
  digitalWrite(pin_trig, LOW);          //inicializo el pin 4 en estado bajo
  Serial.begin(9600);                   //inicializo la comunicacion serial a 9600
  Serial.println("Uso del sensor ultrasonico");       //mensaje de prueba
}

//Ciclo infinito
void loop()
{
  Serial.print("La distancia medida por el sensor es de: ");      //envio el mensaje por el monitor serial
  Serial.println(readDistance());                                 //imprimo la distancia leida por el sensor
  delay(100);                                                     //pausa de 100 milisegundos.

}


//Funcion que utilizo para obtener la distancia leida por el sensor ultrasonico
float readDistance(void)
{
  digitalWrite(pin_trig, HIGH);     //enciendo el sensor
  delayMicroseconds(10);            //pausa de 10 micresegundos
  digitalWrite(pin_trig, LOW);      //apagado el sensor
  
  long echo_Sensor = pulseIn(pin_echo, HIGH);     //leo la duracion del pulso del pin echo
  long distance = echo_Sensor/59;                  //obtengo el valor de la distancia
  
  return distance;                                  //devuelvo el valor de la distancia leida.
}
