#include <stdio.h>

int main()
{
    int xk, yk, xq, yq;
    int dx, dy;

    printf("Digita in ordine ascissa e ordinata di re e regina\n");
    scanf("%d%d%d%d", &xk, &yk, &xq, &yq);

    dx=xk-xq; //distanza ascissa
    if(dx<0) dx=-dx;

    dy=yk-yq; //distanza ordinata
    if(dy<0) dy=-dy;

    if(dx==0 || dy==0 || dx == dy)
        printf("Attacco\n");
    else
        printf("Non attacco\n");
    return 0;
}