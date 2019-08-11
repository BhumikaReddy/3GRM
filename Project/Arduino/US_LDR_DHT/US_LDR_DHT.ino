// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor

#include "DHT.h"

#define DHTPIN 52     // Digital pin connected to the DHT sensor
// Feather HUZZAH ESP8266 note: use pins 3, 4, 5, 12, 13 or 14 --
// Pin 15 can work but DHT must be disconnected during program upload.

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);


//set pin numbers. const won't change

// Ultrasonic PIN configurations & Varibales
const int US_trigPin = 10; //set trig pin to 9
const int US_echoPin = 9; //set echo pin to 10

long US_duration;
int US_distance;
long US_cm;

// LDR PIN configurations & Varibales
const int ledPinExt = 22; //the number of the Ext LED pin
const int ledPinOnBoard = 13; //the number of the on-board LED pin
const int ldrPin = A15; //the number of the LDR pin

void setup() 
{
    Serial.begin(9600); // Starts the serial communication

    setupUltrasonic();
    setupLDR();
    setupDHT();
}

void loop() 
{
    loopUltrasonic();
    loopLDR();
    loopDHT();
    delay(250);
}

void setupUltrasonic()
{
    Serial.println(F("Setup Ultrasonic"));
    pinMode(US_trigPin , OUTPUT); // Sets the trigPin as an Output
    pinMode(US_echoPin, INPUT); // Sets the echoPin as an Input
}

void setupLDR()
{
    Serial.println(F("Setup LDR"));
    pinMode(ledPinExt, OUTPUT); //initialize the External LED pin as an output
    pinMode(ledPinOnBoard, OUTPUT); //initialize the on-board LED pin as an output
    pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}

void setupDHT()
{
    Serial.println(F("DHTxx test!"));
    dht.begin();
}

void loopUltrasonic()
{
    // Clears the trigPin
    digitalWrite(US_trigPin, LOW);
    delayMicroseconds(5);
    // Sets the trigPin on HIGH state for 10 micro seconds
    
    digitalWrite(US_trigPin, HIGH);
    delayMicroseconds(10);
    
    digitalWrite(US_trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    
    US_duration = pulseIn(US_echoPin, HIGH);
    // Calculating the distance
    
    US_distance = US_duration*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("Ultrasonic Distance: ");
    Serial.print(US_distance);
    Serial.println("cm");
}

void loopLDR()
{
    Ldr_Sensor();
    ExtLED();    
}

void Ldr_Sensor()
{
    int ldrReading = 0;
    
    ldrReading = analogRead(ldrPin); //read the status of the LDR value
    Serial.print("Luminous Intensity : ");
    Serial.println(ldrReading);
    
    /*check if the LDR status is <= 300
     *if it is, the LED is HIGH
     */
    if (ldrReading <= 300)
    {    
        digitalWrite(ledPinOnBoard, HIGH); //turn LED on
        Serial.println("Room is DARK, LED is ON");
    }
    else
    {   
        digitalWrite(ledPinOnBoard, LOW); //turn LED off
        Serial.println("Sufficient Light, Lights OFF");
    }
}

void ExtLED()
{
    digitalWrite(ledPinExt, HIGH);
    delay(500);
    digitalWrite(ledPinExt, LOW);
    delay(500);  
}

void loopDHT()
{
    // Reading temperature or humidity takes about 250 milliseconds!
    // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
    float h = dht.readHumidity();
    // Read temperature as Celsius (the default)
    float t = dht.readTemperature();
    // Read temperature as Fahrenheit (isFahrenheit = true)
    float f = dht.readTemperature(true);
  
    // Check if any reads failed and exit early (to try again).
    if (isnan(h) || isnan(t) || isnan(f)) {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }
  
    // Compute heat index in Fahrenheit (the default)
    float hif = dht.computeHeatIndex(f, h);
    // Compute heat index in Celsius (isFahreheit = false)
    float hic = dht.computeHeatIndex(t, h, false);
  
    Serial.print(F("Humidity: "));
    Serial.print(h);
    Serial.print(F("%  Temperature: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.print(F("°F  Heat index: "));
    Serial.print(hic);
    Serial.print(F("°C "));
    Serial.print(hif);
    Serial.println(F("°F"));
}
