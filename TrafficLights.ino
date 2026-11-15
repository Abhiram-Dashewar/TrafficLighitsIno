
// =================================
// FOUR ROAD TRAFFIC LIGHT SYSTEM
// =================================

// LED pin numbers
int red[]    = {2, 5, 8, 11};
int yellow[] = {3, 6, 9, 12};
int green[]  = {4, 7, 10, 13};


// =================================
// SETUP
// =================================

void setup() {

  // Configure all pins
  for (int i = 0; i < 4; i++) {
    pinMode(red[i], OUTPUT);
    pinMode(yellow[i], OUTPUT);
    pinMode(green[i], OUTPUT);
  }

  // All LEDs blink once (800ms)
  for (int i = 0; i < 1; i++) {
    allOn();
    delay(800);
    allOff();
    delay(800);
  }

  // All LEDs blink twice (500ms)
  for (int i = 0; i < 2; i++) {
    allOn();
    delay(500);
    allOff();
    delay(500);
  }

  // Red, Yellow and Green blink separately
  blinkColor(red);
  blinkColor(yellow);
  blinkColor(green);

  allOff();
}


// =================================
// ALL LEDs ON
// =================================

void allOn() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(red[i], HIGH);
    digitalWrite(yellow[i], HIGH);
    digitalWrite(green[i], HIGH);
  }
}


// =================================
// ALL LEDs OFF
// =================================

void allOff() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(red[i], LOW);
    digitalWrite(yellow[i], LOW);
    digitalWrite(green[i], LOW);
  }
}


// =================================
// BLINK ONE COLOR GROUP
// =================================

void blinkColor(int pins[]) {

  for (int i = 0; i < 4; i++) {
    digitalWrite(pins[i], HIGH);
  }

  delay(500);

  for (int i = 0; i < 4; i++) {
    digitalWrite(pins[i], LOW);
  }

  delay(500);
}


// =================================
// MAIN TRAFFIC LIGHT SYSTEM
// =================================

void loop() {

  // ROAD 1 GREEN, REMAINING ROADS RED
  allRed();
  digitalWrite(red[0], LOW);
  digitalWrite(green[0], HIGH);
  delay(10000);

  // ROAD 1 AND ROAD 2 YELLOW
  digitalWrite(green[0], LOW);
  digitalWrite(red[1], LOW);
  digitalWrite(yellow[0], HIGH);
  digitalWrite(yellow[1], HIGH);
  delay(2000);


  // ROAD 2 GREEN
  allRed();
  digitalWrite(red[1], LOW);
  digitalWrite(green[1], HIGH);
  delay(10000);

  // ROAD 2 AND ROAD 3 YELLOW
  digitalWrite(green[1], LOW);
  digitalWrite(red[2], LOW);
  digitalWrite(yellow[1], HIGH);
  digitalWrite(yellow[2], HIGH);
  delay(2000);


  // ROAD 3 GREEN
  allRed();
  digitalWrite(red[2], LOW);
  digitalWrite(green[2], HIGH);
  delay(10000);

  // ROAD 3 AND ROAD 4 YELLOW
  digitalWrite(green[2], LOW);
  digitalWrite(red[3], LOW);
  digitalWrite(yellow[2], HIGH);
  digitalWrite(yellow[3], HIGH);
  delay(2000);


  // ROAD 4 GREEN
  allRed();
  digitalWrite(red[3], LOW);
  digitalWrite(green[3], HIGH);
  delay(10000);

  // ROAD 4 AND ROAD 1 YELLOW
  digitalWrite(green[3], LOW);
  digitalWrite(red[0], LOW);
  digitalWrite(yellow[3], HIGH);
  digitalWrite(yellow[0], HIGH);
  delay(2000);

}


// =================================
// ALL ROADS RED
// =================================

void allRed() {

  for (int i = 0; i < 4; i++) {
    digitalWrite(red[i], HIGH);
    digitalWrite(yellow[i], LOW);
    digitalWrite(green[i], LOW);
  }

}
