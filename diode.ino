const int signalPin = 7; // Choose a digital pin on Arduino (e.g., pin 7)

void setup() {
  Serial.begin(9600);       // Standard baud rate for Arduino
  pinMode(signalPin, INPUT);
}

void loop() {
  int signalState = digitalRead(signalPin);

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe).");
  }

  delay(500);
}