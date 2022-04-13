#include <stdio.h>
#include <stdlib.h>

/*
Les tableaux sont une suite de variable de même type, tockées côte à côte en mémoire.
Il s'agit d'une grosse variable pouvant contenir plusieurs nombres du même type :
long, int, char, double...

Un tableau a une dimentsion bien précise. Il peut occuper 2, 3, 10, 150, 2500 cases.
*/

/*
Si le tableau est de type int alors chaque case du tableau contiendra un int.
On ne peut pas faire de tableau contenant à la fois des int et des double.
*/

/*
Un tableau commence à l'indice n°0; un tableau de 4 int a donc les indices 0, 1, 2 et 3.
*/

/*
Il est interdit d'utiliser une variable pour définir la taille d'un tableau lors de sa création
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
