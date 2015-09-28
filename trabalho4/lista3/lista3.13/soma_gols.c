#include <stdlib.c>
char *soma_gols(char* atual, char* proximo)
{
	int acumulador;
	char numero[3];

	acumulador = atoi(atual) + atoi(proximo);
	snprintf(numero,3,"%d",acumulador);

	return numero;
}
