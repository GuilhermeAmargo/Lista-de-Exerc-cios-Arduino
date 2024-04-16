int vermelho = 9;
int amarelo = 10;
int verde = 11;

String opcao = "";

void setup(){
    
    Serial.begin(9600);
    Serial.println("Escolha uma opção:\nR.(led vermelho)\nG.(led verde)\nY.(led amarelo)");
    

    for(int i=9; i<=11; i++){
        pinMode(i, OUTPUT);
    }
}

void loop(){
   if(Serial.available() > 0){
            opcao = Serial.readString();
     
            if(opcao == "R"){
                digitalWrite(vermelho, 1);
                digitalWrite(amarelo, 0);
                digitalWrite(verde, 0);
            }else if (opcao == "G"){
                digitalWrite(vermelho, 0);
                digitalWrite(amarelo, 0);
                digitalWrite(verde, 1);
            }else if (opcao == "Y"){
                digitalWrite(vermelho, 0);
                digitalWrite(amarelo, 1);
                digitalWrite(verde, 0);
            } else {
            Serial.println("Opcao invalida");
            }
   }
        }