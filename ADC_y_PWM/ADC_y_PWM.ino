/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: ADC y PWM
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 20 de junio.
   link de la simulacion: https://www.tinkercad.com/things/iohrZ6CfZZ5-adc-y-pwm
*/

//Directivas del preprocesador
#define canal0_pot A0
#define led_pwm3	3

//Variable donde guardo el valor digital convertido por el ADC del arduino
unsigned int valor_adc_pot;

//Variable que controle la intensidad a la que brilla el led
unsigned char brillo_led;

//Configuraciones
void setup()
{
  
  Serial.begin(9600);                 //Inicializo la comunicacion serial a 9600 baudios
  pinMode(LED_BUILTIN, OUTPUT);       //Configuro el led del pin13 como salida
  pinMode(led_pwm3, OUTPUT);          //pin3 como salida
  pinMode(canal0_pot, INPUT);         //pinA0 como entrada 
}

//Ciclo infinito
void loop()
{
  //guardo el valor leido por el cana analogico A0 del arduino
  valor_adc_pot = analogRead(canal0_pot);		//Leo el voltaje en el pin A0 del arduino
  brillo_led = map(valor_adc_pot,0,1023,0,255);     //lo linealizo (escalo) a un valor entre 0 y 255 para poder escribirlo en el pin PWM
  analogWrite(led_pwm3, brillo_led);                //vario la intensidad del led por medio del PWM
  delay(100);                                       //espera de 100 milisegundos
  
  /*Serial.print("El valor leido por el ADC es de: ");
  Serial.println(valor_adc_pot);
  
  
  if(valor_adc_pot > 511)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }*/
}