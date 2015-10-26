#include <stdio.h>
#include "expo.h"
#include <time.h>

int main(int argc, const char *argv[])
{
	int k, n, x = 0, i;
	clock_t tempoInicial, tempoFinal;
	double tempoGasto;
	printf("Informe numeros positivos nao nulos.\n");     
	scanf("%d %d", &k,&n); //recebe valores de 'k' e 'n'

	printf("%d\n", expo(k,n)); //mostra o resultado da multiplicações sucessivas
	printf("%d\n", cont()); //mostra a quantidade de multiplicações realizadas
	tempoInicial = clock();
	//executa o que vc quer
	tempoFinal = clock();

	tempoGasto = ((tempoFinal-tempoInicial)/CLOCKS_PER_SEC);
	printf("Tempo em segundos: %f\n", tempoGasto);
	return 0;
}
