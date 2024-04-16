#define FOTO A0
int sensor = 0;
int led = 8;
void setup (){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop (){
  sensor = analogRead(FOTO);
  Serial.println(sensor);
  delay(1000);
    analogWrite(led, sensor);
}