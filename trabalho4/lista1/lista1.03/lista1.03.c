/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 03 da Lista 1
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
	int y, *p, x;
	y=0;//Y recebe 0
	p=&y;//A Variavel P recebe o endereço de Y
	x=*p;//X recebe o que P estava apontando
	x=4;//X recebe 4
	(*p)++;//O que P estava apontando é incrementado
	x--;//X decrementa
	(*p)+=x;//O P vai incrementar o Y com o valor de X
	
	printf("y = %d\n", y);// y irá imprimir 4 ( x tinha 3 pq do decremento -- e o conteúdo do ponteiro p (y) já tinha 1 pelo incremento ++)
	return(0);
}


