#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(void)
{
	int choix = 0;
	
	printf("Bonjour ! Menu: \n 0. Quitter le programme \n 1.Lecture dans l'ordre du fichier. \n 2.Dans l'ordre croissant. \n 3. Dans l'ordre decroissant. \n 4.Recherche sequentielle. \n 5. moyenne des pouls. \n 6. Minimum et maximum du pouls. \n Veuillez faire votre choix :%d", choix);
scanf("%d", &choix );

  return choix;

}

