/*
    Project name : Rain drop sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-rain-drop-sensor
*/

const int rainSensorPin = A0; // Analog pin connected to the raindrop sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the raindrop sensor
  int sensorValue = analogRead(rainSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Raindrop Sensor Value: ");
  Serial.println(sensorValue);

  // Check if it's raining based on sensor value threshold
  if (sensorValue < 500) { // Adjust this threshold based on your sensor and conditions
    Serial.println("It's raining!");
  } else {
    Serial.println("No rain detected.");
  }

  delay(1000); // Add a small delay to avoid spamming the Serial Monitor
}
