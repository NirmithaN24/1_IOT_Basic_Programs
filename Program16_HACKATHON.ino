const int trig=7;//output
const int echo=8;//input
int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
const int ldr=9;
int x;
int buzzer=10;
int timeInMicro;
int distanceIncm;

void setup() 
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(ldr,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop() 
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
 
  timeInMicro=pulseIn(echo,HIGH);
  distanceIncm=((timeInMicro/29)/2);
  Serial.println(distanceIncm);

  {
  if(distanceIncm<=30)
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }
  if(distanceIncm<=25)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }
  if(distanceIncm<=20)
  {
    digitalWrite(led3,HIGH);
  }
  else
  {
    digitalWrite(led3,LOW);
  }
  if(distanceIncm<=15)
  {
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led4,LOW);
  }

  x=digitalRead(ldr);
  if(x==1)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(led5,LOW);
    digitalWrite(buzzer,LOW);
  }
  }
}
