/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 1
 *  Questão 3.14
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Manoel Souza 
 *  Lucas Botinelly
 *  Jackson Gomes
 *  Robson Borges
 *  Grupo 1 - 
 *  */

#include <stdio.h>

int main ( int argc, char *argv[] )
{
	int i, num, cpar = 0, cimp = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("Digite o %d numero\n", i+1);
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			cpar++; 
		}
		else
		{
			cimp++;
		}
	}
	printf("Quantidade de numeros pares: %d\n", cpar);	
	printf("Quantidade de numeros impares: %d\n", cimp);	
	return 0;
}
