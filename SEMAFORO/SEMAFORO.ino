int rosso1 =  6;
int giallo1 = 4 ;
int verde1= 2 ;
int rosso2 = 12 ;
int giallo2= 10 ;
int verde2= 8 ;
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
  pinMode (rosso2, OUTPUT);
  pinMode (giallo2, OUTPUT);
  pinMode (verde2,OUTPUT);
  Serial.begin(9600);
  richiestaValoriLampeggi();
  richiestaValoritempoLampeggi();
  richiestaDuaratagiallo();
  richiestaDuarataVerde();
 
 

}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(rosso1,HIGH);
digitalWrite(verde2,HIGH);
delay(DurataVerde);
LampeggioVerde2();
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2 , HIGH);
delay(DurataGiallo);
digitalWrite(rosso1,LOW);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,HIGH);
digitalWrite(verde1,HIGH);
delay(DurataVerde);
LampeggioVerde1();
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH); 
delay(DurataGiallo);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso2,LOW);
}

void richiestaValoriLampeggi()   
{
  Serial.println ( "quanti lampeggi verdi?");
  while ( Serial.available() == 0)   {};
  numLampeggi  = Serial.readString().toInt();
}



void richiestaValoritempoLampeggi()   
{
  Serial.println ( "quanto tempo lampeggi verdi?");
  while ( Serial.available() == 0)   {};
  tempoLampeggi  = Serial.readString().toInt();
}


void richiestaDuaratagiallo()   
{
  Serial.println ( "quanto dura il giallo?");
  while ( Serial.available() == 0)   {};
  DurataGiallo = Serial.readString().toInt();
}



void richiestaDuarataVerde()   
{
  Serial.println ( "quanto dura il verde?");
  while ( Serial.available() == 0)   {};
  DurataVerde  = Serial.readString().toInt();
}




void LampeggioVerde1(){
  for (int i = 0; i<numLampeggi; i++)
  {
  digitalWrite(verde1,HIGH);
  delay(tempoLampeggi);
  digitalWrite(verde1,LOW);
  delay(tempoLampeggi);
  }
}



void LampeggioVerde2(){
  for (int i = 0; i< numLampeggi; i++)
  {
  digitalWrite(verde2,HIGH);
  delay(tempoLampeggi);
  digitalWrite(verde2,LOW);
  delay(tempoLampeggi);
  }
  
}
