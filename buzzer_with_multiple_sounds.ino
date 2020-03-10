#define buzzer  5

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // pulse the buzzer on for a short time
  tone(buzzer, 1000);
  delay(500);
  tone(buzzer, 2000);
  delay(500);
  tone(buzzer, 3000);
  delay(500);
  tone(buzzer, 4000);
  delay(500);
  noTone(buzzer);
    delay(500);
  tone(buzzer, 5000);
  delay(500);
  noTone(buzzer);
    delay(500);
}
