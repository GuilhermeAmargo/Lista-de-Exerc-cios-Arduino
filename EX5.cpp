int amarelo = 10; // OR
int verde = 9;    // AND
int vermelho = 8; // XOR
int botA = 7;
int botB = 6;
bool memoryA = false;
bool memoryB = false;

void setup(){
    Serial.begin(9600);

    for(int i = 8; i<=10; i++){
        pinMode(i, OUTPUT);
    }

    for(int j = 6; j<=7; j++){
        pinMode(j, INPUT);
    }
}

void loop(){
    memoryA = digitalRead(botA);
    memoryB = digitalRead(botB);

    OR();
    AND();
    XOR();

}

void OR (){
    if(memoryA == LOW && memoryB == LOW){
        digitalWrite(amarelo, 0);
        Serial.println("XOR: 0");
    } else {
        digitalWrite(amarelo, 1);
        Serial.println("XOR: 1");
    }
}

void AND (){
    if(memoryA == HIGH && memoryB == HIGH){
        digitalWrite(verde, 1);
        Serial.println("AND: 1")
    } else {
        digitalWrite(verde, 0);
        Serial.println("AND: 0");
    }
}

void XOR (){
    if (memoryA == HIGH && memoryB == LOW || memoryA == LOW && memoryB == HIGH){
        digitalWrite(vermelho, 1);
        Serial.println("XOR: 1");
    } else {
        digitalWrite(vermelho, 0);
        Serial.println("XOR: 0");
}
}

