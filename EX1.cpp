int LED_BUILTIN = 13;

void setup(){

pinMode(LED_BUILTIN, OUTPUT);

Serial.begin(9600);

}

void loop (){
  	digitalWrite(LED_BUILTIN, 1);
    Serial.println("LED_BUILTIN ligado");
    delay(500);
    digitalWrite(LED_BUILTIN, 0);
    Serial.println("LED_BUILTIN desligado");
}