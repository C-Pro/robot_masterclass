#define ledPin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  if (Serial.peek() != -1) {
    char cmd = Serial.read();
    switch (cmd) {
      case '0': digitalWrite(ledPin, LOW);
        break;
      case '1': digitalWrite(ledPin, HIGH);
        break;
      default:
        Serial.println("WAT?");
        break;
    }
  }
  delay(30);
}
