#include <stdio.h>
#include <stdlib.h>


#include <math.h> //La biblioth�que math�matique
/*
math.h est une biblioth�que qui contient de nombreuses fonctions math�matiques toutes pr�tes
On peut par exemple faire des des puissances, calculer un carr� "5$^2$"

- Les op�rations connues par l'ordinateur sont tr�s basique :
l'addition, la soustraction, la multiplication, la division et le modulo (le reste de la division)
- Il est possible d'effectuer des calculs entre variables
- Pour augmenter le nombre d'op�rations connues par l'ordinateur il faut charger math.h
Cette biblioth�que contient des fonctions math�matiques plus avanc�es
*/

// Faire des calculs avec des variables

int main()
{
    //int resultat = 0;

    // L'addiction :

    //resultat = 5 + 3;
    //printf("5 + 3 = %d", resultat);

    // La division :

    //resultat = 5/ 2;
    //printf("5 / 2 = %d", resultat); // Le r�sultat est tronqu� il ne garde que la partie enti�re car c'est un type int
    //printf ("5 / 2 = %lf", resultat); // On transforme le r�sultat en type double

    // Le modulo :

    /*
    Le modulo est une op�ration math�matique qui permet d'obtenir le reste d'une division
    Exemple : 5 % 2 = 1 ou 14 % 3 = 2
    */

    // Faire des calculs entre variable :

    int resultat = 0, nombre1 = 0, nombre2 = 0;
    //On demande les nombres 1 et 2 � l'utilisateur
    printf("Entre le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entre le nombre 2 : ");
    scanf("%d", &nombre2);
    //On fait le calcul
    resultat = nombre1 + nombre2;
    //On affiche l'addition � l'�cran
    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    // Notre programme est capable d'additionner deux nombres et d'afficher le r�sultat de l'op�ration

    // L'incr�mentation :

    nombre = nombre +1; // On fait le calcule "nombre + 1" et on range le r�sultat dans la variable "nombre"
    nombre++; // Cette ligne signifie "ajoute 1 � la variable nombre"

    // La d�cr�mentation :

    // La d�cr�mentation  c'est l'inverse de l'incr�mentation : on enl�ve 1 � une variable

    nombre = nombre - 1;
    nombre--;

    // Il existe d'autres raccourcis qui fonctionne avec les op�rations de bases : + - * / %

    // Exemple :

    nombre = nombre *2;
    nombre *=2; // Si le nombre vaut 5 au d�part, il vaudra 10 apr�s cette instruction

    int nombre = 2;
    nombre += 4; // nombre vaut 6
    nombre -= 3; // nombre vaut 3
    nombre *+ 5; // nombre vaut 15
    nombre /= 3; // nombre vaut 5
    nombre %= 3; // nombre vaut 2 car 5 = 1 * 3 + 2

    return 0;
}
