#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 10;

    printf("La valeur de la variable %d\n", variable); // Afficher la valeur de la variable avec %d
    printf("L'adresse de la variable %d\p", &variable); // Afficher l'adresse de la variable zvec %p + & devant la variable

    int* pointeur; // Je cr�e un pointeur avec le type + �toile + nom de variable
    pointeur = &variable; // Je stock dans le pointeur l'adresse de la variable

    printf("La valeur du pointeur est %p\n", pointeur); // Afficher la valeur contenue dans le pointeur
    printf("La valeur contenue dans le pointeur est %d\n", *pointeur); // Afficher contenue dans l'adresse

    return 0;

    /*
    - Chaque variable stock�e a une adresse pr�cise en m�moire
    - Les pointeurs sont semblables aux variables mais au lieu de stocker un nombre,
      elles stockent l'adresse ou se trouve la variable en m�moire
    - Si je place le symbole & devant un nom de variable, j'obtiens son adresse au lieu de sa valeur
    - Si je place le symbole * devant le nom de pointeur, j'obtiens la valeur de la variable stocjk�e � l'adresse indiqu�e par le pointeur

    - Faire afficher l'adresse de la variable dans la fonction printf() = utiliser %p (le p du mot pointeur) et mettre le symbole &
      devant la variable
    */

    /*
    Exemple :

    age d�signe la valeur de la variable
    &age d�signe l'adresse de la variable
    */
}
