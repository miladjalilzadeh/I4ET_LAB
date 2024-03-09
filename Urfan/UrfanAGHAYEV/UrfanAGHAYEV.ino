const int ledPin = 2; // Replace with your LED pin number
char incomingChar;

void setup() {
  Serial.begin(115200); // Set baud rate for serial communication
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  if (Serial.available() > 0) {
    incomingChar = Serial.read();
    if (incomingChar == 'U') {
      digitalWrite(ledPin, LOW); // Turn LED on
      Serial.println("LED turned ON");
    } else if (incomingChar == 'N') {
      digitalWrite(ledPin, HIGH); // Turn LED off
      Serial.println("LED turned OFF");
}
}
}