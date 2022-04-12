#include <stdio.h>
#include <stdlib.h>

// Définition de la fonction triple
int triple(int nombre)
{
    return 3 * nombre;
}

int main() // Le programme commence par la fonction main
{
    // On appelle la fonction triple
    int nombreEntre = 0, nombreTriple = 0;

    // On demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);

    // On envoie ce nombre entré à la fonction triple et on récupère le résultat dans la variable nombreTriple
    nombreTriple = triple(nombreEntre);
    printf("Le triple de ce nombre est %d\n", nombreTriple);

    return 0;
}

/**
- Les fonctions s'appellent entre elles. Le main peut appeler des fonctions toutes prêtes telles que printf ou scanf
ou des fonctions qu'on créées.

- Une fontion récupère en entrée des variables qu'on appelle les paramètres

- Elle effectue certaines opérations avec ces paramètres puis retourne une valeur à l'aide de l'instruction return
**/
