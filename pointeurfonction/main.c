#include <stdio.h>
#include <stdlib.h>

// Je cr�e une fonction tryple de type void avec un pointeur
void triple(int * nombre)
{
    *nombre *= 3;
}

int main()
{
    int value = 10;
    int* pointeur = &value; // J'assigne au pointeur l'adresse de value

    triple(pointeur); // Je passe le pointeur en param�tre dans la fonction triple
    printf("La valeur de value : %d\n", value);
    return 0;
}

/*
NE PAS METTRE le symbole & devant un pointeur dans la fonction scanf !
Le pointeur contient lui-m�me l'adresse de la variable, inutile de mettre & !
*/

/*
Les pointeurs constituent une notion essentielle du langage C,
mais n�anmoins un peu complexe au d�but. Il faut prendre le temps de bien comprendre
comment ils fonctionnent, car beaucoup d'autres notions sont bas�es dessus.
*/
