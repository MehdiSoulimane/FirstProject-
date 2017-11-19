#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int affichermenu()
{
    int choix = 0;

    printf("Bonjour ! Menu: \n 0. Quitter le programme \n 1.Toutes les LEDS clignotantes. \n 2.Une LED sur deux allumee. \n 3. Une LED sur trois allumee. \n 4.Mode chenille. \n 5. Une seule LED au choix allumee. \n Veuillez choisir un mode d'allumage:%d", choix);
scanf("%d", &choix );

    return choix;

}


