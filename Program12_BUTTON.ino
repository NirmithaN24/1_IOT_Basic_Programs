int button=10;
void setup() {
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
   int i=digitalRead(button);
   if(i==1)
   {
    Serial.println("got the signal");
   }
}
