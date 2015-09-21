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
	typedef struct { int d, n; } fraci;
	fraci f1 = {0, 1}, f2 = {1, n}, t;
	int k;
 
	printf(" %d/%d\n %d/%d\n", 0, 1, 1, n);
	while (f2.n > 1) {
		k = (n + f1.n) / f2.n;
		t = f1;
		f1 = f2;
		f2 = (fraci) { f2.d * k - t.d, f2.n * k - t.n };
		printf(" %d/%d\n", f2.d, f2.n);
	}
 
	putchar('\n');
}

