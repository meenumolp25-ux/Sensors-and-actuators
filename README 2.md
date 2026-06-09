# Potentiometer Sensor

## Purpose
A potentiometer is a variable resistor used to provide analog input to Arduino.

## Components Required
- Arduino Uno
- Potentiometer

## Connections
Left Pin -> 5V
Middle Pin -> A0
Right Pin -> GND

## Code Explanation
analogRead(A0) reads the voltage from the potentiometer and returns a value between 0 and 1023.

## Working
When the knob is rotated, the output voltage changes.
Arduino reads the value and displays it in the Serial Monitor.

## Output
Value = 0
Value = 512
Value = 1023
