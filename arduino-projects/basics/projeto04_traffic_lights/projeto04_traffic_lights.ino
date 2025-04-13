// Project 04: Traffic Light Simulation

int ledVerde = 8;     // Green light (pin 8)
int ledAmarelo = 9;   // Yellow light (pin 9)
int ledVermelho = 10; // Red light (pin 10)

void setup() {
  // Define each LED pin as an output
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // Green light ON (cars go)
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(4000); // Wait 4 seconds

  // Yellow light ON (warning)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(2000); // Wait 2 seconds

  // Red light ON (cars stop)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(4000); // Wait 4 seconds
}