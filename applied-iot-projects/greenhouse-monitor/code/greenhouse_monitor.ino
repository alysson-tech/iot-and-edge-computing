/*
  Greenhouse Monitoring System - Phase 1
  Monitor temperature, humidity, and light intensity
  Author: Alysson Bruno Oliveira Santos
*/

#include "DHT.h"

// === Pin Definitions ===
#define DHTPIN 2            // Pin where the DHT sensor is connected
#define DHTTYPE DHT11       // DHT11 or DHT22
#define LDR_PIN A0          // LDR analog input pin

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Thresholds (adjustable depending on plant needs)
#define TEMP_MIN 15    // Minimum temperature (°C)
#define TEMP_MAX 30    // Maximum temperature (°C)
#define HUMIDITY_MIN 40   // Minimum humidity (%)
#define HUMIDITY_MAX 80   // Maximum humidity (%)
#define LIGHT_MIN 200   // Minimum light level (analog value)

void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("Greenhouse Monitoring System Initialized");
}

void loop() {
  // Reading temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  // Reading light intensity
  int lightLevel = analogRead(LDR_PIN);

  // Checking if readings failed
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  // Display readings
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Light level: ");
  Serial.println(lightLevel);

  // Check environmental conditions
  if (temperature < TEMP_MIN || temperature > TEMP_MAX) {
    Serial.println("⚠️ Temperature out of ideal range!");
  }

  if (humidity < HUMIDITY_MIN || humidity > HUMIDITY_MAX) {
    Serial.println("⚠️ Humidity out of ideal range!");
  }

  if (lightLevel < LIGHT_MIN) {
    Serial.println("⚠️ Light level too low!");
  }

  delay(3000); // Read every 3 seconds
}
