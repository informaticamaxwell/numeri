#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int numero;
	int i, ex;
	printf("\nStarting program...\n\n\n");
	printf("Inserisci un numero: ");
	scanf("%d",&numero);
	printf("Ora verranno stampati a video tutti i numeri a partire da 0 fino ad arrivare a al numero inserito");
	
	for(i = 0; i < numero; i++)
	{
		printf("%d\n", i);
	}
	printf("%d\n", numero);
	printf("Premi 1 per uscire: ");
	scanf("%d",&ex);
	while(1==1)
	{
		if(ex==1)
		{
			break;
		}
		else
		{
			continue;
		}
	}
}
