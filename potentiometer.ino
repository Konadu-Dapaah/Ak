
// Reading a Potentiometer on Arduino Uno R3

const int potPin = A0;  // Analog pin A0 for potentiometer

void setup() {
  Serial.begin(9600);   // Start Serial Monitor
}

void loop() {
  int potValue = analogRead(potPin);  // Read value from 0 to 1023

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);  // Print value to Serial Monitor

  delay(200);  // Delay for readability
}


  // put your main code here, to run repeatedly:

