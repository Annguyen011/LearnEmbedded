const int ledPin = 19;     // LED nối chân GPIO23
const int buttonPin = 16;  // Nút nhấn nối chân GPIO16

void setup() {
  pinMode(ledPin, OUTPUT);       // Đặt chân LED là output
      // Đặt chân nút là input
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
   // Chống nhiễu (debounce nhẹ)
}
