#include <stdio.h>
#include <stdlib.h>


#include <math.h> //La bibliothèque mathématique
/*
math.h est une bibliothèque qui contient de nombreuses fonctions mathématiques toutes prêtes
On peut par exemple faire des des puissances, calculer un carré "5$^2$"

- Les opérations connues par l'ordinateur sont très basique :
l'addition, la soustraction, la multiplication, la division et le modulo (le reste de la division)
- Il est possible d'effectuer des calculs entre variables
- Pour augmenter le nombre d'opérations connues par l'ordinateur il faut charger math.h
Cette bibliothèque contient des fonctions mathématiques plus avancées
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
    //printf("5 / 2 = %d", resultat); // Le résultat est tronqué il ne garde que la partie entière car c'est un type int
    //printf ("5 / 2 = %lf", resultat); // On transforme le résultat en type double

    // Le modulo :

    /*
    Le modulo est une opération mathématique qui permet d'obtenir le reste d'une division
    Exemple : 5 % 2 = 1 ou 14 % 3 = 2
    */

    // Faire des calculs entre variable :

    int resultat = 0, nombre1 = 0, nombre2 = 0;
    //On demande les nombres 1 et 2 à l'utilisateur
    printf("Entre le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entre le nombre 2 : ");
    scanf("%d", &nombre2);
    //On fait le calcul
    resultat = nombre1 + nombre2;
    //On affiche l'addition à l'écran
    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    // Notre programme est capable d'additionner deux nombres et d'afficher le résultat de l'opération

    // L'incrémentation :

    nombre = nombre +1; // On fait le calcule "nombre + 1" et on range le résultat dans la variable "nombre"
    nombre++; // Cette ligne signifie "ajoute 1 à la variable nombre"

    // La décrémentation :

    // La décrémentation  c'est l'inverse de l'incrémentation : on enlève 1 à une variable

    nombre = nombre - 1;
    nombre--;

    // Il existe d'autres raccourcis qui fonctionne avec les opérations de bases : + - * / %

    // Exemple :

    nombre = nombre *2;
    nombre *=2; // Si le nombre vaut 5 au départ, il vaudra 10 après cette instruction

    int nombre = 2;
    nombre += 4; // nombre vaut 6
    nombre -= 3; // nombre vaut 3
    nombre *+ 5; // nombre vaut 15
    nombre /= 3; // nombre vaut 5
    nombre %= 3; // nombre vaut 2 car 5 = 1 * 3 + 2

    return 0;
}
