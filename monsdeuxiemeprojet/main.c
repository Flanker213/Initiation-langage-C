#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // �quivalent de int main()
{
    int nombreDeVies = 5, niveau = 1; // Je d�clare ma variable de type int et je l'initialise (initialiser = d�claration + affectation)
    //nombreDeVies = 8; // J'affecte une nouvelle valeur � ma variable

    // Gr�ce ayx constantes ma variable garde la m�me valeur pendant toute la dur�e du programme
    const int NOMBRE_DE_VIES_INITIALES = 3; // Je d�clare  une constante avec le mot const devant le type
                                            // Il faut obligatoirement lui donner une valeur au moment de sa d�claration
                                            // Par convention on �crit les noms des constantes tout en majuscules

    printf("Il vous reste %d vies et vous etes au niveau numero  %d\n", nombreDeVies, niveau); // On indique apr�s les guillemets le nom de la variable � afficher

    /*
    Ce symbole sp�cial "%"  suivi d'une lettre (dans mon exemple, la lettre d)
    Cette lettre permet d'indiquer ce que l'on doit afficher
    "d" signifie que l'on souhaite afficher un int
    _____________________
    |Format|Type attendu|
    ---------------------
    |  %d  |   int      |
    |  %u  |unsigned int|
    |  %ld |   long     |
    |  %f  |   float    |
    |  %f  |   double   |
    ---------------------
    */

    printf("**** BAM ****\n"); // Le personnage se prend un grand coup sur la t�te
    nombreDeVies = 4; // Il vient de perdre de la vie
    //printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);0

    //Fonction pour r�cup�rer une saisie :
    /*
    On demande � l'utilisateur de taper un nombre dans la console et ce nombre on va le r�cup�rer
    et le stocker dans une variable
    */

    // Attention pour r�cup�rer un float c'est le format %f qu'il faut utiliser et pour le type double c'est %lf

    //int age = 0; // On initialise la variable � 0

    //printf("Quel age avez-vous ? ");
    //scanf("%d", &age); // On demande d'entrer l'�ge avec scanf
    //printf("Ah ! Vous avez donc %d ans !\n\n", age);

    return 0;
}
