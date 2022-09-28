# 1 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino"
//en este codigo se busca generar una señal pwm y a su vez señales analogas haciendo uso de los registros de la tarjeta seleccionada 
# 3 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino" 2
# 4 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino" 2

LiquidCrystal_I2C (0x27,20,4)// Define la direccion del Bus I2C de la pantalla

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

Keypad teclado = Keypad( ((char*)keys), rowPins, colPins, ROWS, COLS );

void setup() {
lcd.init();
lcd.backlight();
lcd.setCursor(2,0);
lcd.print("Simulador de Ecus");
lcd.setCursor(9,1);
lcd.print("CHIPTUNNIG");



//configuracion del timer 1


# 42 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino" 3
__asm__ __volatile__ ("cli" ::: "memory")
# 42 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino"
             ;// esta funcion desabilita todas las interrupciones mientras se configura el timer
(*((volatile unsigned char *)0x90)) = 0;
(*((volatile unsigned char *)0x91)) = 0;
(*((volatile unsigned char *)0x92)) = 0;
(*((volatile unsigned char *)0x95)) = 0;
(*((volatile unsigned char *)0x94)) = 0;

//Registro de comparacion para el Timer


# 51 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino" 3
(*(volatile uint8_t *)(0x81)) 
# 51 "/home/axel/Documentos/Proyectos Vscode/proyectos arduino/pulsos pwm/pulsos_pwm.ino"
      |= (<<0)


}
