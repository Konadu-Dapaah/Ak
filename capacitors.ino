
const int capPin = A0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int capValue = analogRead(capPin); 

  
  float voltage = (capValue / 1023.0) * 5.0; 

  Serial.print("Capacitor Voltage Reading: ");
  Serial.print(voltage, 2); 
  Serial.println(" V");

  delay(200); 
}
