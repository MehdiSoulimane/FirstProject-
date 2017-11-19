
//Projet A1 Groupe 3:
  int Led1,Led2,Led3,Led4,Led5,Led6,Led7,Led8;     //declaration des LED 
  unsigned long time;
void setup()
{ 
Led1 = 12;                                      // chaque LED doit etre associé a un port d'arduino 
  Led2 = 2;
  Led3 = 3;
  Led4 = 4;
  Led5 = 5;
  Led6 = 6;
  Led7 = 13;
  Led8 = 8;
  pinMode(Led1, OUTPUT);                 // configuration des LED en mode sortie OUTPUT                 
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);

  
   Serial.begin(9600);

}
void loop()
{
 digitalWrite(Led1, HIGH);                   // La LED 1 s'allumme 
    delay(250);                                 // elle s'eteint apres 250ms
     digitalWrite(Led2, HIGH);                      // La LED 2 s'allume
    delay(250);                                 // Et ainsi de suite..
   
    digitalWrite(Led3, HIGH);
    delay(250);
   
    digitalWrite(Led4, HIGH);
    delay(250);
  
    digitalWrite(Led5, HIGH);
    delay(250);
  
    digitalWrite(Led6, HIGH);
    delay(250);
    
    digitalWrite(Led7, HIGH);
    delay(250);
  
    digitalWrite(Led8, HIGH);
    delay(250);

 digitalWrite(Led8, LOW);
   digitalWrite(Led7, LOW);
    digitalWrite(Led6, LOW);
     digitalWrite(Led5, LOW);
      digitalWrite(Led3, LOW);
       digitalWrite(Led2, LOW);
        digitalWrite(Led1, LOW);
         digitalWrite(Led4, LOW);
    
  
   int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  time = millis();

  Serial.println(time);    //afficher le temp depuis le debut de l'excution
  delay(1000);             

  
  
  }
