<h1 align="center">🔥 IoT Smoke Detection System 🔥</h1>

<p align="center">
  <img src="https://img.shields.io/github/stars/your-username/iot-smoke-detector?style=for-the-badge" />
  <img src="https://img.shields.io/github/forks/your-username/iot-smoke-detector?style=for-the-badge" />
  <img src="https://img.shields.io/github/license/your-username/iot-smoke-detector?style=for-the-badge" />
</p>

<p align="center">
  <img src="Images/demo.gif" width="80%" alt="Smoke Detection System Demo">
</p>

---

## 📌 About the Project

This project is a smart, real-time **IoT-based Smoke & Gas Detection System** built using the **NodeMCU ESP8266** and an **MQ-2 gas sensor**. It detects harmful gases and smoke levels and sends notifications via **IFTTT** and logs data to **ThingSpeak**. It also displays values on an **OLED display**, and triggers a buzzer + LED alarm locally.

---

## 🚀 Features

- 🌫️ Real-time smoke/gas monitoring using MQ-2
- 📟 OLED Display showing live values
- 📢 Buzzer + LED local alerts
- 📲 Cloud integration via ThingSpeak
- 📧 Email/SMS alerts using IFTTT Webhooks
- 🧠 Fully compatible with Arduino IDE
- ☁️ Wi-Fi enabled via NodeMCU ESP8266

---

## 🧰 Tech Stack

| Technology       | Purpose                |
|------------------|------------------------|
| 🔌 Arduino C++    | Embedded Programming   |
| 🌐 ESP8266 WiFi   | Internet Connectivity  |
| 📟 OLED (SSD1306) | Real-time Display      |
| 🔔 Buzzer + LED   | Alerts                 |
| 🌫️ MQ-2 Sensor    | Smoke/Gas Sensing      |
| ☁️ ThingSpeak     | Cloud Logging          |
| 🔗 IFTTT          | Email Notifications    |

---

## 📷 Circuit Diagram

<p align="center">
  <img src="Images/circuit_diagram.jpg" width="70%" alt="Circuit Diagram">
</p>

---

## 🛠️ How to Use

1. Clone this repo:
   ```bash
   git clone https://github.com/your-username/iot-smoke-detector.git
Open the smoke_detector.ino file in Arduino IDE.

Install required libraries:

Adafruit_SSD1306

Adafruit_GFX

ESP8266WiFi

ESP8266HTTPClient

Update the following in the code:

Your Wi-Fi SSID and password

ThingSpeak API Key

IFTTT Webhook Key

Upload the code to the NodeMCU ESP8266.

Power on your device and observe:

OLED Display showing gas level

Buzzer/LED alerts on dangerous levels

Data logging on ThingSpeak

Alerts sent via IFTTT

📈 Live Dashboard
View the sensor data here 👉 ThingSpeak Dashboard

📝 License
This project is licensed under the MIT License.
See the LICENSE file for more details.

🙋‍♂️ Contact
Charan Reddy
📧 your.email@example.com
🔗 LinkedIn • Portfolio

🌟 Star this project if you find it helpful!
<p align="center"> <img src="https://media.giphy.com/media/3oKIPvvAUwvUuW36p6/giphy.gif" width="200px"> </p> ```
You can now copy-paste this into your GitHub repo as your README.md file.
