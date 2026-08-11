/*
  WiFi Controlled RC Car
  Controller: NodeMCU ESP8266
  Motor Driver: L298N
  Motors: 2 DC Gear Motors

  WiFi:
  SSID: NodeMCU_RC_CAR
  Password: 12345678
  IP Address: 192.168.4.1
*/

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// ===============================
// WiFi Settings
// ===============================

const char* ssid = "NodeMCU_RC_CAR";
const char* password = "12345678";

// Create web server on port 80
ESP8266WebServer server(80);

// ===============================
// Motor Driver Pins
// ===============================

// Left Motor
#define IN1 D1
#define IN2 D2

// Right Motor
#define IN3 D3
#define IN4 D4

// ===============================
// Motor Functions
// ===============================

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

// ===============================
// Webpage
// ===============================

String webpage() {

  String html = R"rawliteral(

<!DOCTYPE html>
<html>

<head>

<meta name="viewport" content="width=device-width, initial-scale=1">

<title>NodeMCU RC Car</title>

<style>

body {
  font-family: Arial;
  text-align: center;
  background: #222;
  color: white;
  margin: 0;
  padding: 20px;
}

h1 {
  margin-bottom: 10px;
}

.status {
  margin: 15px;
  font-size: 18px;
}

.control {
  width: 300px;
  margin: auto;
}

button {
  width: 100px;
  height: 70px;
  margin: 8px;
  border: none;
  border-radius: 15px;
  font-size: 25px;
  font-weight: bold;
  background: #3498db;
  color: white;
  box-shadow: 0px 4px 8px black;
}

button:active {
  transform: scale(0.95);
}

.stop {
  background: #e74c3c;
}

.forward {
  background: #2ecc71;
}

.backward {
  background: #f39c12;
}

.left {
  background: #3498db;
}

.right {
  background: #9b59b6;
}

.info {
  margin-top: 30px;
  font-size: 14px;
  color: #bbb;
}

</style>

<script>

function sendCommand(command)
{
  fetch("/" + command);
}

</script>

</head>

<body>

<h1>🚗 WiFi RC Car</h1>

<div class="status">
Control your RC Car using WiFi
</div>

<div class="control">

<div>

<button class="forward"
ontouchstart="sendCommand('forward')"
onmousedown="sendCommand('forward')"
ontouchend="sendCommand('stop')"
onmouseup="sendCommand('stop')">

▲

</button>

</div>

<div>

<button class="left"
ontouchstart="sendCommand('left')"
onmousedown="sendCommand('left')"
ontouchend="sendCommand('stop')"
onmouseup="sendCommand('stop')">

◀

</button>

<button class="stop"
onclick="sendCommand('stop')">

STOP

</button>

<button class="right"
ontouchstart="sendCommand('right')"
onmousedown="sendCommand('right')"
ontouchend="sendCommand('stop')"
onmouseup="sendCommand('stop')">

▶

</button>

</div>

<div>

<button class="backward"
ontouchstart="sendCommand('backward')"
onmousedown="sendCommand('backward')"
ontouchend="sendCommand('stop')"
onmouseup="sendCommand('stop')">

▼

</button>

</div>

</div>

<div class="info">

<p>NodeMCU ESP8266</p>
<p>L298N Motor Driver</p>
<p>WiFi Controlled Robot</p>

</div>

</body>

</html>

)rawliteral";

  return html;
}

// ===============================
// Web Server Handlers
// ===============================

void handleRoot() {

  server.send(200, "text/html", webpage());

}

void handleForward() {

  moveForward();

  server.send(200, "text/plain", "FORWARD");

}

void handleBackward() {

  moveBackward();

  server.send(200, "text/plain", "BACKWARD");

}

void handleLeft() {

  turnLeft();

  server.send(200, "text/plain", "LEFT");

}

void handleRight() {

  turnRight();

  server.send(200, "text/plain", "RIGHT");

}

void handleStop() {

  stopCar();

  server.send(200, "text/plain", "STOP");

}

// ===============================
// Setup
// ===============================

void setup() {

  Serial.begin(115200);

  // Configure motor pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Make sure motors are stopped
  stopCar();

  // Start WiFi Access Point
  WiFi.mode(WIFI_AP);

  WiFi.softAP(ssid, password);

  Serial.println();
  Serial.println("==============================");
  Serial.println("WiFi RC Car Started");
  Serial.println("==============================");

  Serial.print("WiFi SSID: ");
  Serial.println(ssid);

  Serial.print("Password: ");
  Serial.println(password);

  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  // ===============================
  // Web Server Routes
  // ===============================

  server.on("/", handleRoot);

  server.on("/forward", handleForward);

  server.on("/backward", handleBackward);

  server.on("/left", handleLeft);

  server.on("/right", handleRight);

  server.on("/stop", handleStop);

  // Start server
  server.begin();

  Serial.println("Web server started!");
  Serial.println("Open http://192.168.4.1");
}

// ===============================
// Main Loop
// ===============================

void loop() {

  server.handleClient();

}
