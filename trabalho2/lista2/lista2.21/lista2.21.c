#include <stdio.h>

int main()
{
	int numero;
	float resultado=0;

	printf("Até que termo quer somar: ");
	scanf("%d",&numero);
	
	resultado=iteracao(numero);
	
	printf("\n %.2f \n", resultado);


	return 0;
}
