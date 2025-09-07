
const int emfPin = A0;  

void setup() {
  Serial.begin(9600);   
}

void loop() {
  int emfValue = analogRead(emfPin);  

  if (emfValue > 20) {  
    Serial.print("Back EMF detected! Value: ");
    Serial.println(emfValue);
  }

  delay(100);  
}
