#include<Servo.h>
Servo ser;
void setup()
{
  ser.attach(4);
}
void loop()
{
    ser.write(0);
    delay(1000);
    ser.write(0);
    delay(1000);
}