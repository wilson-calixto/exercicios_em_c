/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 1
 *  Questão 2.9
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Manoel Souza 
 *  Lucas Botinelly
 *  Jackson Gomes
 *  Robson Borges
 *  Grupo 1 - 
 *   */

#include  <stdio.h>

int main (int argc, const char *argv[])
{
	int numero1, numero2, numero3;
	printf("Digite o primeiro numero\n");
	scanf("%d", &numero1);
	printf("Digite o segundo  numero\n");
	scanf("%d", &numero2);
	printf("Digite o terceiro  numero\n");
	scanf("%d", &numero3);

	if (numero1 >= numero2 && numero1 >= numero3)
	{
		if (numero2 >= numero3)
		{
			printf("\n %d %d %d \n", numero1, numero2, numero3);
		}else
		{
			printf("\n %d %d %d \n", numero1, numero3, numero2);
		}

	}if (numero2 >= numero1 && numero2 >= numero3)
	{
		if (numero1 >= numero3)
		{
			printf("\n %d %d %d \n", numero2, numero1, numero3);
		}else
		{
			printf("\n %d %d %d \n", numero2, numero3, numero1);
		}

	}if (numero3 >= numero1 && numero3 >= numero2)
	{
		if (numero1 >= numero2)
		{
			printf("\n %d %d %d \n", numero3, numero1, numero2);
		}else
		{
			printf("\n %d %d %d \n", numero3, numero2, numero1);
		}

	}
	return 0;

}

