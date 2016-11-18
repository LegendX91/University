#include <stdio.h>

main(){
    int valore, anni, val_interesse;
    printf("La banca incrementa il valore del 10 per cento annuo. Inserisci il valore iniziale e il valore da superare\n");
    scanf("%d%d", &valore, &val_interesse);
    printf("Calcolo...\n\n");
    anni=0;
    while(valore<=val_interesse){
        valore+=valore/10;
        anni+=1;
        printf("Valore %d anno %d\n", valore, anni);
    }
    printf("\nIl valore supera i %d€ dopo %d anni.\n", val_interesse, anni);
}