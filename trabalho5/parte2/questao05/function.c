#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tempo() 
{
	clock_t tempoInicial, tempoFinal; //definindo parametros
	double tempoGasto; // definindo parametros
	tempoInicial = clock(); //pegando o tempo Inicial
	tempoFinal = clock(); // pegando o tempo final

	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC); // calculando o tempo gasto
	printf("Tempo em segundos: %f", tempoGasto);
	return 0;
}
