#include <stdio.h>
#include <stdlib.h>

/*
Les conditions permettent de tester des variables. Sans conditions nos programmes feraient toujours la même chose.
On peut par exemple dire "si la variable truc est égale à 50, fais ceci"
*/

/*
Avant de voir comment écrire des condition, il faut connaître les symboles de base.
Voici un tableau récapitulatif à connaître par coeur :

____________________________________
|Symbole | Signification           |
------------------------------------
|  ==    | est égal à              |
|  >     | est supérieur à         |
|  <     | est inférieur à         |
|  >=    | est supérieur ou égal à |
|  <=    | est inférieur ou égal à |
|  !=    | est différent de        |
------------------------------------

ATTENTION à ne pas confondre le symbole "==" pour tester l'égalité et "=" pour affecter une valeur !
*/


int main()
{
    //Ouvrir une condition avec un if :
    /*
    En anglais if se traduit par "si". On l'utilise pour introduire une condition.
    Pour ouvrire une condition avec if :
    1 - On commence par écrire if
    2 - On ouvre des paenthèses (à l'intérieur de ces parenthèses on écrit une condition)
    3 - On oure une accolade { qu'on referme un peu plus loin } et tout ce qui se trouve à l'intérieur sera exécuté
    uniquement si la condition est vérifiée

    Cela nous donne :

    if (votre condition)
    {

        Instructions à exécuter si la condition est vraie
    }
    */

    // Ici on va tester la variable age avec si vous êtes majeur c-a-d si votre âge est supérieur ou égal à 18

    int age = 20; // Ne pas oublier de déclarer la variable avant de tester une condition..
    // La variable age vaut 20 donc vous êtes majeur mais si on modifie 15 la condition est fausse et donc "vous êtes majeur" ne s'affichera pas
    //if (age >= 18) // Si il n'y a aucune instruction entre les () elles deviennet facultatives mais il est recommandé de les garder
    //{
    //    printf("Vous etes majeur !\n");
    //}

    // Instruction alternative avec else if :
    /*
    if (age >= 18) // Si l'age est supérieur ou égal à 18
    {
        printf("Vous êtes majeur !");
    }
        else if (age > 4) // Sinon, si l'âge est au moins supérieur à 4
        {
            printf("Bon t'es pas trop jeune quand meme...");
        }
        else // Sinon
        {
            printf("Aga aga aga gaaa"); // Langage bébé
        }
        */
        /*
        L'ordinateur faire les tests dans l'ordre suivant :
        1 - Il teste le premier if, si la condition est vraie il exécute ce qui se trouve entre les accolade
        2 - Sinon il va au else if "sinon si" et fait à nouveau un test, si c'est vrai alors il exécute les instruction
        3 - Si aucun des tests précédents n'a marché il exécute les instruction du "sinon" else
        */

    // Tester plusieurs conditions à la fois :

    /*
    ___________________________
    | Symbole | Signification |
    ---------------------------
    |  &&     |     ET        |
    |  ||     |     OU        |
    |  !      |     NON       |
    ---------------------------
    */


    //if (age > 18 && age < 25) // On peut tester si l'âge est supérieur à 18 ET si l'âge est inférieur à 25

    /*
    // Notre test pour ouvrir un compte en banque avec la condition d'avoir plus de 30 ans et 100 000 euros
    int argent = 250000;

    if (age > 30 || argent > 100000)
    {
        printf("Bienvenue chez PicsouBanque !");
    }
    else
    {
        printf("Hors de ma vue, miserable !");
    }
    */

    // Conditions de type vrai/faux avec les booléens :
    /*
    if (1) // Il n'y a pas de condition dans le if, juste un nombre. 1 = true / 2 = false
    {
        printf("C'est vrai");
    }
    else
    {
        printf("C'est faux");
    }
    */

    int majeur = 0; // On dit qu'une variable à laquelle on fait prendre les valeurs 0 et 1 est booléen qui est : 0 = faux; 1 = vrai

    // En langage C il n'existe pas de type variable booléen, on est donc obligé d'utiliser un type entier comme int pour gérer les booléens
    /*
    majeur = age >= 18;
    printf("Majeur vaut : %d\n", majeur);
    */

    // Souvent on fera un if sur une variable booléenne :
    /*
    if (majeur)
    {
        printf("Vous etes majeur !");
    }
    else
    {
        printf("Vous etes mineur");
    }
    */

    /*
    Il faut retenir qu'une variable censée contenir un nomre (comme un age, on fait un test sous la forme :
                                                              if (variable ==1)
    Si au contraire la variable est censée contenir un booléen c-a-d soit 1 ou 0 pour dire vrai ou faux on
    fait le test sous la forme : if (variable)
    */

    //On optimise le code avec la condition switch

    /*
    Pour éviter d'avoir à faire des répétions quand on test une valeur d'une seule et même variable, il exist le switch
    1 - On écrit switch(maVariable) pour dire que je vais tester la valeur de la variable
    2 - A l'intérieur des accolades on gère tous les cas : case 2, case 4, case 5, etc...

    On met également une instruction break à la fin de chaque cas.
    Sans l'instruction break l'ordinateur lire les instructions en dessous censées être réservées aux autres cas

    Le cas default correspond au else qu'on connait. Si la variable ne vaut aucune des valeurs précédentes l'ordinateur ira lire le default

    exemple :

        switch (age)
    {
    case 2:
      printf("Salut bebe !");
      break;
    case 6:
      printf("Salut gamin !");
      break;
    case 12:
      printf("Salut jeune !");
      break;
    case 16:
      printf("Salut ado !");
      break;
    case 18:
      printf("Salut adulte !");
      break;
    case 68:
      printf("Salut papy !");
      break;
    default:
      printf("Je n'ai aucune reponse pour ton age");
      break;
    }
    */

    // Les conditions condensées : les ternaires

    /*
    Il existe une façon de faire des conditions plus rare : les expressions ternaires
    Elles ne sont pas indispensables et peuvent rendre la lecture du code source un peu
    difficile mais il vaut mieux les connaître pour le jour ou on tombera sur un code
    plein de ternaires.

    C'est comme un  if...else sauf qu'on fait tout tenir sur une seule ligne
    */

    /* Exemple avec une codition classique :

    if (majeur)
        age = 18;
    else
        age = 17;

    Voici un code qui fait exactement la même chose :

    age = (majeur) ? 18 : 17;
    */

    /*
    Les tenaires permettent sur une seule ligne de changer la valeur d'une variable en fonction d'une condition

    Un autre exemple :

    autorisation = (age >= 18) ? 1 : 0;

    Le point d'interrogation permet de dire "est-ce que tu es majeur ?" Si oui alors on met la valeur 18 dans age
    Sinon le ":" signifie else ici, on met la valeur 17
    */

    /*
    En résumé :

    - Les conditions sont à la base de tous les programmes. C'est un moyen pour prendre une décision.
    - les mots-clés if, else if, else signifient si, sinon si, sinon
    - Un booléen est une variable qui ne peut avoir que deux états : vrai (1) ou faux(0)
    toute valeure différente est considérée comme vraie
    - Le switch est une alternatiuve au if quand il s'agit d'analyser la valeur d'une variable. Il rend
    le code source plus claire si on test de nombreux cas. Si on utilise else if c'est en général signe
    qu'un switch serait plus adapté pour rendre le code plus lisible
    - Les ternaires sont des conditions très concise qui permettent d'affecter rapidement une valeur
    à une variable en fonction du résultat d'un test.
    */

    return 0;
}
