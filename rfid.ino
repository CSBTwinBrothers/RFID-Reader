String id;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    id = Serial.readString();
    Serial.println(id);
    delay(1000);
  }
}
