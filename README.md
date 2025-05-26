# Home_Automation_Project
A simple, **C-based home automation system simulator** that mimics how IoT sensors and devices work — all without requiring physical hardware. This project uses **file I/O and mock logic** to simulate sensor input (temperature and motion) and control home appliances like **fans** and **lights**.

Perfect for learning how embedded-style automation works using **Data Structures and Algorithms (DSA)** and **modular C programming**.

---

## 📌 Features

- Simulates a temperature sensor (via `temperature.txt`)
- Simulates a motion detector (via `motion.txt`)
- Automatically turns on/off:
  - Fan based on temperature
  - Light based on motion
- Modular codebase (separated into headers and source files)
- Simple CLI output

---

## 🔧 Tech Stack

| Component      | Tech Used            |
|----------------|----------------------|
| Language       | C                    |
| Build Tool     | `gcc`, `make`        |
| Simulation     | File I/O             |
| Architecture   | Modular (separated files for sensors, logic, utils) |
| Platform       | Linux / Windows (with GCC) |

---

## 📁 Project Structure<br>
Home_Automation_Project/<br>
│<br>
├── include/<br>
│ └── sensors.h # Sensor function declarations<br>
│<br>
├── src/<br>
│ ├── main.c # Entry point and orchestrator<br>
│ ├── sensors.c # Sensor simulation logic<br>
│ ├── controller.c # Appliance control logic (fan/light)<br>
│ └── utils.c # (Optional) utility functions<br>
│<br>
├── data/<br>
│ ├── temperature.txt # Simulated temperature data (e.g., 32)<br>
│ └── motion.txt # Simulated motion data (0 or 1)<br>
│<br>
├── Makefile # Build instructions<br>
└── README.md # You're reading it!<br>

---

## ⚙️ How to Compile

Ensure you have `gcc` and `make` installed.

```bash
make
```

## ▶️ How to Run
1. Prepare your simulated sensor inputs:
  . Edit data/temperature.txt (e.g., 28)
  . Edit data/motion.txt (e.g., 1 for motion, 0 for no motion)

2. Run the program:
```bash
./home_automation
```
