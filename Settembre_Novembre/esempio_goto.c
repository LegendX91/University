#include <stdio.h>

int main()
{
	int dividendo, divisore, quoziente, resto;
	printf("Inserisci il valore del dividendo:\n");
	scanf("%d",&dividendo);
	printf("Inserisci il valore del divisore:\n");
	scanf("%d", &divisore);
	printf("Calcolo...\n");
	if(divisore==0)goto divisore_nullo;
	quoziente=dividendo/divisore;
	resto=dividendo%divisore;
	goto fine_operazione;
divisore_nullo:
	printf("Divisore nullo, impossibile eseguire l'operazione.\n'");
	return 0;
fine_operazione:
	printf("Quoziente: %d ;\nResto: %d ;\n",quoziente,resto);
	return 0;
}
