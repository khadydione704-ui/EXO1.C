#include <stdio.h>

int main()
{
    int n, i, x;
    int sommePairs = 0, nbPairs = 0;
    int nbImpairs = 0;
    int sommeNegatifs = 0;
    float moyenne;

    printf("Donner le nombre d'entiers : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Entier %d : ", i);
        scanf("%d", &x);

        if(x % 2 == 0)
        {
            sommePairs += x;
            nbPairs++;
        }
        else
        {
            nbImpairs++;
        }

        if(x < 0)
        {
            sommeNegatifs += x;
        }
    }

    if(nbPairs != 0)
        moyenne = (float)sommePairs / nbPairs;
    else
        moyenne = 0;

    printf("le nombre d entiers impairs = %d\n", nbImpairs);


    return 0;
}

