#include <stdio.h>

main()
{
    int a, b;
    printf("Digita i due numeri naturali:\n");
    scanf("%d%d", &a, &b);
    while(a!=b)
    {
        if(a<b)
        {
            b-=a;
        }
        else
        {
            a-=b;
        }
    }
    printf("MCD = %d\n", a);        
}