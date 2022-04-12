#include <stdio.h> //Cette bibliothèque contient l'ensemble des informations relatives aux fonctions d'entrée et de sortie, par exemple la fonction printf() ou scanf()
#include <stdlib.h> //Cette libraire propose des fonctions pour répondre à différentes problématiques liées à la conversion de données et à l'allocation dynamique de mémoire
#include <time.h>
/*
Compétence évaluées : Créer des algorithmes simples en C

Il s'agit d'un petit jeu "Plus ou moins"; le principe est le suivant :

1 - L'ordinateur tire au sort un nombre entre 1 et 100
2 - Il demande à l'utilisateur de deviner un nombre et entrez un nombre entre 1 et 100
3 - L'ordinateur compare le nombre entré avec le nombre mystère qu'il a tiré au sort et
    vous dit si le nombre mystère est supérieur ou inférieur à celui entré
4 - L'ordinateur redemande le nombre
5 - Il indique si le nombre mystère est supérieur ou inférieur
6 - Ainsi de suite jusqu'a trouver le nombre mystère

Le but du jeu est de trouver le nombre mystère en un minimum de coups
*/

/*
Le main est une fonction prédéfinie, c'est la première fonction de chaque programme
qui est responsable du démarrage de l'exécution et de la fin du programme
*/
int main()
{

    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    // Génération du nombre aléatoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /*
    La fonction rend() renvoie un entier, il faut que la variable soit de type int,
    il faut ensuite préciser le nom de la variable nombreMystere et pour terminer
    initialiser cette variable grâce à l'opérateur = avec un entier
    */

    /*
    La boucle du programme, elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère
    */

    /*
    La boucle while et la boucle do..while sont utilisées pour répéter une section de code
    */

    do
    {

        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        /*
        La fonction scanf() permet de lire les informations tapées au clavier par l'utilisateur
        selon un certain format. Les informations lues sont converties en caractères, entiers ou
        réels suivant le format attendu. Il faut préciser le format dans le premier paramètre et
        l'adresse de la variable ou l'on souhaite stocker la saisie dans le  second paramètre

        Dans mon cas la variable est un int donc le format est %d et l'adresse de la variable est &nombreEntre
        */

        // On compare le nombre entré avec le nombre mystère

        /*
        Si  nombreMystere  est plus grand que  nombreEntre  il faut afficher  "C’est plus !"
        Si  nombreMystere  est plus petit que  nombreEntre  il faut afficher  "C’est moins !"
        Sinon, l’utilisateur a gagné et on affiche "Bravo, vous avez trouve le nombre mystere !!!"
        */

        if (nombreMystere > nombreEntre)
            printf("C'est plus ! \n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere);
    /*
    Pour arrêter la boucle lorsque le nombre mystère enregistré dans la variable nombreMystere est égale à la variable
    nombreEntre qui contient la valeur entrée. La condition pour rester à l'intérieur de la boucle est que :
    nombreEntre soit différent de nombreMystere : nombreEntre != nombreEntre
    */

    return 0;

    /*
    L'instruction retun 0 indique qu'on arrive à la fin de la fonction main et demande de renvoyer la valeur 0.
    En pratique 0 signifie que tout s'est bien passé et n'importe quelle autre valeur signifie erreur.
    */
}
