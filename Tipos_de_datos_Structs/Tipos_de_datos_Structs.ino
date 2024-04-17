/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Tipos de datos - Structs
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: https://www.tinkercad.com/things/f0skWyOyKWN-tipos-de-datos-structs
   Tutorial o consulta: https://www.prometec.net/struct/
*/

//Variables
/*
Los Structs son un tipo de dato que puede contener dentro de ellos, diversos tipos de datos.
*/

//Definición de la estructura, con nombre y los tipos de datos que puede contener
struct datos_alumno
{
  char nombres_alumno[50];     //Variable tipo char donde almacenare los nombres de los alumnos
  char apellidos_alumno[50];   //Variable tipo char donde almacenare los apellidos de los alumnos
  byte edad_alumnos;           //Variable tipo byte donde almacenare la edad de los alumnos.
  long carnet;                  //Variable tipo long donde almacenare el número de carnet de los alumnos.
  char codigo_alumnos[50];     //Variable tipo char donde almacenare el código técnico de los alumnos.
};

//Creo los datos de los alumnos que voy a registrar. NOTA: estos deben de llevar el orden en los que fueron definidos dentro del struct
datos_alumno alumno1 = {"Luis Fernando", "Alvarado Ramirez", 19, 2022219,"EB5AV"};
datos_alumno alumno2 = {"David Alfredo", "del Cid Rodriguez", 18, 2022482, "EB5AV"};
datos_alumno alumno3 = {"Marcos Alejandro", "Barrios Saravia", 20, 2021169, "EB5BM"};
datos_alumno alumno4 = {"David Uziel", "Coj Gonzalez", 21, 2018365, "EB5BV"};
datos_alumno alumno5 = {"Luis Eduardo", "Pena Arriaga", 21, 2017184, "EB5AM"};


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  Serial.println("Tipos de datos - Structs");     //Envio el siguiente mensaje al monitor serial.
  //Muestro los datos contenidos en los datos de los alumnos
  Serial.print("El nombre del alumno 1 es: ");
  Serial.println(alumno1.nombres_alumno);
  Serial.print("El apellido del alumno 1 es: ");
  Serial.println(alumno1.apellidos_alumno);
  Serial.print("La edad del alumno 1 es: ");
  Serial.println(alumno1.edad_alumnos);
  Serial.print("El carnet del alumno 1 es: ");
  Serial.println(alumno1.carnet);
  Serial.print("El codigo tecnico del alumno 1 es: ");
  Serial.println(alumno1.codigo_alumnos);

    //Muestro los datos contenidos en los datos de los alumnos
  Serial.print("El nombre del alumno 2 es: ");
  Serial.println(alumno2.nombres_alumno);
  Serial.print("El apellido del alumno 1 es: ");
  Serial.println(alumno2.apellidos_alumno);
  Serial.print("La edad del alumno 2 es: ");
  Serial.println(alumno2.edad_alumnos);
  Serial.print("El carnet del alumno 2 es: ");
  Serial.println(alumno2.carnet);
  Serial.print("El codigo tecnico del alumno 2 es: ");
  Serial.println(alumno2.codigo_alumnos);

    //Muestro los datos contenidos en los datos de los alumnos
  Serial.print("El nombre del alumno 3 es: ");
  Serial.println(alumno3.nombres_alumno);
  Serial.print("El apellido del alumno 3 es: ");
  Serial.println(alumno3.apellidos_alumno);
  Serial.print("La edad del alumno 3 es: ");
  Serial.println(alumno3.edad_alumnos);
  Serial.print("El carnet del alumno 3 es: ");
  Serial.println(alumno3.carnet);
  Serial.print("El codigo tecnico del alumno 3 es: ");
  Serial.println(alumno3.codigo_alumnos);

    //Muestro los datos contenidos en los datos de los alumnos
  Serial.print("El nombre del alumno 4 es: ");
  Serial.println(alumno4.nombres_alumno);
  Serial.print("El apellido del alumno 4 es: ");
  Serial.println(alumno4.apellidos_alumno);
  Serial.print("La edad del alumno 4 es: ");
  Serial.println(alumno4.edad_alumnos);
  Serial.print("El carnet del alumno 4 es: ");
  Serial.println(alumno4.carnet);
  Serial.print("El codigo tecnico del alumno 4 es: ");
  Serial.println(alumno4.codigo_alumnos);

    //Muestro los datos contenidos en los datos de los alumnos
  Serial.print("El nombre del alumno 5 es: ");
  Serial.println(alumno5.nombres_alumno);
  Serial.print("El apellido del alumno 5 es: ");
  Serial.println(alumno5.apellidos_alumno);
  Serial.print("La edad del alumno 5 es: ");
  Serial.println(alumno5.edad_alumnos);
  Serial.print("El carnet del alumno 5 es: ");
  Serial.println(alumno5.carnet);
  Serial.print("El codigo tecnico del alumno 5 es: ");
  Serial.println(alumno1.codigo_alumnos);
}

//Funcion donde se ejecutan de manera "infinita" el código. 
void loop() {

}