int LED1 = 43;
int LED2 = 44;
int LED3 = 45;
int LED4 = 46;

int button1 = 38;
int button2 = 39;

bool systemOn = false;

int mode = 1;

bool oldButton1 = LOW;
bool oldButton2 = LOW;

int led = 1;

unsigned long time = 0;

void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {

  bool b1 = digitalRead(button1);
  bool b2 = digitalRead(button2);

  if(b1 == HIGH && oldButton1 == LOW) {
    systemOn = !systemOn;
  }

  if(b2 == HIGH && oldButton2 == LOW) {

    mode++;

    if(mode > 3) {
      mode = 1;
    }
  }

  oldButton1 = b1;
  oldButton2 = b2;

  if(systemOn == false) {

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);

    return;
  }

  if(millis() - time >= 1000) {

    time = millis();

    if(mode == 1) {

      static bool state = false;

      state = !state;

      digitalWrite(LED1, state);
      digitalWrite(LED2, state);
      digitalWrite(LED3, state);
      digitalWrite(LED4, state);
    }

    if(mode == 2) {

      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      if(led == 1) digitalWrite(LED1, HIGH);
      if(led == 2) digitalWrite(LED2, HIGH);
      if(led == 3) digitalWrite(LED3, HIGH);
      if(led == 4) digitalWrite(LED4, HIGH);

      led++;

      if(led > 4) {
        led = 1;
      }
    }

    if(mode == 3) {

      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      if(led == 1) digitalWrite(LED4, HIGH);
      if(led == 2) digitalWrite(LED3, HIGH);
      if(led == 3) digitalWrite(LED2, HIGH);
      if(led == 4) digitalWrite(LED1, HIGH);

      led++;

      if(led > 4) {
        led = 1;
      }
    }
  }
}