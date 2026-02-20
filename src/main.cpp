#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Krish_choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

// TODO 1:
// Define FSR analog pin (Use A0)
const int FSR_PIN = A0;

// TODO 2:
// Create variable to store sensor reading
int fsrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("FSR Force Measurement System Initialized");
    Serial.println("Monitoring force input...");
}
void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

// TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)
    if (fsrValue > 100) {   // Threshold can be adjusted
        // TODO 8:
        // Print pressure detection message
        Serial.println("Pressure Detected!");
    } else {
        Serial.println("No Significant Pressure.");
    }
// TODO 9:
    // Add delay (1 second)
    delay(1000);
}


