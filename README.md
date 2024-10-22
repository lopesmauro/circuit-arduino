# Arduino LED and Buzzer Control Project

## Description
This project utilizes an Arduino to read values from a sensor and control multiple LEDs and a buzzer based on those readings. The LEDs light up in response to specific sensor value thresholds, providing a visual indication of the sensor's status.

## Features
- Reads analog values from a sensor.
- Controls five LEDs based on sensor value thresholds.
- Activates a buzzer when certain conditions are met.

## Components Required
- Arduino board (e.g., Arduino Uno)
- 5 LEDs
- 5 resistors (220 ohms recommended for LEDs)
- Buzzer
- Analog sensor
- Breadboard and jumper wires

## Circuit Diagram


## Code Overview
The code consists of the following key components:
- **Pin Definitions**: Defines the pins for LEDs, the sensor, and the buzzer.
- **Setup Function**: Initializes the pin modes and serial communication.
- **Loop Function**: Continuously reads the sensor value and calls the `lightLed` function to control the LEDs and buzzer.
- **lightLed Function**: Turns LEDs and the buzzer on or off based on the sensor value.

## Usage
1. Connect all components as per the circuit diagram.
2. Upload the provided code to your Arduino board.
3. Open the Serial Monitor to view the sensor values and observe the LEDs and buzzer responding to changes in the sensor readings.

## Contribution
Feel free to fork the repository and submit pull requests for improvements or additional features!

## License
This project is open source and available under the MIT License.
