uint8_t lightSensorPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint16_t value = analogRead(lightSensorPin);

  Serial.printf("light sensor value: %d\n", value);

  delay(500);

}
