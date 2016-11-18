#include <stdio.h>

main()
{
    int dd, mm, yy, data=1, bisestile=0, trenta=0;

    printf("Inserire la data..");
    scanf("%d%d%d", &dd, &mm, &yy);

    //Controllo validità base data
    if(dd>31||dd<1)
    {
        printf("Il giorno inserito non esiste\n");
        data=0;
    }
    if(mm>12||mm<1)
    {
        printf("Il mese inserito non esiste\n");
        data=0;
    }

    //Controllo validità mensilità
    if(mm==4||mm==6||mm==9||mm==11)
    {
        if(dd==31)
        {
            printf("La data inserita non è corretta, il mese ha più giorni del previsto\n");
            data=0;
        }
        else
        {
            trenta=1;
        }
    }
    //Controllo della bisestilità se e solo se il mese inserito è febbraio (2)
    else if(mm==2)
    {
        if(yy%400==0 || (yy%4==0 && yy%100!=0))
        {
            bisestile=1;
            printf("Anno bisestile\n");
        }
        else if(dd==29&&!bisestile)
        {
            printf("L'anno inserito è bisestile, la data non è corretta\n");
            data=0;
        }
        else printf("L'anno inserito non è bisestile\n");
    }
    
    if (data)
    {
        //Calcolo nuova data (salto di un giorno in avanti)
        if(dd<31&&!trenta&&mm!=2)
        {
            printf("Data: %d / %d / %d \n", dd+1, mm, yy);
        }
        else if(dd<30&&trenta&&mm!=2)
        {
            printf("Data: %d / %d / %d \n", dd+1, mm, yy);
        }
        else if(dd==29&&bisestile&&mm<12)
        {
            dd=1;
            printf("Data: %d / %d / %d \n", dd, mm+1, yy);
        }
        else if(dd==28&&!bisestile&&mm<12)
        {
            dd=1;
            printf("Data: %d / %d / %d \n", dd, mm+1, yy);
        }
        else if(dd==31&&!trenta&&mm<12)
        {
            dd=1;
            printf("Data: %d / %d / %d \n", dd, mm+1, yy);
        }
        else if(dd==30&&trenta&&mm<12)
        {
            dd=1;
            printf("Data: %d / %d / %d \n", dd, mm+1, yy);
        }
        else if(dd<=28&&bisestile)
        {
            printf("Data: %d / %d / %d \n", dd+1 ,mm, yy);
        } 
        else 
        {
            dd=1;
            mm=1;
            printf("Data: %d / %d / %d \n", dd, mm, yy+1);
        }
    }    
}