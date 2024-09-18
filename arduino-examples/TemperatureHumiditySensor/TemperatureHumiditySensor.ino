#include <Adafruit_AHTX0.h>

// define SDA and SCL pins on FIIT ESP32 Kit
#define SDA_PIN 15
#define SCL_PIN 16

// create instance of sensor
Adafruit_AHTX0 sensor;

void setup() {
  Wire.setPins(SDA_PIN, SCL_PIN);

  Serial.begin(115200); // initialize UART
  Serial.println("Adafruit AHT10/AHT20 demo!");

  // check existence of sensor
  if (! sensor.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");
}

void loop() {
  sensors_event_t humidity, temp; // data structure for storing temp&hum values
  sensor.getEvent(&humidity, &temp); // read sensor data

  // print sensor data
  Serial.print("Temperature: "); Serial.print(temp.temperature); Serial.println(" degrees C");
  Serial.print("Humidity: "); Serial.print(humidity.relative_humidity); Serial.println("% rH");

  // wait for 500 ms
  delay(500);
}