#include <stdio.h>

main()
{
    int c, n, numero, sum;
    printf("Quanti valori?\n");
    scanf("%d", &n);
    sum=0;
    c=0;

    while (c<n){
        printf("%d)Inserisci un numero... ", c+1);
        scanf("%d", &numero);
        sum+=numero;
        c++;
    }

    printf("La somma dei numeri inseriti è %d\n", sum);
}