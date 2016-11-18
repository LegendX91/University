#include <stdio.h>
#include <math.h>
// N numero predefinito coppie cartesiane da confrontare
#define N 5

typedef struct
{
    int x;
    int y;
} coppiaCartesiana;

void leggiCoppia(int *x, int *y)
{
    printf("Inserisci il valore della coppia cartesiana..");
    scanf("%d%d", &*x, &*y);
}

void scriviCoppia(coppiaCartesiana c)
{
    printf("Coppia inserita: (%d,%d)\n", c.x, c.y);
}

//La procedura si affida al define N per il valore della dimensione dell'array
void confrontaCoppie(coppiaCartesiana c[])
{
    coppiaCartesiana temp[2];
    int dtemp=0;
    int distanza=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            dtemp=sqrt(pow(c[i].x-c[j].x, 2)+pow(c[i].y-c[j].y, 2));
            if(distanza<dtemp)
            {  
                distanza=dtemp;
                temp[0].x=c[i].x;
                temp[0].y=c[i].y;
                temp[1].x=c[j].x;
                temp[1].y=c[j].y;
            }
        }
    printf("Le coppie a distanza maggiore sono (%d,%d) e (%d,%d)\n", temp[0].x, temp[0].y, temp[1].x, temp[1].y);
}

int main()
{
    coppiaCartesiana cop[N];
    for(int i=0; i<N; i++)
        leggiCoppia(&(cop[i].x), &(cop[i].y));
    for(int j=0; j<N; j++)
        scriviCoppia(cop[j]);
    confrontaCoppie(cop);
    return 0;
}