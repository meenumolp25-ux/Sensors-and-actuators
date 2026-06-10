# Micro Servo Motor with Arduino

## Overview

This project demonstrates how to control a micro servo motor (such as an SG90) using an Arduino. The servo moves between 0°, 90°, and 180° positions repeatedly.

---

## Components Required

- Arduino Uno or Arduino Nano
- Micro Servo Motor (SG90 or similar)
- Jumper wires

---

## Connections

| Servo Pin | Arduino Pin |
|------------|------------|
| Ground (GND) | GND |
| Power (VCC) | 5V |
| Signal (SIG) | D9 |

### Wiring Diagram

```text
Servo GND    → Arduino GND
Servo Power  → Arduino 5V
Servo Signal → Arduino D9
```

---

## Arduino Code

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);
}

void loop() {
  myServo.write(0);
  delay(1000);

  myServo.write(90);
  delay(1000);

  myServo.write(180);
  delay(1000);
}
```

---

## How It Works

1. The Servo library is included.
2. The servo signal pin is connected to Arduino pin D9.
3. The servo moves to:
   - 0°
   - 90°
   - 180°
4. Each position is held for 1 second.
5. The cycle repeats continuously.

---

## Expected Output

The servo arm will:

- Move to 0°
- Move to 90°
- Move to 180°
- Repeat the movement continuously

---

## Notes

- A single SG90 servo can usually be powered directly from the Arduino 5V pin for testing.
- If the servo jitters or causes Arduino resets, use a separate 5V power supply and connect all grounds together.
- Ensure the signal wire is connected to the correct Arduino pin (D9).

---

## Applications

- Robotic arms
- Automated doors
- Pan-and-tilt mechanisms
- RC projects
- Motion control systems
