# 🚗 WiFi Controlled RC Car using NodeMCU ESP8266

<p align="center">
  <img src="https://img.shields.io/badge/Platform-NodeMCU%20ESP8266-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Language-Arduino%20C%2B%2B-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Communication-WiFi-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Control-Web%20Application-red?style=for-the-badge">
  <img src="https://img.shields.io/badge/License-MIT-brightgreen?style=for-the-badge">
</p>

---

# 📖 Overview

The **WiFi Controlled RC Car using NodeMCU ESP8266** is a wireless robotic vehicle that can be controlled from any smartphone, tablet, or computer connected to the same WiFi network. Instead of using Bluetooth or RF communication, the project utilizes the built-in WiFi capability of the **NodeMCU ESP8266**, allowing users to control the car through a responsive web interface.

The NodeMCU hosts a lightweight web server that provides buttons for controlling the robot's movement. Users simply connect to the ESP8266's WiFi hotspot or the same local WiFi network and operate the robot using a browser.

This project is ideal for beginners learning IoT, embedded systems, robotics, and wireless communication.

---

# ✨ Features

- 📶 Wireless WiFi communication
- 🌐 Built-in web server
- 📱 Smartphone controlled
- 💻 Laptop browser compatible
- ↔ Forward movement
- ↩ Reverse movement
- ⬅ Left turn
- ➡ Right turn
- ⏹ Stop function
- ⚡ Low-cost implementation
- 🔋 Battery powered
- 📡 No Bluetooth module required
- 🌍 Can work in Access Point (AP) mode
- 🏠 Can work in Local WiFi (Station) mode
- 🚗 Smooth motor control
- 🔧 Easily expandable for IoT applications

---

# 🎯 Objectives

- Design a wireless RC car using NodeMCU ESP8266.
- Implement browser-based control.
- Learn IoT communication using WiFi.
- Control DC motors using motor drivers.
- Understand HTTP request handling in ESP8266.
- Develop a scalable robotic platform.

---

# 🛠 Hardware Requirements

| Component | Quantity |
|------------|----------|
| NodeMCU ESP8266 | 1 |
| L298N Motor Driver | 1 |
| BO DC Gear Motors | 2 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Caster Wheel | 1 |
| 18650 Batteries / Li-ion Battery Pack | 2 |
| Battery Holder | 1 |
| Power Switch | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

# 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- ESP8266WiFi Library
- WebServer Library
- HTML/CSS (Embedded)
- Google Chrome / Mobile Browser

---

# ⚙ Working Principle

The NodeMCU acts as a wireless web server.

1. ESP8266 powers on.
2. Creates a WiFi hotspot or connects to home WiFi.
3. User opens the IP address in a browser.
4. Webpage loads with control buttons.
5. Button press sends HTTP request.
6. NodeMCU receives the request.
7. Decodes the command.
8. Controls L298N motor driver.
9. Motors rotate accordingly.
10. Robot moves in the desired direction.

---

# 🧠 System Architecture

```
Smartphone / Laptop
         │
         │ WiFi
         ▼
 NodeMCU ESP8266
         │
         ▼
 L298N Motor Driver
         │
     ┌───┴───┐
     ▼       ▼
 Left      Right
 Motor      Motor
```

---

# 🔌 Circuit Connections

## L298N ↔ NodeMCU

| NodeMCU | L298N |
|----------|-------|
| D1 | IN1 |
| D2 | IN2 |
| D3 | IN3 |
| D4 | IN4 |
| VIN | 5V (if applicable) |
| GND | GND |

---

## Motors

| L298N | Motor |
|--------|-------|
| OUT1 | Left Motor + |
| OUT2 | Left Motor - |
| OUT3 | Right Motor + |
| OUT4 | Right Motor - |

---

## Power Supply

Battery

↓

L298N

↓

NodeMCU (VIN)

↓

Motors

---

# 📡 WiFi Modes

## Access Point Mode

NodeMCU creates its own hotspot.

```
SSID:
NodeMCU_RC_CAR

Password:
12345678
```

Connect directly and open:

```
192.168.4.1
```

---

## Station Mode

Connects to an existing WiFi router.

Example:

```
SSID: HomeWiFi

Password: ********
```

