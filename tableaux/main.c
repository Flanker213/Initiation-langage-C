#include <stdio.h>
#include <stdlib.h>

/*
Les tableaux sont une suite de variable de m�me type, tock�es c�te � c�te en m�moire.
Il s'agit d'une grosse variable pouvant contenir plusieurs nombres du m�me type :
long, int, char, double...

Un tableau a une dimentsion bien pr�cise. Il peut occuper 2, 3, 10, 150, 2500 cases.
*/

/*
Si le tableau est de type int alors chaque case du tableau contiendra un int.
On ne peut pas faire de tableau contenant � la fois des int et des double.
*/

/*
Un tableau commence � l'indice n�0; un tableau de 4 int a donc les indices 0, 1, 2 et 3.
*/

/*
Il est interdit d'utiliser une variable pour d�finir la taille d'un tableau lors de sa cr�ation
mais on peut utiliser une variable pour parcourir le tableau
*/

int main()
{
    int tableau[4], i = 0;
    tableau[0]= 10;
    tableau[1]= 15;
    tableau[2]= 132;
    tableau[3]= 13;


    for (i = 0; i < 4; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
