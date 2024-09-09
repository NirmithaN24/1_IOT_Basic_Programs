#define soil_sensor A0 //define 8th pin of Arduino as soil sensor
int sensor_value;  //create a variable to store the data

void setup()
{
  Serial.begin(9600);
  pinMode(soil_sensor, INPUT);
}
void loop()
{
  sensor_value=analogRead(soil_sensor); //read the data from the soil sensor and store that value in a variable
  Serial.println(sensor_value); //print analog value which is received from the sensor
}