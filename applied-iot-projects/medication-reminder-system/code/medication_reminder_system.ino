/*
  Medication Reminder System - MVP Phase 1 (Improved)
  Continuous alert until manual confirmation.
  Author: Alysson Bruno Oliveira Santos
*/

#include <Wire.h>
#include "RTClib.h"

// === Pin Definitions ===
#define BUZZER_PIN 8         // Buzzer or LED pin
#define BUTTON_PIN 7         // Button for acknowledgment (must be pressed to stop alarm)

// === RTC Setup ===
RTC_DS3231 rtc;

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // Button with internal pull-up

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting time...");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void loop() {
  DateTime now = rtc.now();

  // Scheduled alarm times
  if ((now.hour() == 8 && now.minute() == 0) ||
      (now.hour() == 12 && now.minute() == 0) ||
      (now.hour() == 20 && now.minute() == 0)) {
    triggerReminder();
  }

  delay(60000); // Check every minute
}

void triggerReminder() {
  Serial.println("Medication time! Please confirm.");

  while (digitalRead(BUTTON_PIN) == HIGH) {
    // While button not pressed, keep alerting
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);
  }

  Serial.println("Medication confirmed!");
}
