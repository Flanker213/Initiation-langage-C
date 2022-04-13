#include <stdio.h>
#include <stdlib.h>

void nombrePairs(int* tab, int taille)
{
       for (int i = 0; i < 4; i++)
    {
        if (tab[i] % 2 == 0)
        {
            printf("Le nombre %d est paire\n", tab[i]);
        }
    }
}

int main()
{
    int tab[4] = {12, 23, 34, 45};
    nombrePairs(tab, 4);


    return 0;
}
