int ledPin = 13; // choose the pin for the LED
int inPin = 0; // choose the input pin (for a pushbutton)
int val = 0; // variable for reading the pin status
void setup()
{
  pinMode(ledPin, OUTPUT); // declare LED as output.
  pinMode(inPin, INPUT); // declare pushbutton as input.
}
void loop()
{
  val = digitalRead(inPin); // read input value
/* check if the input is HIGH (button released)*/
  if (val == HIGH){
    digitalWrite(ledPin, LOW); // turn LED OFF
  }
  else{
    digitalWrite(ledPin, HIGH); // turn LED ON
  }
}