const int waterLevelPin = A0;  // Analog pin for water level sensor
const int relayPin = 2;        // Digital pin for relay control

void setup() {
  pinMode(waterLevelPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int waterLevel = analogRead(waterLevelPin);

  // Adjust the threshold value based on your water level sensor
  int threshold = 500;

  if (waterLevel < threshold) {
    // Water level is below threshold, turn on the relay
    digitalWrite(relayPin, HIGH);
  } else {
    // Water level is above threshold, turn off the relay
    digitalWrite(relayPin, LOW);
  }

  delay(1000);  // Adjust the delay based on your requirements
}