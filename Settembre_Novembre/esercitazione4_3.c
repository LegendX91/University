#include <stdio.h>
#include <string.h>

typedef struct
{
    char tipo[20];
    char x, y;
} pezzo;

typedef struct
{
    char x;
} scacchiera;

void inizializza(scacchiera *tav)
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            tav[i].x[j]='*';
}

void stampaScacchiera(scacchiera *tav)
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf(tav[i].x[j]);
            printf("\t");
        }
        printf("\n");
    }
}

int main()
{
    scacchiera tav[8];
    inizializza(tav);
    //pezzo p;
    /*do{*/
        stampaScacchiera(tav);
        /*printf("Inserisci il pezzo e le posizioni..\n");
        scanf("%s%d%d", p.tipo, p.x, p.y)
        if (!stcmp(p.tipo, "fine"))
            inserisci();
    }while(!strcmp(p.tipo,"fine"));*/
    return 0;
}
