int bits = 0;
int led = 9;
void setup (){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop (){
    bits = analogRead(A0)/4;
    Serial.println(bits);
    analogWrite(led, bits);
}