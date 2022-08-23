#include <Servo.h>          // Incluir la librería Servo
Servo servo1;               // Crear un objeto tipo Servo llamado servo1
Servo servo2;
int angulo = 0;
int angulo2 =0;
int J1_Eje_X = A1;
int J1_Eje_Y = A2;
int J2_Eje_X = A3;
int J2_Eje_Y = A4;
int LED = 12;

void setup()
    {
        servo1.attach(6);  // Conectar servo1 al pin 6
        servo2.attach(7);
}

void loop()
    {
        digitalWrite(LED, HIGH);
        angulo = map(analogRead(A1), 0, 1023, 0, 180);
        servo1.write(angulo);
        angulo2 = map(analogRead(A3),0, 1023, 0, 180);
        servo2.write(angulo2);
        delay(100);
           }
