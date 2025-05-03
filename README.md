<h1 align="center">
  🔥 IoT Smoke Detection System 🔥
</h1>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&duration=3000&pause=500&center=true&vCenter=true&multiline=true&width=700&height=80&lines=Real-time+Smoke+%26+Gas+Detection+using+MQ-2;Cloud+Monitoring+%7C+Email+Alerts+%7C+Wi-Fi+Powered;Built+with+ESP8266+and+ThingSpeak+%2B+IFTTT" alt="Typing SVG" />
</p>



<p align="center">
  <img src="Images/demo.gif" width="80%" alt="Smoke Detection Demo GIF">
</p>

---

## 📌 About the Project

This is a real-time **IoT-based Smoke & Gas Detection System** using the **MQ-2 sensor** and **NodeMCU ESP8266**. Designed for **safety and automation**, it not only **detects harmful gases**, but also displays data, sounds alerts, and sends **notifications to your phone or email**.

---

## 🚀 Features

✅ **Live Monitoring** via OLED  
🔔 **Buzzer + LED Alerts** for safety  
📡 **Wi-Fi Enabled** (ESP8266)  
📊 **ThingSpeak Cloud Logging**  
📨 **IFTTT Email/SMS Notifications**  
⚙️ Easy to program with Arduino IDE

---

## 🧰 Tech Stack

| 🔧 Component        | 💡 Purpose              |
|--------------------|------------------------|
| Arduino C++        | Embedded Programming   |
| NodeMCU ESP8266    | Internet Connectivity  |
| MQ-2 Sensor        | Smoke/Gas Detection    |
| OLED SSD1306       | Real-time Display      |
| Buzzer + LED       | Local Alerts           |
| ThingSpeak         | Cloud Logging          |
| IFTTT Webhooks     | Notifications          |

---

## 🛠️ How to Use

# Step 1: Clone the repository
git clone https://github.com/your-username/iot-smoke-detector.git

---

## 📍 Arduino IDE Setup

Install the following libraries from Library Manager:

- `ESP8266WiFi`
- `Adafruit_GFX`
- `Adafruit_SSD1306`
- `ESP8266HTTPClient`

Replace these constants in `smoke_detector.ino` with your own credentials:

#define WIFI_SSID "YourWiFiName"
#define WIFI_PASSWORD "YourWiFiPassword"
#define THINGSPEAK_API_KEY "YourThingSpeakAPIKey"
#define IFTTT_WEBHOOK_KEY "YourIFTTTKey"

---

🚀 **Upload the code to your ESP8266**  
🔌 Power on the device  
📈 Watch live data on **OLED display** & **ThingSpeak**  
📬 Receive real-time alerts when gas level crosses the threshold

---

## 📈 Cloud Dashboard

View your real-time sensor data 📊 on  
🔗 [ThingSpeak Dashboard](https://thingspeak.com/channels/YOUR_CHANNEL_ID)


<p align="center">
  <img src="https://media.giphy.com/media/l3vR85PnGsBwu1PFK/giphy.gif" width="200px" />
</p>

