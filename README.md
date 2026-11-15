# Arduino Traffic Light Controller

A two-road traffic light controller built using an **Arduino Uno** and six LEDs. The project demonstrates how an Arduino can control traffic signals in a timed sequence using digital output pins.

## Project Preview

![Arduino Traffic Light Project](TrafficLights.png)

## Features

- Controls traffic signals for two roads.
- Uses red, yellow, and green LEDs for each road.
- Starts with all LEDs blinking three times as a startup indication.
- Begins normal operation with Road 1 green and Road 2 red.
- Uses timed yellow signals when changing the right of way.
- Ensures both roads are not given a green signal at the same time.

## Components Required

- Arduino Uno
- 6 LEDs:
  - 2 red
  - 2 yellow
  - 2 green
- 6 current-limiting resistors (typically 220 Ω to 330 Ω)
- Breadboard
- Jumper wires
- USB cable for programming and power

## Pin Connections

| Road | Signal | Arduino pin |
|---|---|---:|
| Road 1 | Red | 2 |
| Road 1 | Yellow | 3 |
| Road 1 | Green | 4 |
| Road 2 | Red | 5 |
| Road 2 | Yellow | 6 |
| Road 2 | Green | 7 |

Connect each LED in series with a current-limiting resistor. Connect the LED cathodes to GND and the anodes through their resistors to the assigned Arduino pins. Check LED polarity before powering the circuit.

## Working Sequence

1. **Startup:** All six LEDs blink three times.
2. **Road 1 green:** Road 1 gets the green signal while Road 2 remains red.
3. **Transition:** Both yellow LEDs turn on for 2 seconds.
4. **Road 2 green:** Road 2 gets the green signal while Road 1 remains red for 5 seconds.
5. **Transition:** Both yellow LEDs turn on for 2 seconds.
6. **Repeat:** The sequence returns to Road 1 green and continues.

The controller repeats this sequence continuously after startup.

## Arduino Code

The Arduino sketch is the program uploaded to the Arduino Uno. Open the `.ino` file in the Arduino IDE, select **Arduino Uno** under Tools → Board, choose the correct port under Tools → Port, and click **Upload**.

> Add your Arduino sketch (`.ino` file) to this repository so that others can download and run the project.

## How to Build and Run

1. Assemble the LEDs on the breadboard according to the pin connection table.
2. Double-check LED polarity and resistor connections.
3. Connect the Arduino Uno to your computer using a USB cable.
4. Open the project sketch in Arduino IDE.
5. Select **Arduino Uno** and the correct COM/serial port.
6. Upload the sketch.
7. Power the board and observe the traffic-light sequence.

## Learning Outcomes

- Understanding Arduino digital output pins.
- Using `pinMode()`, `digitalWrite()`, and `delay()`.
- Controlling multiple LEDs in a timed sequence.
- Building and testing a simple embedded-system prototype.

## Future Improvements

- Add pedestrian crossing signals.
- Add push-button control for pedestrians.
- Use a timer-based approach with `millis()` instead of blocking delays.
- Add a buzzer for pedestrian alerts.

## Author

**Abhiram Dashewar**

- GitHub: [@Abhiram-Dashewar](https://github.com/Abhiram-Dashewar)

---

This is an educational prototype for learning Arduino and basic traffic-signal control. It is not intended for controlling real-world road traffic.
