#include <SPI.h>
#include <LoRa.h>
/**
 * Lora Variables
 */
int counter = 0;

/** 
 * Rain sensor variables
 */
int minValue = 0;
int maxValue = 1024;
int led = 13;
int rainSensor = A0;
int RainSensorReading = 0;


void setup() {
  Serial.begin(9600);
  pinMode( led , OUTPUT); // Rain sensor
  while (!Serial);

  Serial.println("LoRa Sender");

  if (!LoRa.begin(868E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  ReadRainSensor();
  LoraSensor();
  delay(2500);
}

void ReadRainSensor()
{
    // Rain Sessor Code
  RainSensorReading = 0;
  RainSensorReading = analogRead(rainSensor);
  delay(5);
  Serial.print("Rain Sensor Reading : ");
  Serial.println(RainSensorReading);
}

void LoraSensor()
{
  
  // LORA Code
  Serial.print("Sending packet: ");
  Serial.println(counter);

  // send packet
  LoRa.beginPacket();
  LoRa.print("hello ");
  LoRa.print(counter);
  
  if(RainSensorReading > 0 && RainSensorReading <= 400)
  {
    Serial.println("Heavy Rain");
    digitalWrite(led, HIGH);
    LoRa.print(" Heavy Rain");
  }
  else if(RainSensorReading > 400 && RainSensorReading <= 900 )
  {
    Serial.println("Less Rain");
    digitalWrite(led, LOW);
    LoRa.print(" Less Rain");
  }
  else
  {
    Serial.println("No Rain");
    LoRa.print(" No Rain");
  }

  LoRa.print(" Bhumi");
  LoRa.endPacket();

  counter++;
}
