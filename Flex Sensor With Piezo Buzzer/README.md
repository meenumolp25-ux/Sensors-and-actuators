# Flex Sensor Controlled Piezo Buzzer using Arduino

## Description
This project uses a flex sensor to detect bending.
The Arduino reads the flex sensor value and controls a piezo buzzer.
When the sensor bends, the buzzer produces sound.

## Components Required
- Arduino Uno
- Flex Sensor
- 10kΩ Resistor
- Piezo Buzzer
- Jumper Wires

## Circuit Connection

### Flex Sensor (Voltage Divider)

5V → Flex Sensor → A0 → 10kΩ Resistor → GND


### Piezo Buzzer

Buzzer Positive (+) → Arduino D8  
Buzzer Negative (-) → Arduino GND


## Working Principle

1. Flex sensor changes resistance when it bends.
2. Arduino reads the analog value from pin A0.
3. The value is compared with a threshold.
4. If the value is higher than the limit:
   - Piezo buzzer turns ON.
5. Otherwise:
   - Piezo buzzer turns OFF.

## Output

Flex Sensor Straight:
- Buzzer OFF

Flex Sensor Bent:
- Buzzer ON (Sound)

## Arduino File

flex_sensor_buzzer.ino

## Applications

- Gesture detection
- Wearable electronics
- Safety systems
- Simple automation projects
