# Motion Detection Using PIR Sensor and Vibration Motor

## Description
This project uses a PIR motion sensor to detect human movement and activate a vibration motor as an alert.

## Components Needed
- Arduino Uno
- PIR Motion Sensor
- Vibration Motor
- NPN Transistor (2N2222/BC547)
- 1kΩ Resistor
- Jumper Wires
- USB Cable

## Working
- The PIR sensor detects motion in its range.
- Arduino reads the sensor output from pin D2.
- When motion is detected, the vibration motor turns ON.
- When no motion is detected, the motor turns OFF.
- Motion status is displayed on the Serial Monitor.

## Output
- Motion Detected → Vibration Motor ON
- No Motion Detected → Vibration Motor OFF

## Applications
- Security systems
- Silent alert devices
- Motion detection alarms
- Smart automation projects
