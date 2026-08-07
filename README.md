# 🤖 Line-Following-Robot-using-Arduino_Nano

> An autonomous **Arduino Nano-based Line Following Robot** capable of detecting and following a predefined path using infrared sensors. The robot continuously reads the line position and controls the motors accordingly, making it an excellent beginner-to-intermediate robotics project for learning embedded systems, control logic, and autonomous navigation.

---

## 📖 Overview

The **Line Following Robot using Arduino Nano** is an autonomous mobile robot designed to detect and follow a black line on a white surface (or vice versa) using infrared (IR) sensors. The Arduino Nano processes sensor inputs in real time and controls two DC motors through a motor driver to keep the robot centered on the track.

This project demonstrates the fundamentals of:

- Autonomous robotics
- Embedded systems
- Sensor interfacing
- Motor control
- Navigation algorithms
- Real-time decision making

The robot is suitable for robotics competitions, educational demonstrations, engineering projects, and embedded systems learning.

---

# 🎯 Objectives

- Build an autonomous robot capable of following a predefined path.
- Learn how IR sensors detect contrasting surfaces.
- Interface multiple hardware components using Arduino Nano.
- Control DC motors using PWM.
- Understand robot navigation algorithms.
- Improve programming skills using Arduino IDE.
- Develop a platform for future robotics projects.

---

# 🚀 Features

- ✔ Autonomous Line Following
- ✔ Arduino Nano Based
- ✔ Dual IR Sensor Navigation
- ✔ Fast Response
- ✔ Differential Drive Control
- ✔ Compact Design
- ✔ Low Cost
- ✔ Easy to Build
- ✔ Beginner Friendly
- ✔ Expandable Architecture

---

# ⚙ Working Principle

The robot continuously scans the ground using infrared sensors.

### Scenario 1 – Both Sensors on White

Robot moves forward.

---

### Scenario 2 – Left Sensor Detects Black Line

Robot turns left until both sensors return to the center.

---

### Scenario 3 – Right Sensor Detects Black Line

Robot turns right.

---

### Scenario 4 – Both Sensors Detect Black

Robot may stop, continue straight, or execute programmed behavior depending on the implemented algorithm.

---

# 🧠 System Architecture

```
IR Sensors
     │
     ▼
Arduino Nano
     │
     ▼
Motor Driver
     │
     ▼
Left Motor     Right Motor
```

---

# 🛠 Hardware Components

| Component | Quantity |
|------------|----------|
| Arduino Nano | 1 |
| IR Sensor Module | 2 or 5 |
| L298N / L293D Motor Driver | 1 |
| BO Motors / DC Gear Motors | 2 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Caster Wheel | 1 |
| Battery Pack (7.4V–12V) | 1 |
| Switch | 1 |
| Jumper Wires | As Required |
| Nuts & Bolts | As Required |

---

# 💻 Software Requirements

- Arduino IDE
- Arduino Nano Board Package
- USB Mini Cable
- C/C++

---

# 📂 Project Structure

```
Line-Following-Robot-using-Arduino_Nano/
│
├── Code/
│   └── LineFollower.ino
│
├── Circuit/
│   └── CircuitDiagram.png
│
├── Images/
│   ├── Robot.jpg
│   ├── Working.jpg
│   └── Chassis.jpg
│
├── Videos/
│   └── Demo.mp4
│
├── README.md
└── LICENSE
```

---

# 🔌 Pin Connections

## IR Sensors

| IR Sensor | Arduino Nano |
|------------|--------------|
| Left Sensor | D2 |
| Right Sensor | D3 |
| VCC | 5V |
| GND | GND |

---

## Motor Driver

| Driver Pin | Arduino Nano |
|------------|--------------|
| IN1 | D8 |
| IN2 | D9 |
| IN3 | D10 |
| IN4 | D11 |
| ENA | D5 (PWM) |
| ENB | D6 (PWM) |

---

## Motors

- Left Motor → OUT1 & OUT2
- Right Motor → OUT3 & OUT4

---

## Power Supply

