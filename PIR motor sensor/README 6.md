# PIR Motion Sensor + Motor Control

## About
This project uses a PIR sensor to detect motion and control a motor using Arduino.

## Components
- Arduino Uno  
- PIR Sensor (HC-SR501)  
- DC Motor  
- Transistor / Motor Driver  
- External power supply  

## Connections
- PIR OUT → D2  
- Motor control → D9 (via driver)  
- VCC → 5V  
- GND → GND  

## Working
When motion is detected by the PIR sensor, Arduino turns ON the motor. When no motion is detected, motor turns OFF.

## Output
- Motion detected → Motor ON  
- No motion → Motor OFF  

## Applications
- Security systems  
- Automatic doors  
- Smart motion-based machines  

