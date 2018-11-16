#include <stdio.h>
#include <stdlib.h>

int menu(int choix)
{
     printf("8 8888        8 8 8888888888   `8.`8888.      ,8'          .8.          8 888888888o. 8888888 8888888888               ,o888888o.           .8.          8 888888888o.   8 8888888888   \n");
    printf("8 8888        8 8 8888          `8.`8888.    ,8'          .888.         8 8888    `88.      8 8888                    8888     `88.        .888.         8 8888    `88.  8 8888         \n");
    printf("8 8888        8 8 8888           `8.`8888.  ,8'          :88888.        8 8888     `88      8 8888                 ,8 8888       `8.      :88888.        8 8888     `88  8 8888         \n");
    printf("8 8888        8 8 8888            `8.`8888.,8'          . `88888.       8 8888     ,88      8 8888                 88 8888               . `88888.       8 8888     ,88  8 8888         \n");
    printf("8 8888        8 8 888888888888     `8.`88888'          .8. `88888.      8 8888.   ,88'      8 8888                 88 8888              .8. `88888.      8 8888.   ,88'  8 888888888888 \n");
    printf("8 8888        8 8 8888             .88.`8888.         .8`8. `88888.     8 888888888P'       8 8888                 88 8888             .8`8. `88888.     8 888888888P'   8 8888         \n");
    printf("8 8888888888888 8 8888            .8'`8.`8888.       .8' `8. `88888.    8 8888`8b           8 8888                 88 8888            .8' `8. `88888.    8 8888`8b       8 8888         \n");
    printf("8 8888        8 8 8888           .8'  `8.`8888.     .8'   `8. `88888.   8 8888 `8b.         8 8888                 `8 8888       .8' .8'   `8. `88888.   8 8888 `8b.     8 8888         \n");
    printf("8 8888        8 8 8888          .8'    `8.`8888.   .888888888. `88888.  8 8888   `8b.       8 8888                    8888     ,88' .888888888. `88888.  8 8888   `8b.   8 8888         \n");
    printf("8 8888        8 8 888888888888 .8'      `8.`8888. .8'       `8. `88888. 8 8888     `88.     8 8888                     `8888888P'  .8'       `8. `88888. 8 8888     `88. 8 888888888888 \n\n");
    printf("==========================MENU===============================\n\n");
    printf("Que faire sur ce coeur de LED?\n");
    printf("1 -> 1 LED sur 2\n2 -> 1 LED sur 3\n");
    printf("3 -> Allumage <chenille> (1 LED par 1)\n");
    printf("4 -> Allumage <chenille> (2 LED par 2)\n");
    printf("5 -> Allumage de l'ensemble (Allume/Eteint)\n");
    printf("6 -> Allumage chenille aller-retour\n");
    printf("Choix : ");

    scanf("%d", &choix);

    return choix;
}


int generation(int choix, int delai)
{
    FILE *f = NULL;
    f = ouvrirFichier(f);

    switch(choix)
    {
    case 1:
        parametres(f, 2, 4, 200);//led 1 sur 2
        //delai de 200 car c'est un ensemble qui est allumé
        break;
    case 2:
        parametres(f, 4,7,200);//led 1 sur 3
        break;
    case 3:
        parametres(f,7,19,delai-20);//chenille
        //on retire 20ms pour etre sur de finir avant 2 sec
        break;
    case 4:
        parametres(f,19,30,delai-10);//chenille 2 en 2
        break;
    case 5:
        parametres(f,0,2,200);//allumage de l'ensemble
        break;
    case 6:
        parametres(f,30,47,delai-20);//chenille aller-retour
        break;
    default:
        printf("Erreur, choix invalide !\n");
        break;
    }

    fermerFichier(f);
}
