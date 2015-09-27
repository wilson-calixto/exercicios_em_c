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

void farey(int n)
{
	typedef struct { int d, n; } fraci; //declara estrutura 'fraci'
	fraci f1 = {0, 1}, f2 = {1, n}, t; //declara variaveis do tipo 'fraci' e inicia 'f1' e 'f2'.
	int k; //declara variavel k
 
	printf(" %d/%d\n %d/%d\n", 0, 1, 1, n);//printar primeiros números da sequencia de farey
	while (f2.n > 1) 
	{
		k = (n + f1.n) / f2.n; // variavel k recebe a equação
		t = f1; //'t' recebe os valores de f1
		f1 = f2; //'f1' recebe os valores de 'f2'
		f2 = (fraci) { f2.d * k - t.d, f2.n * k - t.n }; // 'f2' recebe valores.
		printf(" %d/%d\n", f2.d, f2.n); //informa o numero da sequencia de farey
	}
 
	putchar('\n'); //pula uma linha
}

