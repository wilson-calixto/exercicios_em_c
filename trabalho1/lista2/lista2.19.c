/*
Programacao de computadores e Algoritmos
Trabalho 1
Questao 2.19

Equipe:
	Paulo Marinho
	Sergio Pinheiro	
	Wilson Calixto
	Andressa Moreira
	Rodrigo (TADS)
*/

#include <stdio.h>

int main (int argc, const int *argv[])
{

	int num, cen, dez, uni;
	
	
	printf("Numero: ");
	scanf("%d", &num);

	printf("\n");

	if (num < 0 || num > 999)
	{
		printf("Numero invalido.");
	}
	else
	{
		cen = (num/ 100);

		dez = ((num - (cen * 100)) / 10);

		uni = (num - (cen * 100) - (dez * 10));


		if (cen != 0)
		{
			if (cen == 1)
			{
				printf("1 centena");
			}
			else
			{
				printf("%d centenas", cen);
			}

			if ((dez != 0) && (uni != 0))
			{
				printf(", ");
			}
			else
			{
				if (((dez == 0) && (uni != 0)) || ((dez != 0) && (uni == 0))) 	
				{
					printf(" e ");
				}
			}
		}
		

		if (dez != 0)
		{
			if (dez == 1)
			{
				printf("1 dezena");
			}
			else
			{
				printf("%d dezenas", dez);
			}

			if (uni != 0)
			{
				printf(" e ");
			}
		}

		if (uni != 0)
		{
			if (uni == 1)
			{
				printf("1 unidade");
			}
			else
			{
				printf("%d unidades", uni);
			}
		}
	}
	
	printf("\n\n");

	return 0;
}
