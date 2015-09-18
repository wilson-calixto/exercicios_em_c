
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int tamanho,i;
	int *vetor1, *vetor2;
	scanf ( "%d", &tamanho);
	printf ( "Tamanho do vetor  =   %d \n", tamanho);
	vetor1 = (int*) malloc (tamanho*sizeof(int*));
	vetor2 = (int*) malloc (tamanho*sizeof(int*));
	
	insere_vetor(tamanho , vetor1);
	insere_vetor(tamanho , vetor2);
	
	printf("O produto escalar dos vetores é = %d\n", produto_escalar(tamanho, vetor1, vetor2));	
	
	free(vetor1);
	free(vetor2);

	return 0;
}
