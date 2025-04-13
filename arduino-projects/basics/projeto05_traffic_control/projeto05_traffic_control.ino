// Project 05: Traffic Light with Pedestrian Button

// Pin definitions for car traffic light LEDs
const int ledVerdeCarro = 10;     // Green light for cars
const int ledAmareloCarro = 11;   // Yellow light for cars
const int ledVermelhoCarro = 12;  // Red light for cars

// Pin definitions for pedestrian LEDs
const int ledVerdePedestre = 8;   // Green light for pedestrians
const int ledVermelhoPedestre = 9; // Red light for pedestrians

// Pedestrian button pin
const int BOTAO = 2; // Button to request pedestrian crossing

// Variables to track button state
int estadoBotao = 0;
int ultimoEstadoBotao = LOW;

// Timings (in milliseconds)
const long tempoVerdeCarro = 10000;     // Green light duration for cars (10s)
const long tempoAmareloCarro = 3000;    // Yellow light duration (3s)
const long tempoVerdePedestre = 8000;   // Pedestrian crossing time (8s)

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(ledVermelhoCarro, OUTPUT);
  pinMode(ledAmareloCarro, OUTPUT);
  pinMode(ledVerdeCarro, OUTPUT);
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(ledVerdePedestre, OUTPUT);

  // Set button pin as INPUT
  pinMode(BOTAO, INPUT);

  // Initial state: cars can go, pedestrians must wait
  digitalWrite(ledVerdeCarro, HIGH);
  digitalWrite(ledAmareloCarro, LOW);
  digitalWrite(ledVermelhoCarro, LOW);

  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoPedestre, HIGH);
}

void loop() {
  // Read the current state of the button
  estadoBotao = digitalRead(BOTAO);

  // If the button has just been pressed
  if (estadoBotao == HIGH && ultimoEstadoBotao == LOW) {
    delay(50); // Debounce delay
    iniciarTravessiaPedestre();
  }

  // Store current button state
  ultimoEstadoBotao = estadoBotao;
}

void iniciarTravessiaPedestre() {
  // Switch car light to yellow
  digitalWrite(ledVerdeCarro, LOW);
  digitalWrite(ledAmareloCarro, HIGH);
  delay(tempoAmareloCarro);

  // Stop cars with red light
  digitalWrite(ledAmareloCarro, LOW);
  digitalWrite(ledVermelhoCarro, HIGH);

  // Allow pedestrians to cross
  digitalWrite(ledVermelhoPedestre, LOW);
  digitalWrite(ledVerdePedestre, HIGH);
  delay(tempoVerdePedestre);

  // End pedestrian crossing, turn red for them
  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoPedestre, HIGH);

  // Return car light to green
  digitalWrite(ledVermelhoCarro, LOW);
  digitalWrite(ledVerdeCarro, HIGH);
}