int LEDPin = 13;
int mini = 5;
int maxi = 500;
int randNumber;
void setup() 
{
  pinMode(LEDPin,OUTPUT);
}

void loop()
{
  randNumber = random(mini, maxi);
  digitalWrite( LEDPin , HIGH );
  delay( randNumber );
  digitalWrite(LEDPin , LOW);
  delay( randNumber );
}
