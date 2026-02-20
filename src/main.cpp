#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author YOUR_NAME
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
