#include <Wire.h>
#include "MAX30100_PulseOximeter.h"

#define REPORTING_PERIOD_MS     1000

PulseOximeter pox;
uint32_t tsLastReport = 0;

void onBeatDetected() {
  Serial.println("❤️ Beat detected!");
}

void setup() {
  Serial.begin(115200);
  Serial.println("Initializing pulse oximeter...");

  if (!pox.begin()) {
    Serial.println("FAILED to initialize pulse oximeter");
    while (1);
  } else {
    Serial.println("Pulse oximeter initialized");
  }

  pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
  pox.setOnBeatDetectedCallback(onBeatDetected);
}

void loop() {
  pox.update();

  if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
    tsLastReport = millis();
    Serial.print("Heart rate: ");
    Serial.print(pox.getHeartRate());
    Serial.println(" bpm");
  }
}
