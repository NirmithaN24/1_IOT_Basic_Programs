int MyValue=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  MyValue=random(100);
  Serial.print(MyValue);
  delay(1000);
}
