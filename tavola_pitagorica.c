#include <stdio.h>

main(){

    int i, j;
    i=1;
    j=1;
    /*while(a<=10){
        do{
            printf("%d\t",a*b);
            b++;
        }while(b<=10);
        b=1;
        a++;
        printf("\n");
    }*/
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}