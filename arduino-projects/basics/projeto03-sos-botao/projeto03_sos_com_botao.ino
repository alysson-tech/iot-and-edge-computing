int ledPin = 10;        // LED connected to digital pin 10
int buttonPin = 2;      // Button connected to digital pin 2

void setup() {
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
  // Read the current state of the button
  int buttonState = digitalRead(buttonPin);

  // If the button is pressed (HIGH signal)
  if (buttonState == HIGH) {
    
    // Send "S" in Morse code: 3 short blinks
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);   // Turn LED on
      delay(150);                   // Short blink: 150 ms
      digitalWrite(ledPin, LOW);    // Turn LED off
      delay(100);                   // Short gap between blinks
    }

    delay(100); // Gap between letters

    // Send "O" in Morse code: 3 long blinks
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);   // Turn LED on
      delay(400);                   // Long blink: 400 ms
      digitalWrite(ledPin, LOW);    // Turn LED off
      delay(100);                   // Gap between blinks
    }

    delay(100); // Gap between letters

    // Send "S" again: 3 short blinks
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);
      delay(150);
      digitalWrite(ledPin, LOW);
      delay(100);
    }

    delay(2000); // Delay before allowing another SOS
  }
}