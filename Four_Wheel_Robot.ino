// ===== Motor 1 =====
const int ENA = 5;
const int IN1 = 2;
const int IN2 = 3;

// ===== Motor 2 =====
const int ENB = 6;
const int IN3 = 4;
const int IN4 = 7;

// ===== Motor 3 =====
const int ENC = A0;
const int IN5 = A1;
const int IN6 = A2;

// ===== Motor 4 =====
const int END = A3;
const int IN7 = A4;
const int IN8 = A5;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENC, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);

  pinMode(END, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);

  stopMotors();
}

void enableMotors() {
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(ENC, HIGH);
  digitalWrite(END, HIGH);
}

void stopMotors() {

  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  digitalWrite(ENC, LOW);
  digitalWrite(END, LOW);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, LOW);
}

void forward() {

  enableMotors();

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
}

void backward() {

  enableMotors();

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);
}

void turnRight() {

  enableMotors();

  // Left side (M2, M3) ON
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  // Right side (M1, M4) OFF
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, LOW);
}

void turnLeft() {

  enableMotors();

  // Left side (M2, M3) OFF
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, LOW);

  // Right side (M1, M4) ON
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
}

void loop() {

  // Forward 30 seconds
  forward();
  delay(30000);

  stopMotors();
  delay(1000);

  // Backward 60 seconds
  backward();
  delay(60000);

  stopMotors();
  delay(1000);

  // Alternate right and left turns for 1 minute
  for (int i = 0; i < 6; i++) {

    turnRight();
    delay(5000);

    stopMotors();
    delay(500);

    turnLeft();
    delay(5000);

    stopMotors();
    delay(500);
  }

  stopMotors();
  delay(1000);
}