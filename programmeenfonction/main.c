#include <stdio.h>
#include <stdlib.h>

// D�finition de la fonction triple
int triple(int nombre)
{
    return 3 * nombre;
}

int main() // Le programme commence par la fonction main
{
    // On appelle la fonction triple
    int nombreEntre = 0, nombreTriple = 0;

    // On demande � l'utilisateur d'entrer un nombre
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);

    // On envoie ce nombre entr� � la fonction triple et on r�cup�re le r�sultat dans la variable nombreTriple
    nombreTriple = triple(nombreEntre);
    printf("Le triple de ce nombre est %d\n", nombreTriple);

    return 0;
}

/**
- Les fonctions s'appellent entre elles. Le main peut appeler des fonctions toutes pr�tes telles que printf ou scanf
ou des fonctions qu'on cr��es.

- Une fontion r�cup�re en entr�e des variables qu'on appelle les param�tres

- Elle effectue certaines op�rations avec ces param�tres puis retourne une valeur � l'aide de l'instruction return
**/
