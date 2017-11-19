#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

int ChoixAllumage(FILE* param,int* choix)
{


    int choix3 = 0;


    if(*choix == 1)
    {
  
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define TOUTES_LED_CLIGNOTANTES",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Vous avez choisi le mode Toutes les LEDS clignotantes. \n");
        fclose(param);

    }
    else if(*choix == 2)
    {
  
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_1_SUR_2_ALLUMEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Vous avez choisi le mode une LED sur deux allumee. \n");
        fclose(param);
    }
     else if(*choix == 3)
    {

        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_1_SUR_3_ALLUMEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Vous avez choisi le mode une LED sur trois allumee. \n");
        fclose(param);
    }
    else if(*choix == 4)
    {
  
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define MODE_CHENILLE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Vous avez choisi le mode chenille. \n");
        fclose(param);
    }
    else if(*choix == 5)
    {
       
        choix3 = FonctionChoixLed(param);

    }
   
    
    return choix3;

}

int FonctionChoixLed(FILE* param)
{
        int choix2 = 0;

        printf("Quelle LED voulez-vous allumer ?\n");
        scanf("%d",&choix2);


	
        if(choix2 == 1)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_1",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La premiere LED s'allume \n");
        fclose(param);
        }
        else if(choix2 == 2)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_2",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La deuxieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 3)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_3",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La troisieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 4)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_4",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La quatrieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 5)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_5",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La cinquieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 6)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_6",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La sixieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 7)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_7",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La septieme LED s'allume\n");
        fclose(param);
        }
        else if(choix2 == 8)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_8",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("La huitieme LED s'allume\n");
        fclose(param);
        }
       

        return choix2;

}
