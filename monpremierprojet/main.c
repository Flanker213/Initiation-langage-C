/*
Les deux premi�res lignes sont des lignes sp�ciales facilement reconnaissables
car elles commencent par un "#"
Ces lignes sp�ciales on les appelle "directive de pr�processeur"
Ces lignes seront lues par un programme appel� "pr�processeur", un programme
qui se lance au d�but de la compilation
/*

/*
Le mot "include" demandent d'inclure des fichiers au projet
On appelle ces deux fichier "stdio.h" et "stdlib." des "biblioth�ques" ou "librairies"
Ces deux bibiloth�ques permettent d'afficher du texte � l'�cran
*/

#include <stdio.h>
#include <stdlib.h>

/*
La fonction "main" qui est la principale fonction du programme
C'est toujours par la fonction "main" que le programme commence
Dans notre fonction "main" on fait appel � la fonction "printf"
C'est une fonction qui en appelle une autre : "main" appelle "printf"
Pour faire appel � une fonction il suffit d'�crire son nom suivi de "()" puis de ";"
*/

int main(int argc, char *argv[]) //Peut aussi s'�crire "int main()"
{
//Les lignes � l'int�rieur de la fonction on les appelle "instruction"
//Toute instruction se termine obligatoirement par un point-virgule ";"

    printf("Bonjour\n");    //"printf()" demande d'afficher un message � l'�cran
                            //"\n" retour � la ligne (= "Entr�e")
                            //"\t" tabulation
    return 0;               //Cette ligne indique qu'on arrive � la fin de notre fonction "main" et demande de renvoyer la valeur 0
}

/*
En r�sum� :

- Un programme est constitu� d'instructions qui se terminent toutes par un point-virgule
- Les instructions sont contenues dans des fonctions qui permettent de les classer comme dans des bo�tes
- La fonction "main" est la fonction par laquelle d�marre le programme
C'est la seule qui soit obligatoire, aucun programme ne peut �tre compil� sans elle.
- "printf" est une fonction toute pr�te qui permet d'afficher un message � l'�cran dans une console.
Elle se trouve dans une biblioth�que o� l'on retrouve de nombreuses autres fonctions pr�tes � l'emploi
*/
