# Automatic Servo Control Using Ultrasonic Sensor

## Description
This project uses an HC-SR04 ultrasonic sensor to measure the distance of nearby objects and control a servo motor automatically. The measured distance is displayed on the Serial Monitor.

## Components Needed
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires
- USB Cable

## Working
- The ultrasonic sensor continuously measures the distance to an object.
- Arduino reads the distance and displays it on the Serial Monitor.
- If an object is detected within 20 cm, the servo rotates to 90°.
- If the object is farther than 20 cm, the servo returns to 0°.

## Output
- Distance < 20 cm → Servo rotates to 90°
- Distance ≥ 20 cm → Servo rotates to 0°
- Distance values displayed on Serial Monitor

## Applications
- Automatic doors
- Smart dustbins
- Obstacle detection systems
- Parking gate automation

## Note
- Ensure all GND connections are common.
- If the servo jitters, use an external 5V power supply for the servo motor.
```
