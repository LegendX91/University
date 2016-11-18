/* Dato un array di interi, si scriva una procedura
   che elimina gli eventuali elementi ripetuti.
*/

#include <stdio.h>

int eliminaElemento(int a[], int elemento, int dimensione_logica)
{
    int i, contatore_eliminati = 0;
    for (i = 0; i < dimensione_logica - contatore_eliminati; i++)
        if (a[i] == elemento)
        {
            int j;
            for (j = i + 1; j < dimensione_logica - contatore_eliminati; j++)
                a[j - 1] = a[j];
            contatore_eliminati++;
        }
    return contatore_eliminati;
}

void eliminaElementiRipetuti(int a[], int *dl)
{
    int i;
    for (i = 0; i < *dl; i++)
        (*dl) -= eliminaElemento(&a[i+1], a[i], *dl - (i + 1));
}

int main()
{
    int i, dimensione_logica = 8;
    int v1[8] = {1, 1, 2, 1, 2, 1, 3, 6};
    eliminaElementiRipetuti(v1, &dimensione_logica);
    for (i = 0; i < dimensione_logica; i++)
        printf("%d ", v1[i]);
    printf("\n");
}