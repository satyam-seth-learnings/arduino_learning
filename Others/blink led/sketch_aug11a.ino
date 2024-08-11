int ledl=7;
int led2=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledl, HIGH);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(ledl, LOW);
  digitalWrite(led2, HIGH);
  delay(100);
}
