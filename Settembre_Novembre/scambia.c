#include <stdio.h>

void scambia(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void azzera(int *a)
{
    *a=0;
}

int main()
{
    int a, b;
    printf("Digita due interi\n");
    scanf("%d%d", &a, &b);

    //scambia(a, b);

    azzera(&a);

    printf("%d %d\n", a, b);

    return 0;
}