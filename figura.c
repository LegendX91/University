#include <stdio.h>
#include <string.h>
#define N 30

typedef struct
{
    float x, y;
} punto;

typedef struct
{
    char tipo[N];
    punto p;
    float l;
} figura;

int puntoInterno(figura f, punto p)
{
    if (strcmp(f.tipo, "QUADRATO")==0)
    {
        if(p.x-f.p.x<=f.l 
        && p.x-f.p.x>=0
        && p.y-f.p.y<=f.l
        && p.y-f.p.y>=0)
        {
            return 1;
        }
        else return 0;
    }
    if (strcmp(f.tipo, "CERCHIO")==0)
    {
        if ((p.x-f.p.x)*(p.x-f.p.x)+(p.y-f.p.y)*(p.y-f.p.y)<=f.l*f.l)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    printf("La figura è errata");
    return 0;
}

int main()
{
    figura f;
    punto p;
    printf("Definisci tipo, coordinate e lunghezza della figura.. \n");
    scanf("%s%f%f%f", &f.tipo, &f.p.x, &f.p.y, &f.l);
    printf("Inserisci un punto..");
    scanf("%f%f", &p.x, &p.y);
    if(puntoInterno(f, p))
    {
        printf("Il punto è interno\n");
    }else
    {
        printf("Il punto è esterno\n");
    }
    return 0;
} 