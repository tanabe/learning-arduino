int LED_SOCKET = 5;
int ON_BUTTON_SOCKET = 9;
int OFF_BUTTON_SOCKET = 8;

void setup() {
  pinMode(LED_SOCKET, OUTPUT);
  pinMode(ON_BUTTON_SOCKET, INPUT_PULLUP);
  pinMode(OFF_BUTTON_SOCKET, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(ON_BUTTON_SOCKET) == LOW) {
    digitalWrite(LED_SOCKET, HIGH);
  } else if (digitalRead(OFF_BUTTON_SOCKET) == LOW) {
    digitalWrite(LED_SOCKET, LOW);
  }
}
