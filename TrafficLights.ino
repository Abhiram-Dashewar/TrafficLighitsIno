void setup() {

  // Pins configuration
  pinMode(2, OUTPUT);  // Red1
  pinMode(3, OUTPUT);  // Yellow1
  pinMode(4, OUTPUT);  // Green1
  pinMode(5, OUTPUT);  // Red2
  pinMode(6, OUTPUT);  // Yellow2
  pinMode(7, OUTPUT);  // Green2
  pinMode(8, OUTPUT);  // Red3
  pinMode(9, OUTPUT);  // Yellow3
  pinMode(10, OUTPUT); // Green3
  pinMode(11, OUTPUT); // Red4
  pinMode(12, OUTPUT); // Yellow4
  pinMode(13, OUTPUT); // Green4

  // All LEDs long blink once at startup
  for (int i = 0; i < 1; i++) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(800);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(800);
  }

  // All LEDs short blink twice at startup
  for (int i = 0; i < 2; i++) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);
  }

  // Red, yellow, and green LEDs blink separately once
  for (int i = 0; i < 1; i++) {

    // Red LEDs blink once
    for (int j = 0; j < 1; j++) {
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      digitalWrite(8, LOW);
      digitalWrite(11, LOW);
      delay(500);
    }

    // Yellow LEDs blink once
    for (int j = 0; j < 1; j++) {
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);
      digitalWrite(12, LOW);
      delay(500);
    }

    // Green LEDs blink once
    for (int j = 0; j < 1; j++) {
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(4, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(500);
    }
  }
}

void loop() {

  // Road 1 GREEN, all other roads RED
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(10000);

  // Road 1 and Road 2 YELLOW
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(2000);

  // Road 2 GREEN, all other roads RED
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(10000);

  // Road 2 and Road 3 YELLOW
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(2000);

  // Road 3 GREEN, all other roads RED
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(10000);

  // Road 3 and Road 4 YELLOW
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);

  // Road 4 GREEN, all other roads RED
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(10000);

  // Road 4 and Road 1 YELLOW
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
}
