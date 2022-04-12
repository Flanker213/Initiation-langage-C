#include <stdio.h>
#include <stdlib.h>

// Je crée une fonction tryple de type void avec un pointeur
void triple(int * nombre)
{
    *nombre *= 3;
}

int main()
{
    int value = 10;
    int* pointeur = &value; // J'assigne au pointeur l'adresse de value

    triple(pointeur); // Je passe le pointeur en paramètre dans la fonction triple
    printf("La valeur de value : %d\n", value);
    return 0;
}

/*
NE PAS METTRE le symbole & devant un pointeur dans la fonction scanf !
Le pointeur contient lui-même l'adresse de la variable, inutile de mettre & !
*/

/*
Les pointeurs constituent une notion essentielle du langage C,
mais néanmoins un peu complexe au début. Il faut prendre le temps de bien comprendre
comment ils fonctionnent, car beaucoup d'autres notions sont basées dessus.
*/
