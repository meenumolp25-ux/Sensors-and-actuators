# Push Button Controlled LED using Arduino

## Description
This project uses a push button as an input device and an LED as an actuator.
When the button is pressed, the Arduino turns ON the LED.
When the button is released, the LED turns OFF.

## Components Required
- Arduino Uno
- 4 Pin Push Button
- LED
- 220 ohm resistor
- Jumper wires

## Connections

### Push Button
1A → Arduino D2  
1B → Arduino GND  

### LED
LED Positive (+) → Arduino D8 through 220Ω resistor  
LED Negative (-) → Arduino GND  

## Working
- Arduino reads the push button state.
- Button pressed:
  - LED turns ON
- Button released:
  - LED turns OFF

## Logic

Start
 |
Read Button
 |
Is Button Pressed?
 |
YES → LED ON
NO  → LED OFF

## Output
Button Pressed  → LED ON  
Button Released → LED OFF

## File
pushbutton_led.ino

## Application
- Simple switch control
- Automation projects
- Beginner Arduino projects
