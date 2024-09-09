int ldr=11;
int x;
void setup() 
{
Serial.begin(9600);
pinMode(ldr,INPUT);  
}
void loop() 
{
  x=digitalRead(ldr);
  Serial.println(x);
}
