#include <stdio.h>
#include <stdlib.h>

/*
Une boucle est une technique qui permet de répéter les mêmes instructions plusieurs fois

Comme les conditions il y a plusieurs façon de réaliser des boucles :

1 - while
2 - do.. while
3 - for

Dans tous les cas le principe est le même :

1 - L'ordinateur lit les instruction
2 - Une fois arrivé à la fin de la boucle il repart à la première instruction
3 - Il recommence à lire les instructions
4 - Il repart au debut de la boucle

Quand on crée une boucle on indique toujours une condition
Cette condition signifiera "répète la boucle tant que cette condition est vraie"
*/

int main() {

/*
// Voici comment on construit une boucle while
int nombreEntre = 0;

while (nombreEntre != 47) // Je demande à l'utilisateur de taper le nombre 47 et tant qu'il ne le fait pas le programme ne pourra s'arrêter
// La boucle while se répète tant qu'on n'a pas tapé 47
{
    printf("Tapez le nombre 47 ! ");
    scanf("%d", &nombreEntre);

}
*/

// Maintenant je veux que ma boucle se répète un certain nombre de fois

/*
int compteur = 0; // Je crée la variable compteur qui vaut zéro au début du programme que je vais incrémenter au fur à mesure

while (compteur < 10)
{
    printf("Bienvenue sur mon GitHub !\n");
    compteur++; // L'incrémentation consiste à ajouter 1 à la variable comme dans l'exemple (jusqu'a 10 dans notre cas)
}
*/

/*
- Au départ la variable compteur initialise à 0. Elle vaut donc 0 au début du programme
- La boucle while ordonne la répétition TANT QUE compteur est inférieur à 10 et comme le compteur vaut 0 au départ
alors on rentre dans la boucle
- J'affiche "Bienvenue sur mon GitHub" via printf
- Grace à compteur++ j'incrémente la valeur de la variable compteur qui valait 0, elle vaut maintenant 1
- J'arrive à la fin de la boucle (accolade fermante) donc je repars au début, au niveau du while pour faire
le test "Est-ce que le compteur est toujours inférieur à 10". Oui car compteur vaut 1, on recommence donc les instructions
jusqu'a ce que compteur va valoir progressivement 0,1,2,3,4,5,6,7,8,9,10 et lorsque le compteur vaut 10, la condition
compteur < 10 est fausse et comme l'instruction est fausse, on sort donc de la boucle.
*/

/*
Attention aux boucles infinies ! Lors de la création d'une boucle il faut s'assurer qu'elle puisse s'arrêter
à un moment ! Si la condition est toujours vraie, le programme ne s'arrêtera jamais !
*/

/*
Pour arrêter un programme avec une boucle infinie sous Windows, il faut fermer la console en cliquant sur la croix
sinon sous Mac ou Linux, il faut faire Ctrl + C
*/

// La boucle do.. while

// La boucle do.. while sn'executera toujours au moins une fois car le test se fait à la fin

/*
int compteur = 0;

do // Attention le ";" ne se place qu'à la fin de la boucle do.. while
{
    printf("Bienvenue sur mon GitHub !\n");
    compteur++;
} while (compteur < 10); // Le point virgule ";" se met après le while sinon le programme plantera
*/

// La boucle for

int compteur; // Je n'initialise pas la variable compteur à 0 dès sa déclaration

for (compteur = 0; compteur < 10; compteur++)
    // Il n'y a pas de compteur++
    // La première instruction est utilisée pour préparer la variable compteur. Je l'initialise à 0
    // Tant que la condition est vraie, la boucle continue
    // L'incrémentation est executée à la fin de chaque tour de boucle pour mettre à jour la variable compteur
    // L'initialisation; La condition; L'incrémentation
{
    printf("Bienvenue sur mon GitHub !\n");

    // Les instructions :
    // break permet d'arrêter lexecution de la boucle et sortir prématurément de la boucle sans lancer l'instruction suivante
    // continue permet de passer directement à l'itération suivante sans exécuter les lignes d'itération courante

    // for est probablement celle qu'on utilise le plus. On y fait très souvent des incrémentations ou des décrémentations de variables.
}



    return 0;
}
