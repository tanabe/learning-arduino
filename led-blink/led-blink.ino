int LED_SOCKET = 10;
int INTERVAL = 2000;

void setup() {
  pinMode(LED_SOCKET, OUTPUT);
}

void loop() {
  digitalWrite(LED_SOCKET, HIGH);
  delay(INTERVAL);
  digitalWrite(LED_SOCKET, LOW);
  delay(INTERVAL);
}
