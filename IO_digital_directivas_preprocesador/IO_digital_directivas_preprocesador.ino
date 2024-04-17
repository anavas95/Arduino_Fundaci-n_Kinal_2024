/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - Directivas de preprocesador
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/klcxQB1rfWz-entradas-y-salidas-directivas-de-preprocesador
*/

//Directivas de preprocesador
#define miledRojo     2         //LLamo al pin 2, led rojo
#define miledVerde    3         //Llamo al pin 3, led verde
#define miledAmarillo 4         //LLamo al pin 4, led amarillo
#define configOUTPUT(pin)  pinMode(pin, OUTPUT)   //setouput declara un pin como salida
#define setOUTPUT(pin)     digitalWrite(pin, HIGH)        //enciendo un pin
#define clearOUTPUT(pin)   digitalWrite(pin, LOW)          //apago un pin
#define pausa              delay(500)


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Entradas y salidas digitales - Directivas de preprocesador");     //Envio el siguiente mensaje al monitor serial.
  configOUTPUT(miledRojo);
  configOUTPUT(miledVerde);
  configOUTPUT(miledAmarillo);

}

//Funcion donde se ejecutan de manera "infinita" el código. En este caso, se trata de un semaforo utilizando 
//directivas de preprocesador en lugar de las instrucciones de arduino.
void loop() {
  setOUTPUT(miledRojo);           //enciendo el pin 2
  clearOUTPUT(miledVerde);        //apago el pin 3
  clearOUTPUT(miledAmarillo);     //apago el pin 4
  delay(1500);                    //espera de 1500 milisegundos
  clearOUTPUT(miledRojo);         //apago el pin 2
  setOUTPUT(miledVerde);          //enciendo el pin 3
  clearOUTPUT(miledAmarillo);     //apago el pin 4
  delay(1500);  
  clearOUTPUT(miledRojo);         //apago el pin 2
  clearOUTPUT(miledVerde);        //apago el pin 3
  setOUTPUT(miledAmarillo);       //enciendo el pin 4
  delay(1500);  
}