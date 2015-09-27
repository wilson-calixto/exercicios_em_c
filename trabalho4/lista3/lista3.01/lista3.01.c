/*
*Programaçao de Computadores e Algoritmos
*
*Lista 3 Questao 1
*
*Grupo:
*
*	Davi Tavares
*	Delrick Oliveira
*	Evandro Fernandes
*	Lucas Frota
*	Manoel Victor
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main()
{

	int m, n, R[100], V[100], **A, i; // m = numero de colunas, n = numero de linhas, R - Vetor resultado, V - Vetor lido
					  // A - Matriz lida e i - contador
	A = malloc(sizeof(int) * 100); // declara tamanho da matriz A.

	printf("Informe o valor de m:"); 
	scanf("%d", &m); //lê valor de m

	printf("Informe o valor de n:");
	scanf("%d", &n); //lê valor de n

	putchar('\n'); //pula uma linha

	puts("Informe os valores de V:");
	insert_array(n, V); //lê valores para o vetor V

	putchar('\n'); //pula uma linha

    puts("Informe os valores de A(insira os valores por coluna e nao por linha):"); 
	insert_matrix(n, m, A);	//lê valores para a Matriz A

	putchar('\n'); //pula outra linha

	make_result(R, V, A, n, m); //gera o vetor resultado

	putchar('\n'); //pula uma linha

	for(i = 0; i < n; i++)
	{
		printf("%d ", R[i]); //mostra ao usuario o vetor resultado
	}
	putchar('\n');	//pula outra linha

	return 0;
}
