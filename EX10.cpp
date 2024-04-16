const int sensorPin = A0;
int BUZZ = 3;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;
  
  if (temperatureC >= -40 && temperatureC <= 125) {
    Serial.print("Temperatura: ");
    Serial.print(temperatureC);
    Serial.println(" °C");
  }

  if (temperatureC >=90){
    apito();
  }

  delay(1000);
}

void apito() {
  tone(BUZZ, 200,1000);
  delay(200);
}