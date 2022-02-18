/*
Les deux premières lignes sont des lignes spéciales facilement reconnaissables
car elles commencent par un "#"
Ces lignes spéciales on les appelle "directive de préprocesseur"
Ces lignes seront lues par un programme appelé "préprocesseur", un programme
qui se lance au début de la compilation
/*

/*
Le mot "include" demandent d'inclure des fichiers au projet
On appelle ces deux fichier "stdio.h" et "stdlib." des "bibliothèques" ou "librairies"
Ces deux bibilothèques permettent d'afficher du texte à l'écran
*/

#include <stdio.h>
#include <stdlib.h>

/*
La fonction "main" qui est la principale fonction du programme
C'est toujours par la fonction "main" que le programme commence
Dans notre fonction "main" on fait appel à la fonction "printf"
C'est une fonction qui en appelle une autre : "main" appelle "printf"
Pour faire appel à une fonction il suffit d'écrire son nom suivi de "()" puis de ";"
*/

int main(int argc, char *argv[]) //Peut aussi s'écrire "int main()"
{
//Les lignes à l'intérieur de la fonction on les appelle "instruction"
//Toute instruction se termine obligatoirement par un point-virgule ";"

    printf("Bonjour\n");    //"printf()" demande d'afficher un message à l'écran
                            //"\n" retour à la ligne (= "Entrée")
                            //"\t" tabulation
    return 0;               //Cette ligne indique qu'on arrive à la fin de notre fonction "main" et demande de renvoyer la valeur 0
}

/*
En résumé :

- Un programme est constitué d'instructions qui se terminent toutes par un point-virgule
- Les instructions sont contenues dans des fonctions qui permettent de les classer comme dans des boîtes
- La fonction "main" est la fonction par laquelle démarre le programme
C'est la seule qui soit obligatoire, aucun programme ne peut être compilé sans elle.
- "printf" est une fonction toute prête qui permet d'afficher un message à l'écran dans une console.
Elle se trouve dans une bibliothèque où l'on retrouve de nombreuses autres fonctions prêtes à l'emploi
*/