- Battery → Motor Driver VIN
- 5V → Arduino Nano
- Common Ground

---

# 🔄 Robot Algorithm

```
Start

↓

Read Left Sensor

↓

Read Right Sensor

↓

Both White?

↓

Move Forward

↓

Left Black?

↓

Turn Left

↓

Right Black?

↓

Turn Right

↓

Both Black?

↓

Stop / Continue

↓

Repeat
```

---

# 📸 How the Robot Works

1. Power ON.
2. Arduino initializes sensors.
3. Sensors continuously scan the surface.
4. Arduino compares sensor values.
5. Motor driver receives commands.
6. Motors adjust speed and direction.
7. Robot remains centered on the line.

---

# 🧩 Applications

- Robotics Competitions
- Industrial AGVs
- Warehouse Automation
- Educational Robotics
- Autonomous Navigation
- Conveyor Tracking
- Smart Manufacturing
- Embedded Systems Learning

---

# 📈 Advantages

- Low Cost
- Easy Programming
- Compact Design
- Fast Response
- Reliable Navigation
- Expandable
- Beginner Friendly
- Low Power Consumption

---

# ⚠ Limitations

- Sensitive to ambient lighting.
- Performance depends on sensor calibration.
- Sharp turns require proper tuning.
- Cannot detect obstacles without additional sensors.
- Battery voltage affects motor speed.

---

# 🔮 Future Improvements

- PID Line Following
- 5/8 IR Sensor Array
- Obstacle Avoidance
- Bluetooth Control
- Wi-Fi Monitoring
- OLED Display
- Speed Control
- Automatic Calibration
- Maze Solving
- AI Vision using ESP32-CAM

---

# 📊 Technical Specifications

| Parameter | Value |
|------------|-------|
| Controller | Arduino Nano |
| Programming Language | C/C++ |
| IDE | Arduino IDE |
| Motor Driver | L298N / L293D |
| Sensors | IR Line Sensors |
| Operating Voltage | 7.4V–12V |
| Logic Voltage | 5V |
| Drive System | Differential Drive |
| Mobility | Two Wheel Drive |

---

# 🏁 Getting Started

### 1. Clone Repository

```bash
git clone https://github.com/yourusername/Line-Following-Robot-using-Arduino_Nano.git
```

### 2. Open Arduino IDE

Open:

```
LineFollower.ino
```

### 3. Select Board

```
Arduino Nano
```

### 4. Select Processor

```
ATmega328P
```

### 5. Select COM Port

Choose the correct serial port.

### 6. Upload Code

Click **Upload**.

### 7. Power the Robot

Place it on the track.

Enjoy autonomous navigation!

---

# 🧪 Testing

Test the robot on:

- Straight Path
- Curved Path
- Zig-Zag Track
- Circular Track
- Sharp Turns
- Competition Track

---

# 📚 Learning Outcomes

By completing this project you will understand:

- Arduino Nano Programming
- IR Sensor Interfacing
- PWM Motor Control
- Autonomous Navigation
- Embedded Programming
- Robotics Fundamentals
- Control Systems
- Robot Kinematics

---

# 📸 Project Gallery

```
Images/
│
├── Robot Front View
├── Robot Top View
├── Circuit Diagram
├── Chassis Assembly
├── Sensor Placement
└── Working Demo
```

---

# 🎥 Demo

Add your project demonstration here:

```
https://youtu.be/YourVideoLink
```

---

# 🤝 Contributing

Contributions are welcome!

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push the branch.
5. Open a Pull Request.

---

# 📜 License

This project is licensed under the **MIT License**.

---

# 👨‍💻 Author

**Koushik M**

**BE Mechatronics Engineering**  
The Oxford College of Engineering, Bangalore

**Areas of Interest**

- Robotics
- Embedded Systems
- IoT
- Automation
- Artificial Intelligence
- Computer Vision
- Autonomous Robots

---

# ⭐ Support

If you found this project useful:

⭐ Star the repository

🍴 Fork the repository

📢 Share it with others

Happy Building! 🚀
