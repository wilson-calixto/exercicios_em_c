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

int main(int argc, const char *argv[])
{
	int x, *p, **q; // variaveis declaradas

	p = &x; //p = 0x0000x, *p = x;
	q = &p; //q = 0x0000p, *q = 0x0000x, **q = 10; 
	x = 10; //x = 10; 

	printf("\n%d\n", **q); //o '&' estava pedindo para exibir o endereço de q, nao o valor de x;

	return 0;
}
