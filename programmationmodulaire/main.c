#include <stdio.h>
#include <stdlib.h> //les chevrons  < >  pour inclure un fichier se trouvant dans le répertoire "include" de l'IDE
#include "aire.h" // les guillemets " " pour inclure un fichier se trouvant dans le répertoire du projet (à côté des .c, généralement)

/**
Les fichiers que j'ai créés et placés dans le répertoire de mon projet doivent être inclus avec des guillemets ("aire.h)
Tandis que les fichiers correspondant aux bibliothèques sont inclus entre chevrons (<stdio.h>)

Dans les fichiers .c on inclus les .h des bibliothèques standard pour pouvoir utiliser des fonctions standard comme printf.
**/

int main()
{
    double resultat;
    resultat = airRectangle(10.0, 20.0);

    printf("L'aire du rectangle est %f\n", resultat);
    return 0;
}


/**
- Un programme contient des fichiers .c et chaque fichier .c a un petit frère du même nom
avec l'extension .h. Le .c contient les fonctions tandis que le .h contient les prototypes

- Le contenu des fichiers .h est inclus en haut des .c par le préprocesseur. Les .c sont transformés
en fichier .o binaire par le compilateur. Les .o sont assemblés en exécutable .exe par le "linker" aussi
appelé éditeur de liens.

- Une variable déclarée dans des une fonction est supprimée à la fin de la fonction, elle n'est accessible
que dans cette fonction. Une variable déclarée dans une fonction avec static devant n'est pas supprimée à la
fin de la fonction, elle conserve sa valeur au fur et à mesure de l'exécution du programme

- Une variable déclarée en dehors des fonctions est une variable globale, accessible depuis les fonctions
de tous les fichiers source du projet. Une variable globale avec static devant est globale uniquement dans le
fichier dans lequel elle se trouve, elle n'esy pas accessible depuis les fonctions des autres fichiers

- Une fonction est par défaut accessible depuis tous les fichiers du projet, on peut l'appeler depuis n'importe
quel autre fichier. Si on veut qu'une fonction ne soit accessible que dans le fichier dans lequel elle se trouve
il faut ajouter static devant
**/
