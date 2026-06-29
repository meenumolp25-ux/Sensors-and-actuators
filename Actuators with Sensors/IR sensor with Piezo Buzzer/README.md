# IR Sensor Reading Using Arduino

## Description
This project reads data from an IR sensor and displays the output on the Serial Monitor. It helps to detect whether an object is present or not in front of the sensor.

## Components Needed
- Arduino Uno
- IR Sensor Module (Power, GND, OUT)
- Jumper Wires
- USB Cable

## Connections

### IR Sensor
- Power → 5V  
- GND → GND  
- OUT → D2  

## Working
- The IR sensor continuously detects objects.
- Arduino reads the digital signal from pin D2.
- The value is printed on the Serial Monitor.
- `LOW` or `HIGH` indicates object detection status (depends on sensor adjustment).

## Output
- 0 or LOW → Object Detected  
- 1 or HIGH → No Object Detected  

## Applications
- Obstacle detection systems
- Line following robots
- Object counter systems
- Security monitoring systems
