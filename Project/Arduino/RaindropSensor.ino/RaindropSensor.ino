int minValue = 0;
int maxValue = 1024;
int led = 13;
int rainSensor = A0;

void setup() {

  Serial.begin(9600);
  pinMode( led , OUTPUT);

}

void loop() {
  
  int reading = analogRead(rainSensor);
  delay(250);
   
  if(reading <= 500)
  {
    Serial.println("Rain is low");
    digitalWrite(led, HIGH);
  }
  
  else
  {
    Serial.println("Rain is heavy");
    digitalWrite(led, LOW);
  }
}
