/*
Programação de Computadores e Algoritmos
 Trabalho 2
 Questao 2.3
 
Equipe:
	Evandro Fernandes
	Jackson Gomes
	Jéssica Kelly
	Paulo Marinho
	Robson Borges	
	Rodrigo Oliveira
	
 */

#include <stdio.h>
#include "function.h"

int main(int argc, const char *argv[])
{
	int  i,  num, primo;
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);//Lê o número digitado

	primo = funcPrimo(num);// Variavel para receber o retorno da funcao, funcao esta envia o resultado se o número é Primo ou não

	if (primo == 1)//Se o resultado da função for True, faça isso
	{
		printf("\nO número %d é primo.\n", num);
	}
	if (primo == 0)//Se o resultado da função for False, faça isso
	{
		printf("O número %d não é primo.\n", num);
	} 
}
