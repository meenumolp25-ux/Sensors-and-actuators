# Automatic Light Control System

## Description
This Arduino project uses a Photoresistor (LDR) to detect light intensity and automatically control an LED. When the surrounding light level decreases below a set threshold, the LED turns ON. When the light level increases, the LED turns OFF.

## Components Required
- Arduino Uno
- Photoresistor (LDR)
- LED
- 10kΩ Resistor
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Connections

### Photoresistor (LDR)
- One terminal → 5V
- Other terminal → A0
- 10kΩ resistor between A0 and GND

### LED
- Anode (+) → Digital Pin 9 through 220Ω resistor
- Cathode (-) → GND

## Working Principle
1. The photoresistor changes its resistance based on the amount of light falling on it.
2. Arduino reads the analog value from pin A0.
3. If the light value falls below the threshold, the LED turns ON.
4. If the light value rises above the threshold, the LED turns OFF.

## Applications
- Automatic street lighting
- Smart home lighting systems
- Energy-saving lighting control
- Light-sensitive indicators

## Files
- `code.ino` – Arduino source code
- `README.md` – Project documentation

## Author

## Platform
Arduino Uno / Tinkercad Simulation
