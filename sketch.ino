// Pujan Patel
// https://wokwi.com/projects/345890556936716883

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(A0));
  digitalWrite(13, HIGH);
  delay(analogRead(A0));
  digitalWrite(13, LOW);
  delay(250);
}
