#include <stdio.h>
#include <stdlib.h>

/*
Une boucle est une technique qui permet de r�p�ter les m�mes instructions plusieurs fois

Comme les conditions il y a plusieurs fa�on de r�aliser des boucles :

1 - while
2 - do.. while
3 - for

Dans tous les cas le principe est le m�me :

1 - L'ordinateur lit les instruction
2 - Une fois arriv� � la fin de la boucle il repart � la premi�re instruction
3 - Il recommence � lire les instructions
4 - Il repart au debut de la boucle

Quand on cr�e une boucle on indique toujours une condition
Cette condition signifiera "r�p�te la boucle tant que cette condition est vraie"
*/

int main() {

/*
// Voici comment on construit une boucle while
int nombreEntre = 0;

while (nombreEntre != 47) // Je demande � l'utilisateur de taper le nombre 47 et tant qu'il ne le fait pas le programme ne pourra s'arr�ter
// La boucle while se r�p�te tant qu'on n'a pas tap� 47
{
    printf("Tapez le nombre 47 ! ");
    scanf("%d", &nombreEntre);

}
*/

// Maintenant je veux que ma boucle se r�p�te un certain nombre de fois

/*
int compteur = 0; // Je cr�e la variable compteur qui vaut z�ro au d�but du programme que je vais incr�menter au fur � mesure

while (compteur < 10)
{
    printf("Bienvenue sur mon GitHub !\n");
    compteur++; // L'incr�mentation consiste � ajouter 1 � la variable comme dans l'exemple (jusqu'a 10 dans notre cas)
}
*/

/*
- Au d�part la variable compteur initialise � 0. Elle vaut donc 0 au d�but du programme
- La boucle while ordonne la r�p�tition TANT QUE compteur est inf�rieur � 10 et comme le compteur vaut 0 au d�part
alors on rentre dans la boucle
- J'affiche "Bienvenue sur mon GitHub" via printf
- Grace � compteur++ j'incr�mente la valeur de la variable compteur qui valait 0, elle vaut maintenant 1
- J'arrive � la fin de la boucle (accolade fermante) donc je repars au d�but, au niveau du while pour faire
le test "Est-ce que le compteur est toujours inf�rieur � 10". Oui car compteur vaut 1, on recommence donc les instructions
jusqu'a ce que compteur va valoir progressivement 0,1,2,3,4,5,6,7,8,9,10 et lorsque le compteur vaut 10, la condition
compteur < 10 est fausse et comme l'instruction est fausse, on sort donc de la boucle.
*/

/*
Attention aux boucles infinies ! Lors de la cr�ation d'une boucle il faut s'assurer qu'elle puisse s'arr�ter
� un moment ! Si la condition est toujours vraie, le programme ne s'arr�tera jamais !
*/

/*
Pour arr�ter un programme avec une boucle infinie sous Windows, il faut fermer la console en cliquant sur la croix
sinon sous Mac ou Linux, il faut faire Ctrl + C
*/

// La boucle do.. while

// La boucle do.. while sn'executera toujours au moins une fois car le test se fait � la fin

/*
int compteur = 0;

do // Attention le ";" ne se place qu'� la fin de la boucle do.. while
{
    printf("Bienvenue sur mon GitHub !\n");
    compteur++;
} while (compteur < 10); // Le point virgule ";" se met apr�s le while sinon le programme plantera
*/

// La boucle for

int compteur; // Je n'initialise pas la variable compteur � 0 d�s sa d�claration

for (compteur = 0; compteur < 10; compteur++)
    // Il n'y a pas de compteur++
    // La premi�re instruction est utilis�e pour pr�parer la variable compteur. Je l'initialise � 0
    // Tant que la condition est vraie, la boucle continue
    // L'incr�mentation est execut�e � la fin de chaque tour de boucle pour mettre � jour la variable compteur
    // L'initialisation; La condition; L'incr�mentation
{
    printf("Bienvenue sur mon GitHub !\n");

    // Les instructions :
    // break permet d'arr�ter lexecution de la boucle et sortir pr�matur�ment de la boucle sans lancer l'instruction suivante
    // continue permet de passer directement � l'it�ration suivante sans ex�cuter les lignes d'it�ration courante

    // for est probablement celle qu'on utilise le plus. On y fait tr�s souvent des incr�mentations ou des d�cr�mentations de variables.
}



    return 0;
}
