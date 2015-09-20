/*
Programaçao de Computadores e Algoritmos

Teste 4

Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;

*/

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, const char *argv[])
{
	int *v1, *v2, n, cont; //vetor 1, vetor 2, numero de elementos, contador;

	puts("Informe o tamanho do vetor:");
	scanf("%d", &n);	

	v1 = (malloc(sizeof(int) * n)); //alocar n endereços de memoria para o vetor 1;
	v2 = (malloc(sizeof(int) * n)); //alocar n endereços de memoria para o vetor 2;
    printf ( "Lendo o primeiro vetor...\n" );
	read_array(n, v1); //vetor 1 recebe os valores;
    printf ( "Lendo o segundo vetor...\n" );
	read_array(n, v2); //vetor 2 recebe os valores;

	printf("O produto escalar é: %d\n", produto_escalar(n, v1, v2)); // printa o retorno da função produto escalar que recebe os dois vetores e o tamanho deles e depois calcula o produto escalar.

	return 0;
}
