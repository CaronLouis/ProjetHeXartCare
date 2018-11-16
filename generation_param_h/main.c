#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int main()
{

    int choix =0;
    printf("========GENERATEUR DE PARAMETRES POUR LE COEUR DE LED========\n\n");
    choix = menu(choix);

    int delai, pouls;

    pouls = 52; //en attendant les valeurs de retour reelles

    if(pouls<=60)//les delais vont correspondrent au temps d'allumage
        delai = 125; //60 bpm max = 1/sec. On a 8 led : 125*8 = 1000 MS = 1sec
    else if(pouls>60&&pouls<=120)
        delai = 62;
    else
        delai = 30;

    generation(choix, delai);
    return 0;

}
