# Vibration Motor with Arduino

## Overview

This project demonstrates how to control a small vibration motor using an Arduino. The motor vibrates for 1 second and then stops for 1 second repeatedly.

---

## Components Required

- Arduino Uno or Arduino Nano
- Small vibration motor (coin-type or mini vibration motor)
- Jumper wires

---

## Connections

### Vibration Motor to Arduino

| Vibration Motor | Arduino |
|----------------|----------|
| Positive (+)   | D9       |
| Negative (-)   | GND      |

### Wiring Diagram

D9 ----> (+) Vibration Motor (-) ----> GND

---

## Arduino Code

```cpp
#define MOTOR_PIN 9

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR_PIN, HIGH); // Vibrate
  delay(1000);

  digitalWrite(MOTOR_PIN, LOW);  // Stop
  delay(1000);
}
