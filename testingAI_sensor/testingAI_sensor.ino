const int SENSOR_PIN_1 = 5;
const int SENSOR_PIN_2 = 6;
const int SENSOR_PIN_3 = 7;
const int SENSOR_PIN_4 = 8;
const int SENSOR_PIN_5 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN_1, INPUT);
  pinMode(SENSOR_PIN_2, INPUT);
  pinMode(SENSOR_PIN_3, INPUT);
  pinMode(SENSOR_PIN_4, INPUT);
  pinMode(SENSOR_PIN_5, INPUT);
}

void loop() {
  int sensorValue1 = digitalRead(SENSOR_PIN_1);
  int sensorValue2 = digitalRead(SENSOR_PIN_2);
  int sensorValue3 = digitalRead(SENSOR_PIN_3);
  int sensorValue4 = digitalRead(SENSOR_PIN_4);
  int sensorValue5 = digitalRead(SENSOR_PIN_5);

  if (sensorValue1 == HIGH) {
    Serial.println("S1"); // Send signal for sensor 1
    delay(1000); // Wait for a second to avoid sending multiple signals
  }
  if (sensorValue2 == HIGH) {
    Serial.println("S2"); // Send signal for sensor 2
    delay(1000); // Wait for a second to avoid sending multiple signals
  }
    if (sensorValue3 == HIGH) {
    Serial.println("S3"); // Send signal for sensor 1
    delay(1000); // Wait for a second to avoid sending multiple signals
  }
  if (sensorValue4 == HIGH) {
    Serial.println("S4"); // Send signal for sensor 2
    delay(1000); // Wait for a second to avoid sending multiple signals
  }
  if (sensorValue5 == HIGH) {
    Serial.println("S5"); // Send signal for sensor 2
    delay(1000); // Wait for a second to avoid sending multiple signals
  }
}


