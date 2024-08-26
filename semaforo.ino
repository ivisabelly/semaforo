int vermelho = 8;
int amarelo = 9;
int verde = 10;
int vermelhob= 11;
int verdeb= 12;
int botao = 2;

void setup(){
  pinMode(vermelho,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(vermelhob,OUTPUT);
  pinMode(verdeb,OUTPUT);
  pinMode(botao,INPUT_PULLUP);


  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelhob, LOW);
  digitalWrite(verdeb, HIGH);
}
void loop(){
  if(digitalRead(botao)== HIGH){//botao pressionado
    
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);//luz muda para amarelo
  delay(3000);
  digitalWrite(vermelho, HIGH);//depois vermelho
  digitalWrite(amarelo, LOW);
  delay(3000);
  digitalWrite(verdeb, HIGH);//para pedestres,luz muda p verde
  digitalWrite(vermelhob, LOW);
  delay(6000); //nesse estado por 6 segundos
  
  //pisca pisca(orochi)
    for(int i = 0; i < 5;i++){
  digitalWrite(verdeb,LOW);
  delay(2000);
  digitalWrite(verdeb, HIGH);
  delay(2000);
 }
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
    
  
  }
    
}