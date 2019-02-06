int rosso1 = 2 ;
int giallo1 = 4 ;
int verde1= 6 ;
int rosso2 = 8 ;
int giallo2= 9 ;
int verde2= 10 ;
int numLampeggi ;
int DurataGiallo;
int DurataRosso;
int DurataVerde;
int tempoLampeggi;
void setup() 
{
  // put your setup code here, to run once:
  pinMode (rosso1, OUTPUT);
  pinMode (giallo1, OUTPUT);
  pinMode (verde1,OUTPUT);
 

}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(rosso1,HIGH);
LampeggioVerde2();
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2 , HIGH);
digitalWrite(rosso1,LOW);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,HIGH);
LampeggioVerde1();
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH); 
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,LOW);
}

void richiestaValoriLampeggi()   
{
  Serial.print ( "quanti lampeggi verdi?");
  while ( Serial.available() == 0)   {};
  numLampeggi  = Serial.readString().toInt();
}



void richiestaValoritempoLampeggi()   
{
  Serial.print ( "quanto tempo lampeggi verdi?");
  while ( Serial.available() == 0)   {};
  tempoLampeggi  = Serial.readString().toInt();
}



void richiestaDurataRosso()   
{
  Serial.print ( "quanto dura il rosso?");
  while ( Serial.available() == 0)   {};
  DurataRosso = Serial.readString().toInt();
}



void richiestaDuaratagiallo()   
{
  Serial.print ( "quanto dura il giallo?");
  while ( Serial.available() == 0)   {};
  DurataGiallo = Serial.readString().toInt();
}



void richiestaDuarataVerde()   
{
  Serial.print ( "quanto dura il verde?");
  while ( Serial.available() == 0)   {};
  DurataVerde  = Serial.readString().toInt();
}




void LampeggioVerde1(){
  for (int i = 0; i<numLampeggi; i++)
  {
  digitalWrite(verde1,HIGH);
  digitalWrite(verde1,LOW);
  delay(tempoLampeggi);
  }
}



void LampeggioVerde2(){
  for (int i = 0; i< numLampeggi; i++)
  {
  digitalWrite(verde2,HIGH);
  digitalWrite(verde2,LOW);
  delay(tempoLampeggi);
  }
  
}
