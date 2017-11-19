#include "Cardio.h"
#include <Arduino.h>


int Pouls_Actuel()
{
  int valeurPrecedente = 0;
  long tempsPrecedent = 0;
  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) 
  {
    if (valeurPrecedente <= valeurSeuil) 
    { 
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200))
      {
	  
        Serial.println(valeurActuelle);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
int  Delais_Du_Programme()
{
  Serial.println("Time: ");
  int Time = millis();
  Serial.println(Time);
}
