#include<Servo.h>
Servo ser;
void setup()
{
  ser.attach(4);
}
void loop()
{
  for(int i=0; i<=180; i+=1)
  {
    ser.write(i);
    delay(15);
  }
  for(int i=180; i>=0; i-=1)
  {
    ser.write(i);
    delay(15);
  }
}