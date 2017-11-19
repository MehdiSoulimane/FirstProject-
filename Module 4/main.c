#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

int main()
{
   
int battements;

    int choix = 0;
    int choix2 = 0;
    
    if(battements!=NULL)
    {
      do
       {

        
        battements = ouvrirFichier();
        choix = menu();
        ChoixDuMenu(battements,&choix);
        _sleep(5000);
        system("CLS");
       }
       while(choix!=0);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
        fclose(battements);
        exit(0);
    }




}
