#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
#include "generationCode.h"


int main()
{
	
    FILE* param = NULL;
    param = fopen("param.h","w+");
  

    int choix,choix2;

    if(param!=NULL)
    {
        do
    {
    choix = affichermenu();

    choix2 = ChoixAllumage(param,&choix);
    }
    while(choix != 0);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
        fclose(param);
        exit(0);
    }

    return 0;
}
