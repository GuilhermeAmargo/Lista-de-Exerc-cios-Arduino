int led = 9;
void setup(){

pinMode(led, OUTPUT);

Serial.begin(9600);

}

void loop (){

  for (int i = 0; i<=255; i++){
    analogWrite(led, i);
    delay(5);
  }
	delay(500);
  	Serial.println("Led ligado");
    delay(500);
  
  for(int j = 255; j>=0; j--){
    analogWrite(led, j);
    delay(5);
  }
  	delay(500);
  Serial.println("Led desligado");
	delay(500);
}