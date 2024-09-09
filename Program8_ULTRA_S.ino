int trig=7;//output
int echo=6;//input
int timeInMicro;
int distanceIncm;
void setup() 
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);
}
void loop() 
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  timeInMicro=pulseIn(echo,HIGH);

  distanceIncm=((timeInMicro/29)/2);

  Serial.println(distanceIncm);
  delay(1000);
}
