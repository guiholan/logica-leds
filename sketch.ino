const byte leds [8]={2,3,4,5,6,7,8,9};
int botao1 = 10;
int botao2 = 11;
byte botaoboolean = true;

void setup() {
for(int i = 0; i<=8;i++){
 pinMode(leds[i], OUTPUT);
}
pinMode(botao1,INPUT); 
pinMode(botao2,INPUT);
}

void loop() {
  

if(digitalRead(botao1)==HIGH){
for(int i = 0 ;i<=8;i++){
  for(int j = 0 ;j<=8;j++){
    digitalWrite(leds[j], LOW);
  }
 digitalWrite(leds[i], HIGH);
 delay(500);
}
 }
 if(digitalRead(botao2)==HIGH){
for(int i = 9 ;i>=0;i--){
  for(int j = 0 ;j<=8;j++){
    digitalWrite(leds[j], LOW);
  }
 digitalWrite(leds[i], HIGH);
 delay(500);
}
 }
}
