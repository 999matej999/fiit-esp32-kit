uint8_t buttonPins[] = {1, 2, 47, 48};
uint8_t ledPins[] = {7, 6, 5, 4};
bool buttonState;

// the setup function runs once when you press reset or power the board
void setup() {
  for(int i = 0; i < 4; ++i)
  {
    // initialize all button pins as an output, enable PULL-UP resistor
    pinMode(buttonPins[i], INPUT_PULLUP);

    // initialize all LED pins as an output
    pinMode(ledPins[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i < 4; ++i)
  {
    // read button state
    buttonState = digitalRead(buttonPins[i]);

    // negate buttonState because of negative logic (pressed = 0, not pressed = 1)
    buttonState = !buttonState;

    // write buttonState to LED
    digitalWrite(ledPins[i], buttonState);
  }
}
