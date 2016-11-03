#include <stdio.h>

main(){
    int a, b, prodotto=0;
    printf("Digita i fattori:\n");
    scanf("%d%d", &a, &b);

    while(b>0){
        prodotto+=a;
        b-=1;
    }

    printf("Il prodotto è %d\n", prodotto);
}