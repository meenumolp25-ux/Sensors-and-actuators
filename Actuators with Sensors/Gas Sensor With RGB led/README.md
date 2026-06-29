# Gas Sensor Air Quality Indicator

## Description
This project uses an MQ-2 gas sensor to detect gas concentration in the surrounding environment and an RGB LED to visually indicate air quality levels.

## Components Required
- Arduino Uno
- MQ-2 Gas Sensor
- RGB LED (Common Cathode)
- 3 × 220Ω Resistors
- Breadboard
- Jumper Wires

## Circuit Connections

### MQ-2 Gas Sensor
- VCC → 5V
- GND → GND
- A0 → Arduino A0

### RGB LED
- Red Pin → D9 through 220Ω resistor
- Green Pin → D10 through 220Ω resistor
- Blue Pin → D11 through 220Ω resistor
- Common Pin → GND

## Working Principle
1. The MQ-2 sensor continuously monitors gas concentration.
2. Arduino reads the sensor value from analog pin A0.
3. Based on the gas level:
   - Green LED indicates safe conditions.
   - Blue LED indicates moderate gas concentration.
   - Red LED indicates high gas concentration.
4. The RGB LED provides a visual indication of air quality.

## Applications
- Air quality monitoring
- Gas leakage detection
- Industrial safety systems
- Smart home monitoring

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
	

