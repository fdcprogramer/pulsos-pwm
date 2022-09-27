//en este codigo se busca generar una señal pwm y a su vez señales analogas haciendo uso de los registros de la tarjeta seleccionada 
#include <LiquidCrystal_I2C.h>
#include <TimerOne.h>


//variables
int arrriba = 10, abajo = 9, izquierda = 8, derecha = 7, enter = 6, salir = 5;
int analogPin = A0;
int ndientes = 0, nfaltas = 0, ON = 0;
int menu = 1;
int contador =0, dientes = 1, faltas= 1;
float potenciometro =0, tension_pot= 0;
float tiempo= 0, rps =0,rpm = 0;

//configuracion del teclado
const byte ROWS = 4; //define cantidad de filas en el teclado
const byte COLS = 4; //define cantidad de columnas en el teclado
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'}, // muestra la configuracion de las teclas 
  {'7','8','9','E'},
  {'R','0','P','S'}
};
byte rowPins[ROWS] = {6 ,5 ,3 ,2}; //conexion de los pines para las filas
byte colPins[COLS] = {8, 9, 10, 11}; //conexion de los pines par las columnas 

Keypad teclado = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

//configuracion del timer 1




