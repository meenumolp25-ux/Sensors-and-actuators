# LDR (Photoresistor) Sensor

## Purpose
Measures light intensity.

## Components Required
- Arduino Uno
- Photoresistor (LDR)
- 10kΩ Resistor

## Connections
Photoresistor Leg 1 -> 5V
Photoresistor Leg 2 -> A0
10kΩ Resistor -> GND

## Working
The resistance of the photoresistor changes according to the amount of light falling on it.
Arduino reads the voltage and displays a value between 0 and 1023.

## Output
Light values are displayed in the Serial Monitor.
