int rosso1 = 5;
int giallo1 = 6;
int verde1= 7;
int rosso2 = 10;
int giallo2= 11;
int verde2 = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode (rosso1, OUTPUT);
  pinMode (giallo1, OUTPUT);
  pinMode (verde1,OUTPUT);
  pinMode (rosso2, OUTPUT);
  pinMode (giallo2, OUTPUT);
  pinMode (verde2,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rosso1,HIGH);
digitalWrite(verde2,HIGH);
LampeggioVerde2();
delay (2000);
digitalWrite(giallo2,HIGH);
digitalWrite(giallo1,HIGH);
delay(2000);
digitalWrite(giallo2,LOW);
digitalWrite(rosso1,LOW);
digitalWrite(rosso2,HIGH);
digitalWrite(giallo1,LOW);
digitalWrite(verde1,HIGH);
delay(2000);
LampeggioVerde1();
digitalWrite(giallo1,HIGH);
delay(2000);
digitalWrite(giallo1,LOW);
digitalWrite(rosso1,LOW);




 
}
void LampeggioVerde1(){
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(verde1,LOW);
  delay(500);
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(verde1,LOW);
  delay(500);
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(verde1,LOW);
  delay(500);
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(verde1,LOW);
  


}
void LampeggioVerde2(){
  digitalWrite(verde2,HIGH);
  delay(500);
  digitalWrite(verde2,LOW);
  delay(500);
  digitalWrite(verde2,HIGH);
  delay(500);
  digitalWrite(verde2,LOW);
  delay(500);
  digitalWrite(verde2,HIGH);
  delay(500);
  digitalWrite(verde2,LOW);
  delay(500);
digitalWrite(verde2,HIGH);
  delay(500);
  digitalWrite(verde2,LOW);
 



}
