# Potentiometer Controlled Buzzer Using Arduino

## Overview
This project demonstrates how to control the sound frequency of a buzzer using a potentiometer and an Arduino Uno. The potentiometer acts as an analog input device, and the buzzer acts as the output actuator. As the potentiometer knob is rotated, the pitch of the buzzer changes accordingly.

## Objective
- Read analog values from a potentiometer.
- Convert the analog values into sound frequencies.
- Generate different tones using a buzzer based on the potentiometer position.

## Components Required
- Arduino Uno
- 10kΩ Potentiometer
- Passive Buzzer (recommended)
- Jumper Wires
- USB Cable for programming and power

## Circuit Connections

### Potentiometer

| Potentiometer Pin | Arduino Connection |
|-------------------|-------------------|
| Left Pin | 5V |
| Middle Pin (Wiper) | A0 |
| Right Pin | GND |

### Buzzer

| Buzzer Pin | Arduino Connection |
|------------|-------------------|
| Positive (+) | D9 |
| Negative (-) | GND |

## Working Principle

1. The potentiometer provides a variable voltage between 0V and 5V depending on the knob position.
2. Arduino reads this voltage through analog pin A0.
3. The analog value ranges from 0 to 1023.
4. The `map()` function converts this range into a frequency range of 100 Hz to 2000 Hz.
5. The `tone()` function generates a sound at the calculated frequency through the buzzer.
6. As the potentiometer is rotated, the buzzer pitch changes smoothly.

## Arduino Code

```cpp
const int potPin = A0;
const int buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  // Convert potentiometer value to frequency
  int frequency = map(potValue, 0, 1023, 100, 2000);

  // Generate tone
  tone(buzzerPin, frequency);

  delay(10);
}
```

## Expected Output

- Potentiometer at minimum position → Low-pitched sound.
- Potentiometer at middle position → Medium-pitched sound.
- Potentiometer at maximum position → High-pitched sound.
- Smooth frequency variation while rotating the potentiometer.

## Applications

- Electronic musical instruments
- Tone generators
- Adjustable alarm systems
- Audio frequency testing
- Arduino learning projects

## Notes

- Use a passive buzzer for variable frequency output.
- Active buzzers generally produce only a fixed sound.
- Ensure all GND connections are connected together.

## Author

Arduino Project: Potentiometer (Sensor/Input) + Buzzer (Actuator/Output)
```
