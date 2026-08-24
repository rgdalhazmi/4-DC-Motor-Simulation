
#define dc1_in1 8
#define dc1_in2 9
#define dc2_in1 11
#define dc2_in2 12
#define dc3_in1 5
#define dc3_in2 6
#define dc4_in1 2
#define dc4_in2 3

void setup() {

  pinMode(dc1_in1, OUTPUT); pinMode(dc1_in2, OUTPUT);
  pinMode(dc2_in1, OUTPUT); pinMode(dc2_in2, OUTPUT);
  pinMode(dc3_in1, OUTPUT); pinMode(dc3_in2, OUTPUT);
  pinMode(dc4_in1, OUTPUT); pinMode(dc4_in2, OUTPUT);
}

void loop() {
  moveForward();
  delay(30000);

  moveBackward();
  delay(60000);

  
  unsigned long startTime = millis();
  while (millis() - startTime < 60000) {
    turnRight();
    delay(1000);

    turnLeft();   
    delay(1000);
  }


  stopMotors();
  while (true);   
}


void moveForward() {
  digitalWrite(dc1_in1, HIGH); digitalWrite(dc1_in2, LOW);
  digitalWrite(dc2_in1, HIGH); digitalWrite(dc2_in2, LOW);
  digitalWrite(dc3_in1, HIGH); digitalWrite(dc3_in2, LOW);
  digitalWrite(dc4_in1, HIGH); digitalWrite(dc4_in2, LOW);
}

void moveBackward() {
  digitalWrite(dc1_in1, LOW); digitalWrite(dc1_in2, HIGH);
  digitalWrite(dc2_in1, LOW); digitalWrite(dc2_in2, HIGH);
  digitalWrite(dc3_in1, LOW); digitalWrite(dc3_in2, HIGH);
  digitalWrite(dc4_in1, LOW); digitalWrite(dc4_in2, HIGH);
}

void turnRight() {
  digitalWrite(dc1_in1, HIGH); digitalWrite(dc1_in2, LOW);
  digitalWrite(dc2_in1, LOW);  digitalWrite(dc2_in2, HIGH);
  digitalWrite(dc3_in1, HIGH); digitalWrite(dc3_in2, LOW);
  digitalWrite(dc4_in1, LOW);  digitalWrite(dc4_in2, HIGH);
}

void turnLeft() {
  digitalWrite(dc1_in1, LOW);  digitalWrite(dc1_in2, HIGH);
  digitalWrite(dc2_in1, HIGH); digitalWrite(dc2_in2, LOW);
  digitalWrite(dc3_in1, LOW);  digitalWrite(dc3_in2, HIGH);
  digitalWrite(dc4_in1, HIGH); digitalWrite(dc4_in2, LOW);
}

void stopMotors() {
  digitalWrite(dc1_in1, LOW); digitalWrite(dc1_in2, LOW);
  digitalWrite(dc2_in1, LOW); digitalWrite(dc2_in2, LOW);
  digitalWrite(dc3_in1, LOW); digitalWrite(dc3_in2, LOW);
  digitalWrite(dc4_in1, LOW); digitalWrite(dc4_in2, LOW);
}