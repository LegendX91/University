#include <stdio.h>

main()
{
    int a;

    do{
        printf("Inserisci un numero\n");
        scanf("%d",&a);
        if(a>=0)
            printf("Il quadrato è uguale a %d\n", a*a);
        else
            printf("Numero negativo, il programma terminerà\n");
    }while(a>=0);
}