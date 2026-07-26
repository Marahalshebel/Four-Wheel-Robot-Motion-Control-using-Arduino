# Four-Wheel Robot Motion Control using Arduino
This project demonstrates the control of a four-wheel mobile robot using an Arduino Uno and two L293D motor driver ICs. Four DC motors are controlled to perform basic robot movements, including forward, backward, and alternating right and left turns.

The robot moves according to a predefined sequence:
- Move forward for 30 seconds
- Move backward for 60 seconds
- Alternate between right and left turns for 1 minute

---

## Components
- Arduino Uno
- 2 × L293D Motor Driver IC
- 4 × DC Motors
- Breadboard
- External Power Supply
- Jumper Wires

---


## Tinkercad Simulation
Simulation Link:
https://www.tinkercad.com/things/8xgI2Ri6C95-sizzling-habbi-allis?sharecode=deGURSFuz33vAZbe4XhHBZdt9_PKsPPjPV9CxrBdnmE

---

## Circuit
![Circuit](ScreenshotArduino.png)

---

## Features
- Independent control of four DC motors.
- Forward movement.
- Backward movement.
- Alternating right and left turns.
- Continuous movement sequence.

---

## Circuit Connections
### First L293D
| Component | Arduino Pin |
|-----------|-------------|
| Enable A | D5 |
| Input 1 | D2 |
| Input 2 | D3 |
| Enable B | D6 |
| Input 3 | D4 |
| Input 4 | D7 |

### Second L293D
| Component | Arduino Pin |
|-----------|-------------|
| Enable A | A0 |
| Input 1 | A1 |
| Input 2 | A2 |
| Enable B | A3 |
| Input 3 | A4 |
| Input 4 | A5 |

---

## How It Works
1. The robot moves forward for 30 seconds.
2. The robot stops briefly.
3. The robot moves backward for 60 seconds.
4. The robot stops briefly.
5. The robot alternates between right and left turns for 1 minute.
6. The sequence repeats continuously.

---

## Project Files
| File | Description |
|------|-------------|
| [`Four_Wheel_Robot.ino`](./Four_Wheel_Robot.ino) | Arduino source code |
| [`README.md`](./README.md) | Project documentation |
| [`Circuit3.jpg`](./Circuit3.jpg) | Circuit wiring image  

---

## Output

- Robot moves forward for 30 seconds.
- Robot moves backward for 60 seconds.
- Robot alternates between right and left turns for 1 minute.
- The movement sequence repeats continuously.

---
