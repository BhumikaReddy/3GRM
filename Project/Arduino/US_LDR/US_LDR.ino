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
}

void loop() 
{
    loopUltrasonic();
    loopLDR();
    delay(250);
}

void setupUltrasonic()
{
    pinMode(US_trigPin , OUTPUT); // Sets the trigPin as an Output
    pinMode(US_echoPin, INPUT); // Sets the echoPin as an Input
}

void setupLDR()
{
    pinMode(ledPinExt, OUTPUT); //initialize the External LED pin as an output
    pinMode(ledPinOnBoard, OUTPUT); //initialize the on-board LED pin as an output
    pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
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
    delay(1000);
    digitalWrite(ledPinExt, LOW);
    delay(1000);  
}
