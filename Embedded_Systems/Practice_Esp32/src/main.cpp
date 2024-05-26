#include <WiFi.h>
#include <WebServer.h>

// Replace with your network credentials
const char* ssid = "Hemakoti's Hotspot";
const char* password = "Hemakoti@003";

// Set web server port number to 80
WebServer server(80);

// Define the LED pins
const int ledPins[10] = {2, 4, 5, 12, 13, 14, 15, 16, 17, 18};
bool ledStates[10] = {false, false, false, false, false, false, false, false, false, false};

void handleRoot() {
  String html = "<h1>ESP32 Control</h1>";
  for (int i = 0; i < 10; i++) {
    html += "<p>LED " + String(i + 1);
    if (ledStates[i]) {
      html += " <a href=\"/off" + String(i) + "\"><button>OFF</button></a></p>";
    } else {
      html += " <a href=\"/on" + String(i) + "\"><button>ON</button></a></p>";
    }
  }
  server.send(200, "text/html", html);
}

void handleLEDOn(int ledIndex) {
  digitalWrite(ledPins[ledIndex], HIGH);
  ledStates[ledIndex] = true;
  server.send(200, "text/html", "<h1>LED " + String(ledIndex + 1) + " is ON</h1><p><a href=\"/\"><button>Back</button></a></p>");
}

void handleLEDOff(int ledIndex) {
  digitalWrite(ledPins[ledIndex], LOW);
  ledStates[ledIndex] = false;
  server.send(200, "text/html", "<h1>LED " + String(ledIndex + 1) + " is OFF</h1><p><a href=\"/\"><button>Back</button></a></p>");
}

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Initialize web server routes
  server.on("/", handleRoot);
  for (int i = 0; i < 10; i++) {
    server.on("/on" + String(i), [i]() { handleLEDOn(i); });
    server.on("/off" + String(i), [i]() { handleLEDOff(i); });
  }

  // Start server
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
