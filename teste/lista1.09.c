#include <stdio.h>
#include "util.h"
int main(int argc, const char *argv[])

{
	int pont, numeros[5], i;
	for (i=0;i<5;i++)//Pede os 5 valores do vetor
	{
		printf("Digite um número do vetor: ");
		scanf("%d", &numeros[i]);
	}
		
	select_sort(numeros); //Chama a função para ordenar o vetor
	printf("O vetor ordenado é: \n");
	for (i=0;i<5; i++)//Imprime o vetor
	{
		printf(" %d ", numeros[i]);
	}
	printf("\n");//apenas vaidade
	return 0;
}
