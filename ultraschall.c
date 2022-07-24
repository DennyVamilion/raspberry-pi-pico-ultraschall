int triggerPin = 2;
int echoPin = 3;
long messung = 0;
int ergebnis = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  messung = pulseIn( echoPin, HIGH);
  ergebnis = (messung/2)/29;

  Serial.print(ergebnis);
  Serial.println("cm");
  delay(60);
}