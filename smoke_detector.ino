#include <ESP8266WiFi.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ESP8266HTTPClient.h>

#define MQ2_PIN A0
#define BUZZER D1
#define LED_PIN D2

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Replace with your WiFi credentials
const char* ssid = "your-SSID";
const char* password = "your-PASSWORD";

// ThingSpeak Settings
const char* thingSpeakHost = "api.thingspeak.com";
String apiKey = "YOUR_THINGSPEAK_WRITE_API_KEY";

// IFTTT Webhook URL
const char* IFTTT_URL = "https://maker.ifttt.com/trigger/smoke_alert/with/key/YOUR_IFTTT_KEY";

// Alert threshold
int smokeThreshold = 400;

void setup() {
  pinMode(MQ2_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(115200);
  WiFi.begin(ssid, password);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(0, 0);
  display.println("Connecting to WiFi...");
  display.display();

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("WiFi Connected!");
  display.display();
  delay(1000);
}

void loop() {
  int smokeValue = analogRead(MQ2_PIN);
  Serial.println(smokeValue);

  // Display on OLED
  display.clearDisplay();
  display.setCursor(0, 0);
  display.print("Smoke Level: ");
  display.println(smokeValue);
  display.display();

  // Local Alert
  if (smokeValue > smokeThreshold) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED_PIN, HIGH);
    triggerIFTTTAlert(smokeValue);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED_PIN, LOW);
  }

  // Upload to ThingSpeak
  sendToThingSpeak(smokeValue);

  delay(15000); // 15 seconds delay for ThingSpeak
}

void sendToThingSpeak(int value) {
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    if (client.connect(thingSpeakHost, 80)) {
      String postStr = "field1=" + String(value) + "&key=" + apiKey;
      client.println("POST /update HTTP/1.1");
      client.println("Host: api.thingspeak.com");
      client.println("Connection: close");
      client.println("Content-Type: application/x-www-form-urlencoded");
      client.print("Content-Length: ");
      client.println(postStr.length());
      client.println();
      client.print(postStr);
    }
    client.stop();
  }
}

void triggerIFTTTAlert(int value) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(IFTTT_URL);
    http.addHeader("Content-Type", "application/json");

    String body = "{\"value1\":\"" + String(value) + "\",\"value2\":\"Smoke Detected\",\"value3\":\"Check Area Immediately!\"}";
    int httpCode = http.POST(body);
    http.end();
  }
}
