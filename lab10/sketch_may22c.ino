#include <LiquidCrystal.h>

LiquidCrystal lcd(36, 37, 26, 27, 28, 29);

int aPin = 2;
int bPin = 3;
int cPin = 4;
int dPin = 5;
int ePin = 6;
int fPin = 7;
int gPin = 8;
int dP   = 9;

int GND1 = 10;
int GND2 = 11;
int GND3 = 12;
int GND4 = 13;

int dig1 = 0;
int dig2 = 0;
int dig3 = 0;
int dig4 = 0;

unsigned long previousMillis = 0;

void zero() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, HIGH);
}

void one() {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
}

void two() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, LOW);
}

void three() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, LOW);
}


void four() {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}

void five() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}

void six() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}

void seven() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
}

void eight() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}

void nine() {
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}


void displayNumber(int num) {
  switch(num) {
    case 0: zero(); break;
    case 1: one(); break;
    case 2: two(); break;
    case 3: three(); break;
    case 4: four(); break;
    case 5: five(); break;
    case 6: six(); break;
    case 7: seven(); break;
    case 8: eight(); break;
    case 9: nine(); break;
  }
}

// --------------------------------------------------------
// Multiplexing Function
// --------------------------------------------------------

void refreshDisplay() {

  // Digit 1 (rightmost)
  digitalWrite(GND1, HIGH);
  displayNumber(dig1);
  delay(4);
  digitalWrite(GND1, LOW);

  // Digit 2
  digitalWrite(GND2, HIGH);
  displayNumber(dig2);
  delay(4);
  digitalWrite(GND2, LOW);

  // Digit 3
  digitalWrite(GND3, HIGH);
  displayNumber(dig3);
  delay(4);
  digitalWrite(GND3, LOW);

  // Digit 4 (leftmost)
  digitalWrite(GND4, HIGH);
  displayNumber(dig4);
  delay(4);
  digitalWrite(GND4, LOW);
}

void incrementCounter() {

  dig1++;

  if (dig1 >= 10) {
    dig1 = 0;
    dig2++;
  }

  if (dig2 >= 10) {
    dig2 = 0;
    dig3++;
  }

  if (dig3 >= 10) {
    dig3 = 0;
    dig4++;
  }

  if (dig4 >= 10) {
    dig4 = 0;
  }
}

void updateLCD() {

  lcd.setCursor(0, 0);

  lcd.print("Counter: ");

  lcd.print(dig4);
  lcd.print(dig3);
  lcd.print(dig2);
  lcd.print(dig1);
  lcd.print(" ");
}
void setup() {

  // Segment pins OUTPUT
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
  pinMode(ePin, OUTPUT);
  pinMode(fPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(dP, OUTPUT);

  // Digit pins OUTPUT
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
  pinMode(GND3, OUTPUT);
  pinMode(GND4, OUTPUT);

  // LCD setup
  lcd.begin(16, 2);
  lcd.print("Counter:");
}

void loop() {

  // Refresh display continuously
  refreshDisplay();

  // Increment every 1 second
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= 1000) {

    previousMillis = currentMillis;

    incrementCounter();

    updateLCD();
  }
}