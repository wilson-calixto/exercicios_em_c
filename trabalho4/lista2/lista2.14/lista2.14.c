/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 14 da Lista 2
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;
	printf("digite o número de sequencia: \n");
	scanf("%d", &n); //recebe o valor do numero.
	farey(n); //mostra a sequencia de farey para o numero informado.
	
	return 0;
}
