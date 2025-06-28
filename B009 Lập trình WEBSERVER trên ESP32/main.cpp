#include<android/log.h>
#include <Arduino.h>

const char* ssid = "ESP32-Server";
const char* password = "123456789";

WiFiServer server(80);
String header;

String output26State = "off";   
String output27State = "off";

const int output26 = 26; // GPIO 26
const int output27 = 27; // GPIO 27

unsigned long currentTime = millis();
unsigned long previousTime = 0;
const long timeoutTime = 5000; // 5 seconds timeout

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial to initialize

    // Set GPIOs as outputs
    pinMode(output26, OUTPUT);
    pinMode(output27, OUTPUT);

    // Initialize outputs to LOW
    digitalWrite(output26, LOW);
    digitalWrite(output27, LOW);

    Serial.println("Setting up WiFi...");
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    
    Serial.println("Connected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
    server.begin();
    Serial.println("Server started");
    
}
void loop() {
    WiFiClient client = server.available(); // Listen for incoming clients

    if (client) {
        Serial.println("New Client connected");
        String currentLine = ""; // Make a String to hold incoming data
        while (client.connected()) {
            if (client.available()) {
                char c = client.read(); // Read a byte
                Serial.write(c); // Print it to the serial monitor
                header += c; // Add it to the header string

                if (c == '\n') { // If the byte is a newline character
                    if (currentLine.length() == 0) {
                        // HTTP request has ended, send response
                        String response = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
                        response += "<!DOCTYPE HTML><html>";
                        response += "<h1>ESP32 Web Server</h1>";
                        response += "<p>Output 26 is " + output26State + "</p>";
                        response += "<p>Output 27 is " + output27State + "</p>";
                        response += "<p><a href=\"/26/on\">Turn Output 26 ON</a></p>";
                        response += "<p><a href=\"/26/off\">Turn Output 26 OFF</a></p>";
                        response += "<p><a href=\"/27/on\">Turn Output 27 ON</a></p>";
                        response += "<p><a href=\"/27/off\">Turn Output 27 OFF</a></p>";
                        response += "</html>";

                        client.print(response);
                        break;
                    } else {
                        // Process the request line
                        if (header.indexOf("GET /26/on") >= 0) {
                            output26State = "on";
                            digitalWrite(output26, HIGH);
                        } else if (header.indexOf("GET /26/off") >= 0) {
                            output26State = "off";
                            digitalWrite(output26, LOW);
                        } else if (header.indexOf("GET /27/on") >= 0) {
                            output27State = "on";
                            digitalWrite(output27, HIGH);
                        } else if (header.indexOf("GET /27/off") >= 0) {
                            output27State = "off";
                            digitalWrite(output27, LOW);
                        }
                        currentLine = ""; // Clear the current line
                    }
                } else if (c != '\r') {
                    currentLine += c; // Add the character to the current line
                }

                // Reset the header after processing
                if (millis() - previousTime > timeoutTime) {
                    header = ""; // Clear the header after timeout
                    previousTime = millis(); // Reset the previous time
                }
            }
        }
        // Close the connection
        client.stop();
}
