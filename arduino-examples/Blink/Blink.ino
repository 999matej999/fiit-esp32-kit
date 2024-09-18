uint8_t redPin = 7;
uint8_t greenPin = 6;
uint8_t yellowPin = 5;
uint8_t bluePin = 4;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize all LED pins as an output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // turn on all LEDs
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(bluePin, HIGH);

  delay(1000);                       // wait for a second

  // turn off all LEDs
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(bluePin, LOW);

  delay(1000);                       // wait for a second
}
