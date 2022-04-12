#include <stdio.h> //Cette biblioth�que contient l'ensemble des informations relatives aux fonctions d'entr�e et de sortie, par exemple la fonction printf() ou scanf()
#include <stdlib.h> //Cette libraire propose des fonctions pour r�pondre � diff�rentes probl�matiques li�es � la conversion de donn�es et � l'allocation dynamique de m�moire
#include <time.h>
/*
Comp�tence �valu�es : Cr�er des algorithmes simples en C

Il s'agit d'un petit jeu "Plus ou moins"; le principe est le suivant :

1 - L'ordinateur tire au sort un nombre entre 1 et 100
2 - Il demande � l'utilisateur de deviner un nombre et entrez un nombre entre 1 et 100
3 - L'ordinateur compare le nombre entr� avec le nombre myst�re qu'il a tir� au sort et
    vous dit si le nombre myst�re est sup�rieur ou inf�rieur � celui entr�
4 - L'ordinateur redemande le nombre
5 - Il indique si le nombre myst�re est sup�rieur ou inf�rieur
6 - Ainsi de suite jusqu'a trouver le nombre myst�re

Le but du jeu est de trouver le nombre myst�re en un minimum de coups
*/

/*
Le main est une fonction pr�d�finie, c'est la premi�re fonction de chaque programme
qui est responsable du d�marrage de l'ex�cution et de la fin du programme
*/
int main()
{

    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    // G�n�ration du nombre al�atoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /*
    La fonction rend() renvoie un entier, il faut que la variable soit de type int,
    il faut ensuite pr�ciser le nom de la variable nombreMystere et pour terminer
    initialiser cette variable gr�ce � l'op�rateur = avec un entier
    */

    /*
    La boucle du programme, elle se r�p�te tant que l'utilisateur n'a pas trouv� le nombre myst�re
    */

    /*
    La boucle while et la boucle do..while sont utilis�es pour r�p�ter une section de code
    */

    do
    {

        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        /*
        La fonction scanf() permet de lire les informations tap�es au clavier par l'utilisateur
        selon un certain format. Les informations lues sont converties en caract�res, entiers ou
        r�els suivant le format attendu. Il faut pr�ciser le format dans le premier param�tre et
        l'adresse de la variable ou l'on souhaite stocker la saisie dans le  second param�tre

        Dans mon cas la variable est un int donc le format est %d et l'adresse de la variable est &nombreEntre
        */

        // On compare le nombre entr� avec le nombre myst�re

        /*
        Si  nombreMystere  est plus grand que  nombreEntre  il faut afficher  "C�est plus !"
        Si  nombreMystere  est plus petit que  nombreEntre  il faut afficher  "C�est moins !"
        Sinon, l�utilisateur a gagn� et on affiche "Bravo, vous avez trouve le nombre mystere !!!"
        */

        if (nombreMystere > nombreEntre)
            printf("C'est plus ! \n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere);
    /*
    Pour arr�ter la boucle lorsque le nombre myst�re enregistr� dans la variable nombreMystere est �gale � la variable
    nombreEntre qui contient la valeur entr�e. La condition pour rester � l'int�rieur de la boucle est que :
    nombreEntre soit diff�rent de nombreMystere : nombreEntre != nombreEntre
    */

    return 0;

    /*
    L'instruction retun 0 indique qu'on arrive � la fin de la fonction main et demande de renvoyer la valeur 0.
    En pratique 0 signifie que tout s'est bien pass� et n'importe quelle autre valeur signifie erreur.
    */
}
