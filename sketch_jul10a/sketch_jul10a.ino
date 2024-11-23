
const int buttonPin = 2;  // the number of the pushbutton pin
const int ledPin = 13;    // the number of the LED pin
const int Mone = 9;
const int Mtwo = 8;

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(Mone, OUTPUT);
  pinMode(Mtwo, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  digitalWrite(Mone, HIGH);
  delay(300);
  digitalWrite(Mone, LOW);
  digitalWrite(Mtwo, HIGH);
    delay(300);
  digitalWrite(Mone, LOW);
  digitalWrite(Mtwo, LOW);
     delay(4000);



  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    Serial.println("click");
    // turn LED on:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
  }
}
