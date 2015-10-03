#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cont_str()
{
	char stri[100];
	int cont = 0, maior = 0, i, a;
	printf("digite sua string com ate 100 caracteres: ");
	fgets(stri,100,stdin); //aqui nao se usou o scanf, se usou o gets que se adequa melhor a situacao.
	stri[strlen(stri) + 1] = 'c';

	for (i = 0; i < (strlen(stri) + 1); i++)// a funcao "strlen" da biblioteca string eh usada para se obter o numero de elementos de um vetor
	{
		if (stri[i] == ' ')
		{
			cont++;
		}	
		else
		{
			if (cont > maior)
			{
				maior = cont;
				cont = 0;
			}
		}
	}
	printf("%d\n", maior);
}
