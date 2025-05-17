# 🚶‍♂️ Person Counter with Arduino and IR Sensors

An Arduino-based room entry/exit monitoring system that counts the number of people entering and exiting using two IR sensors. The current count is displayed on a 16x2 LCD display and sent to the Serial Monitor.

---

## 📦 Features

- 🔢 Real-time person counting
- 📲 Displays total number of people inside on an LCD
- 🛠️ Serial monitor updates for debugging
- 🎯 Accurate entry and exit tracking using two IR sensors
- 📏 Compact and simple setup

---

## 🛠️ Components Used

| Component         | Quantity |
|------------------|----------|
| Arduino UNO/Nano | 1        |
| IR Sensors       | 2        |
| LCD (16x2)       | 1        |
| Potentiometer    | 1        |
| Jumper Wires     | As needed |
| Breadboard       | 1        |

---

## 🔌 Wiring Diagram

| Component | Arduino Pin |
|----------|-------------|
| IR Sensor 1 | 7         |
| IR Sensor 2 | 8         |
| LCD RS      | 12        |
| LCD EN      | 11        |
| LCD D4      | 5         |
| LCD D5      | 4         |
| LCD D6      | 3         |
| LCD D7      | 2         |

> Power the IR sensors with 5V and GND from the Arduino.

---

## 🚀 How It Works

- Two IR sensors are placed at the entrance of a room.
- When **IR1 is triggered first**, and then **IR2**, it indicates a person is entering.
- When **IR2 is triggered first**, followed by **IR1**, it indicates a person is exiting.
- The count increases or decreases accordingly and is shown on the LCD display.
- Also logs count on the Serial Monitor.

---

