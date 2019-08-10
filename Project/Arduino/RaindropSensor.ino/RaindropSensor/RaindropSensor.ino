#include <LoRaLib.h>

int minValue = 0;
int maxValue = 1024;
int led = 13;
int rainSensor = A0;
int r1=500;

void setup() {

  Serial.begin(9600);
  pinMode( led , OUTPUT);

}

void loop() {
  
  int reading = analogRead(rainSensor);
  Serial.println(reading);
  
  delay(250);
  
  if(reading <= r1)
  {
    Serial.println("Rain is high");
    digitalWrite(led, HIGH);
  }
  else
  {
    Serial.println("Rain is low");
    digitalWrite(led, LOW);
  }
}
