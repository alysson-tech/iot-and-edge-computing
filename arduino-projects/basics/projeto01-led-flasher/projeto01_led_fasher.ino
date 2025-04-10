int ledPin = 10;  // LED connected to digital pin 10

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED on
  delay(1000);                 // Wait 1 second
  digitalWrite(ledPin, LOW);   // Turn LED off
  delay(1000);                 // Wait 1 second
}
