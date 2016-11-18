#include <stdio.h>
#include <string.h>

typedef struct
{
    char nomeCorso[20];
    int inizio, fine;
} lezione;

void leggiLezione(lezione *x)
{
    printf("Inserisci il nome e gli orari di inizio e fine della lezione interessata..\n");
    scanf("%s%d%d", (*x).nomeCorso, &(*x).inizio, &(*x).fine);
}

void riordina(lezione *x)
{
    int dur, val=0;
    if(x[0].inizio<x[1].inizio)
        val=1;
    if(val)
    {
        
        dur=x[1].fine-x[1].inizio;
        x[1].inizio=x[0].fine;
        x[1].fine=x[1].fine+dur;
    }else
    {
        dur=x[0].fine-x[0].inizio;
        x[0].inizio=x[1].fine;
        x[0].fine=x[0].fine+dur;
    }
}

void orarioPossibile(lezione *x)
{
    if((x[0].inizio>=x[1].inizio)&&(x[0].fine<=x[1].fine))
        riordina(x);
    else if((x[0].inizio<x[1].inizio)&&(x[0].fine>x[1].fine))
        riordina(x);
    else if((x[0].inizio>x[1].inizio)&&(x[1].fine>x[0].fine))
        riordina(x);
    else if((x[0].inizio<x[1].inizio)&&(x[1].fine>x[0].fine))
        riordina(x);
    else if((x[1].inizio>x[0].inizio)&&(x[0].fine>x[1].fine))
        riordina(x);
    else if((x[1].inizio<x[0].inizio)&&(x[0].fine>x[1].fine))
        riordina(x);
}

void stampaOrario(lezione x[])
{
    printf("==Orario definitivo== \n %s : %d - %d ; \n %s : %d - %d ;\n",
            x[0].nomeCorso, x[0].inizio, x[0].fine,
            x[1].nomeCorso, x[1].inizio, x[1].fine);
}

int main()
{
    lezione orario[2];
    for(int i=0;i<2;i++)
        leggiLezione(&orario[i]);
    orarioPossibile(orario);
    stampaOrario(orario);
    return 0;
}