int ledPin1 = 13;
int ledPin2 =12;
void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin1, HIGH);
  delay(1000);                       
  digitalWrite(ledPin1, LOW);
  delay(1000);  
  digitalWrite(ledPin2, HIGH); 
  delay(1000); 
  digitalWrite(ledPin2, LOW);
  delay(1000);               
}
