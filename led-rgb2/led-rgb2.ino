#define BLUE 3
#define GREEN 5
#define RED 6

void add (int x, int y);

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

  Serial.begin(9600);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
  analogWrite(RED, 239);
  analogWrite(GREEN, 20);
  analogWrite(BLUE, 60);
  /*
  redValue = 200;
  analogWrite(RED, redValue);
  analogWrite(BLUE, 0);
  delay(200);
  analogWrite(RED, 0);
  analogWrite(BLUE, redValue);
  delay(200);
  */
}

void add(int x, int y) {
  int ans = x + y;
  Serial.print("こたえは");
  Serial.print(ans);
  Serial.println("です");
}
