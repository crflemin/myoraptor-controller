#define ENABLE 2
#define MOTOR1 3
#define MOTOR2 4
#define LED    13
#define MYO    15

#define OPEN    1
#define CLOSED  0

int handState;

void setup() {
  // put your setup code here, to run once:
  pinMode(MYO, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);
  pinMode(ENABLE, OUTPUT);
  digitalWrite(ENABLE, HIGH);
  Serial.begin(9600);
  
  handState = OPEN;
}

void loop() {
  // put your main code here, to run repeatedly:
  int myoValue = analogRead(MYO);
  Serial.println(myoValue);
  
  if (handState == OPEN && myoValue > 400)
  {
    digitalWrite(MOTOR1, LOW);
    digitalWrite(MOTOR2, HIGH);
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(MOTOR2, LOW);
    digitalWrite(MOTOR1, LOW);
    digitalWrite(LED, LOW);
    handState = CLOSED;
  }
  else if (handState == CLOSED && myoValue < 200)
  {
    digitalWrite(MOTOR1, HIGH);
    digitalWrite(MOTOR2, LOW);
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(MOTOR2, LOW);
    digitalWrite(MOTOR1, LOW);
    digitalWrite(LED, LOW);
    handState = OPEN;
  }
}
