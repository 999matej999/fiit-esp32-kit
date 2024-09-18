/*
  BlinkRGB

  Demonstrates usage of onboard RGB LED on some ESP dev boards.

  Calling digitalWrite(RGB_BUILTIN, HIGH) will use hidden RGB driver.

  RGBLedWrite demonstrates control of each channel:
  void neopixelWrite(uint8_t pin, uint8_t red_val, uint8_t green_val, uint8_t blue_val)

  WARNING: After using digitalWrite to drive RGB LED it will be impossible to drive the same pin
    with normal HIGH/LOW level
*/

// the setup function runs once when you press reset or power the board

uint8_t rgbLedPin = 38;
uint8_t maxBrightness = 20; // 0 - 255

void setup() {
  // No need to initialize the RGB LED
}

// the loop function runs over and over again forever
void loop() {
  neopixelWrite(rgbLedPin, maxBrightness, 0, 0);  // Red
  delay(1000);
  neopixelWrite(rgbLedPin, 0, maxBrightness, 0);  // Green
  delay(1000);
  neopixelWrite(rgbLedPin, 0, 0, maxBrightness);  // Blue
  delay(1000);
  neopixelWrite(rgbLedPin, 0, maxBrightness, maxBrightness);  // Cyan
  delay(1000);
  neopixelWrite(rgbLedPin, maxBrightness, 0, maxBrightness);  // Magenta
  delay(1000);
  neopixelWrite(rgbLedPin, maxBrightness, maxBrightness, 0);  // Yellow
  delay(1000);
  neopixelWrite(rgbLedPin, 0, 0, 0);  // Off / black
  delay(1000);
}
