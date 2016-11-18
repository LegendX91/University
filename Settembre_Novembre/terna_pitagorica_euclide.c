#include <stdio.h>

int main()
{
    int massimo;
    int cateto1, cateto2, ipotenusa;
    int k, m, n;
    int iterazioni = 0;

    printf("Digita il valore massimo per l'ipotenusa:\n");
    scanf("%d", &massimo);

    for(n = 1; n*n <= massimo ; n++)
        for(m = n+1; m*m <= massimo ; m++)
            for(k = 1; k * (m * m + n * n) <= massimo; k++)
            {
                iterazioni++;
                cateto1 = k * (m * m - n * n );
                cateto2 = 2 * k + m * n;
                ipotenusa = k * (m * m + n * n);
                if (cateto1 <= cateto2)
                {
                    printf("Terna : < %d , %d , %d > \n", cateto1, cateto2, ipotenusa); 
                }
            }
    printf("Iterazioni: %d\n", iterazioni);
return 0;
}
