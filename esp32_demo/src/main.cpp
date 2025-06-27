#include <Arduino.h>
// tạp ra code để cho led có san trên esp32 nhấp nháy theo thời gian

// Đèn LED gắn sẵn trên ESP32 thường là GPIO 2
const int ledPin = 2;  

void setup() {
  pinMode(ledPin, OUTPUT);  // Cấu hình chân 2 là output
}

void loop() {
  Serial.println("LED is ON");
}
