//Calcolare la distanza di due punti
#include <stdio.h>

typedef struct
{
    int x,y;
} punto;

int assoluto(int a)
{
    return a>=0 ? a : -a;
}

int main()
{
    punto partenza, arrivo, distanza;
    printf("Digita le coordinate di partenza e arrivo..");
    scanf("%d%d%d%d", &partenza.x, &partenza.y, &arrivo.x, &arrivo.y);
    distanza.y = assoluto(partenza.y - arrivo.y);
    distanza.x = assoluto(partenza.x - arrivo.x);
    printf("La distanza è %d %d \n", distanza.x, distanza.y);
}