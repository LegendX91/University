#include <stdio.h>

main(){
    
    int x, n;
    printf("Inserisci il numero.. ");
    scanf("%d", &x);
    printf("Inserisci la potenza.. ");
    scanf("%d", &n);
    if(n>0){
        if(n==1)
            printf("Il risultato è %d\n", x);
        else
        {
            int c=0, p=1;
            do{
                p=p*x;
                c++;
            }while(c!=n);
            printf("Il risultato è %d\n", p);
        }
    }else{
        if(n==0) printf("Il risultato è 1\n");
        else {
            int c=0, p=1;
            n=-n;
            do{
                p=p*x;
                c++;
            }while(c!=n);
            printf("Il risultato è 1/%d\n",p);
        }
    }

}