//set pin numbers
//const won't change
const int ledPinExt = 12; //the number of the Ext LED pin
const int ledPinOnBoard = 13; //the number of the on-board LED pin
const int ldrPin = A0; //the number of the LDR pin
 
 
void setup()
{ 
    Serial.begin(9600);
    pinMode(ledPinExt, OUTPUT); //initialize the External LED pin as an output
    pinMode(ledPinOnBoard, OUTPUT); //initialize the on-board LED pin as an output
    pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}
 
void loop()
{
    Ldr_Sensor();
    ExtLED();
    
    delay(500);
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
