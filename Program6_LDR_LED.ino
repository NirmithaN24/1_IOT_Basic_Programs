int ldr=12;
int led=11;
int x;
void setup() 
{
Serial.begin(9600);
pinMode(ldr,INPUT);
pinMode(led,OUTPUT);
}

void loop() 
{
  x=digitalRead(ldr);
  if(x==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
