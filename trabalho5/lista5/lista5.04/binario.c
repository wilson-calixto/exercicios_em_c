#include <string.h>
#define TAM 10000000

int binary(char n[TAM])
{
	int i, decimal = 1, tamanho;
	tamanho = strlen(n); //Pega o tamanho da string

	for(i = 0; i < tamanho;i++) //Percorre os valores da string	
	{
		decimal = (decimal*2) + n[i] - '0';
	}
	return decimal;
}
