/*
  Fire Alert System - Phase 1 (Updated with Temperature)
  Detects gas, smoke, and temperature elevation
  Author: Alysson Bruno Oliveira Santos
*/

#include "DHT.h"

// === Pin Definitions ===
#define GAS_SENSOR_PIN A0   // MQ-2 analog output
#define DHTPIN 2            // DHT11 data pin
#define DHTTYPE DHT11       // DHT11 or DHT22
#define BUZZER_PIN 8        // Buzzer or LED alert

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Thresholds
#define SMOKE_THRESHOLD 300
#define TEMP_THRESHOLD 50  // °C, adjustable

void setup() {
  Serial.begin(9600);
  pinMode(GAS_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  dht.begin();

  Serial.println("Fire Alert System Initialized");
}

void loop() {
  int gasValue = analogRead(GAS_SENSOR_PIN);
  float temperature = dht.readTemperature();

  Serial.print("Smoke/Gas sensor: ");
  Serial.println(gasValue);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (gasValue >= SMOKE_THRESHOLD || temperature >= TEMP_THRESHOLD) {
    triggerAlarm();
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(2000); // Reading every 2 seconds
}

void triggerAlarm() {
  Serial.println("ALERT! Fire-related hazard detected!");

  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000);
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);
}
