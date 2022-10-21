const int BUZZER_PIN = 3;
const int DOOR_SENSOR_PIN = 2;
int pirStat;


void setup() {
  pinMode(DOOR_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  Serial.begin(9600);

}

void loop() {
  pirStat = digitalRead(DOOR_SENSOR_PIN);
  if (pirStat == HIGH) {
    Serial.println("HIGH");
    digitalWrite(BUZZER_PIN, HIGH);
    delay(50);
    digitalWrite(BUZZER_PIN, LOW);
  } else {
    Serial.println("LOW");
  }

}
