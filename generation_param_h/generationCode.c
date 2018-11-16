#include <stdio.h>
#include <stdlib.h>

int ouvrirFichier(int f)
{
    f = fopen("D:\\Users\\User\\Desktop\\Projet\\generateur_param_h\\coeur\\param.h", "w");

    if (f == NULL){
        printf("Erreur lors de la manipulation du fichier param.h !\n");
    }
    else{
        printf("Generation du fichier de parametres associe\n");
    return f;
    }
}


int fermerFichier(int f)
{
    if (f !=NULL)
    {
        fclose(f);
        printf("Vos parametres sont pret !\n");
    }
    else
        printf("Erreur, fermeture impossible !\n");
}


void parametres(int f, int debutTab, int finTab, int delai)
{
    fprintf(f, "#ifndef PARAM_H_INCLUDED\n#define GENERATIONCODE_H_INCLUDED\n\n");
    fprintf(f, "#define DEBUT_TAB %d\n#define FIN_TAB %d\n#define DELAI %d\n\n",debutTab,finTab,delai);
    fprintf(f, "#endif");
}


