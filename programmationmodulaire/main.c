#include <stdio.h>
#include <stdlib.h> //les chevrons  < >  pour inclure un fichier se trouvant dans le r�pertoire "include" de l'IDE
#include "aire.h" // les guillemets " " pour inclure un fichier se trouvant dans le r�pertoire du projet (� c�t� des .c, g�n�ralement)

/**
Les fichiers que j'ai cr��s et plac�s dans le r�pertoire de mon projet doivent �tre inclus avec des guillemets ("aire.h)
Tandis que les fichiers correspondant aux biblioth�ques sont inclus entre chevrons (<stdio.h>)

Dans les fichiers .c on inclus les .h des biblioth�ques standard pour pouvoir utiliser des fonctions standard comme printf.
**/

int main()
{
    double resultat;
    resultat = airRectangle(10.0, 20.0);

    printf("L'aire du rectangle est %f\n", resultat);
    return 0;
}


/**
- Un programme contient des fichiers .c et chaque fichier .c a un petit fr�re du m�me nom
avec l'extension .h. Le .c contient les fonctions tandis que le .h contient les prototypes

- Le contenu des fichiers .h est inclus en haut des .c par le pr�processeur. Les .c sont transform�s
en fichier .o binaire par le compilateur. Les .o sont assembl�s en ex�cutable .exe par le "linker" aussi
appel� �diteur de liens.

- Une variable d�clar�e dans des une fonction est supprim�e � la fin de la fonction, elle n'est accessible
que dans cette fonction. Une variable d�clar�e dans une fonction avec static devant n'est pas supprim�e � la
fin de la fonction, elle conserve sa valeur au fur et � mesure de l'ex�cution du programme

- Une variable d�clar�e en dehors des fonctions est une variable globale, accessible depuis les fonctions
de tous les fichiers source du projet. Une variable globale avec static devant est globale uniquement dans le
fichier dans lequel elle se trouve, elle n'esy pas accessible depuis les fonctions des autres fichiers

- Une fonction est par d�faut accessible depuis tous les fichiers du projet, on peut l'appeler depuis n'importe
quel autre fichier. Si on veut qu'une fonction ne soit accessible que dans le fichier dans lequel elle se trouve
il faut ajouter static devant
**/
