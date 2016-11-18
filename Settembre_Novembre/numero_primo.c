#include <stdio.h>

main()
{
    int numero, divisore, primo=1;
    printf("Digita un numero naturale: \n");
    scanf("%d", &numero);
    if(numero!=2 && numero%2==0)
    {
        primo = 0;
        printf("Il numero non è primo\n");
    }
    else
    {
        divisore=3;
        while (divisore*divisore <= numero && primo) 
        {
            if (numero%divisore == 0) 
            {
                primo=0;
            }
            divisore+=2;
        }
        if(primo)
        { 
            printf("Il numero è primo\n");
        }
        else 
        {
            printf("Il numero non è primo\n");
        }
    }
}