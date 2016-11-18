#include <stdio.h>

main()
{
    int numero, divisore, primo=1, soglia;
    printf("Digita un numero naturale: \n");
    scanf("%d", &soglia);
    numero=1;
    while(numero<=soglia)
    {
        if(numero!=2 && numero%2==0)
        {
            primo = 0;
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
                printf("%d ", numero);
            }
        }
    numero++;
    primo=1;
    }
    printf("\n");
}