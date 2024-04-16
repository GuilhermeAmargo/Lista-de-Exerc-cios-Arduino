int botao = 2;
bool memory = false;

void setup(){
    
    Serial.begin(9600);
    Serial.println("Aperte o botao");

    pinMode(botao, INPUT);
}

void loop(){
    memory = digitalRead(botao);

    if(memory == HIGH){
        Serial.println("Botao: 1/Ligado");
    } else {
    	Serial.println("Botao: 0/Desligado");
    }
  delay(500);
        }