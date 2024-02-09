int pirPin = 3;    // PIR sensor output pin
int ledPin = 11;   // LED pin

void setup() {
  pinMode(pirPin, INPUT);   // Set PIR pin as input
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  Serial.begin(9600);       // Initialize serial communication for debugging
}

void loop() {
  int motionState = digitalRead(pirPin);  // Read PIR sensor state

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED when motion is detected
    Serial.println("Motion detected!");
    delay(1000);  // You can adjust the delay based on your preference
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED when no motion is detected
  }
}
