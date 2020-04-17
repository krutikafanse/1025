int ledPin = 13;                 // LED connected to digital pin 13

void setup()
{
  pinMode(ledPin, Output);      // sets the digital pin as output
}

void loop()
{
  digitalWrite(ledPin, high);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(ledPin, low);    // sets the LED off
  delay(1000);                  // waits for a second
}
