# 16x2 LCD Display with Arduino

## Purpose
Display text messages on a 16x2 LCD screen using Arduino Uno.

## Components
- Arduino Uno
- 16x2 LCD Display
- 10k Potentiometer
- Jumper Wires

## Connections

### LCD to Arduino
- VSS → GND
- VDD → 5V
- VO → Potentiometer Middle Pin
- RS → D12
- RW → GND
- E → D11
- DB4 → D5
- DB5 → D4
- DB6 → D3
- DB7 → D2

### Potentiometer
- Left Pin → GND
- Middle Pin → LCD VO
- Right Pin → 5V

## Code
```cpp
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World!");
}

void loop() {
}
```

## Working
The Arduino sends text data to the LCD display. The potentiometer adjusts the display contrast, making the text visible on the screen.

## Output
Hello World!

## Result
The message "Hello World!" is displayed on the 16x2 LCD screen.
