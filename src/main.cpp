#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Rohit Chauhan
 * @date 2026-02-DD
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

#define FSR_PIN A0
int fsrValue = 0;

void setup() {

    Serial.begin(9600);
    Serial.println("FSR Force Measurement System");
    Serial.println("System Initialized...\n");
}

void loop() {
    fsrValue = analogRead(FSR_PIN);
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    if (fsrValue > 100)   // threshold value (can adjust)
    {
        Serial.println("Pressure Detected!");
    }
    else
    {
        Serial.println("No Significant Pressure.");
    }
    delay(1000);
}
