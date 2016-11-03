#include <stdio.h>

main()
{
    int c, terna, iterazioni=0;
    printf("Inserisci il valore dell'ipotenusa.. ");
    scanf("%d", &c);
    for (int i=1; i<=c; i++)
    {
        for (int j=1; j<i; j++)
        {
            for (int k=j+1; k<i; k++)
            {
                if ((j*j)+(k*k)==(i*i))
                {
                    if(j<k)
                    {
                        printf ("Terna : < %d , %d , %d > \n", j, k, i);
                        terna=1;
                    }
                }
                iterazioni++;
            }
        }
    }
    if(!terna)
    {
        printf("Non esistono terne per il valore dell'ipotenusa inserito");
    }
    printf("Iterazioni: %d \n", iterazioni);
}