Open the assigned IP in the browser.

---

# 🌐 Web Interface

The browser interface typically includes:

```
        Forward

Left     Stop      Right

        Reverse
```

Optional controls:

- Speed Slider
- LED Control
- Horn Button
- Battery Status
- Camera Stream (ESP32-CAM Upgrade)

---

# 🚘 Movement Logic

| Command | Left Motor | Right Motor |
|----------|------------|-------------|
| Forward | Forward | Forward |
| Reverse | Reverse | Reverse |
| Left | Stop | Forward |
| Right | Forward | Stop |
| Stop | Stop | Stop |

---

# 📂 Project Structure

```
WiFi-Controlled-RC-Car/

│── Arduino_Code/
│     └── WiFi_RC_Car.ino
│
│── Images/
│     ├── Circuit.png
│     ├── Chassis.jpg
│     └── Web_Interface.png
│
│── Libraries/
│
│── Documentation/
│     └── Report.pdf
│
└── README.md
```

---

# 📊 Workflow

```
Power ON
     │
     ▼
Initialize ESP8266
     │
     ▼
Create WiFi Server
     │
     ▼
User Connects
     │
     ▼
Open Browser
     │
     ▼
Press Button
     │
     ▼
HTTP Request
     │
     ▼
ESP8266 Reads Command
     │
     ▼
Motor Driver Activated
     │
     ▼
Robot Moves
```

---

# 🚀 Future Improvements

- 📷 ESP32-CAM live video streaming
- 🎮 Joystick web interface
- 🎙 Voice control
- 🤖 Autonomous navigation
- 📡 Internet control
- ☁ Cloud connectivity
- 📍 GPS tracking
- 🚧 Obstacle avoidance
- 📈 Speed feedback
- 🔋 Battery monitoring
- 🛰 MQTT communication
- 📱 Android application
- 🎯 Gesture control
- 🧠 AI-based autonomous mode

---

# 🎓 Learning Outcomes

This project helps understand:

- ESP8266 Programming
- WiFi Communication
- Embedded Systems
- IoT Fundamentals
- Web Server Development
- Motor Driver Interfacing
- Robotics
- HTTP Communication
- Wireless Control Systems
- Arduino Programming

---

# 📸 Project Demonstration

Recommended images to include:

- Completed RC Car
- Circuit Diagram
- NodeMCU Wiring
- Web Interface
- Mobile Control Screen
- Chassis Assembly
- Testing Images

---

# 🔍 Applications

- Educational Robotics
- IoT Learning
- Wireless Robot Platform
- Research Projects
- Smart Vehicle Prototype
- Home Automation Robot
- Surveillance Robot
- Delivery Robot Prototype
- STEM Education
- Engineering Mini Project

---

# ⚠ Limitations

- Limited WiFi range
- Dependent on network stability
- No obstacle detection
- No autonomous navigation
- Basic web interface
- Battery backup depends on capacity

---

# 🔐 Safety Precautions

- Verify wiring before powering on.
- Use a regulated power supply.
- Avoid short circuits.
- Keep batteries properly insulated.
- Do not overload the motor driver.
- Disconnect power during maintenance.

---

# 📈 Future Scope

The platform can be upgraded into:

- Smart Surveillance Robot
- Fire Fighting Robot
- Voice Controlled Robot
- AI Robot
- Delivery Robot
- Agricultural Robot
- Warehouse Robot
- Swarm Robot
- Autonomous Navigation Robot
- Cloud Connected Robot

---

# 🤝 Contributing

Contributions are welcome!

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push to your fork.
5. Open a Pull Request.

---

# 📝 License

This project is licensed under the **MIT License**. Feel free to use, modify, and distribute it for educational and research purposes.

---

# 👨‍💻 Author

**Koushik M**

**BE Mechatronics Engineering**

**The Oxford College of Engineering**

**Bengaluru, Karnataka, India**

Passionate about Robotics, Embedded Systems, IoT, Automation, and AI-driven innovations.

---

# ⭐ Support

If you found this project helpful:

- ⭐ Star the repository
- 🍴 Fork the project
- 🛠 Contribute improvements
- 📢 Share with others
- 💡 Build your own enhancements

---

## Thank You!

**Happy Building! 🚗📶✨**
