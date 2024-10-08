# FIIT ESP32 Kit
Board contains these components:
* 4x Buttons (needs internal pull-up resistor)
* 4x LED (red, yellow, green, blue)
* Programmable RGB LED
* Temperature & Humidity I<sup>2</sup>C Sensor AHT20
* Analog Light Sensor SFH320
* 2x QWIIC I<sup>2</sup>C connectors

For uploading code use USB UART by default.

## Pinout
![pinout](./fiit-esp32-kit-pcb/esp32_fiit_kit_pinout.png)

GPIOX represents the pin marking, where X is the pin number that needs to be used in the Arduino IDE.

Please consider proper electrical connection to prevent electrical shortcuts.

## Arduino IDE
First of all ensure you have Arduino IDE and [ESP32 boards](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/) properly installed.
Select board: ESP32S3 Dev Module
For basic examples use default configuration.
