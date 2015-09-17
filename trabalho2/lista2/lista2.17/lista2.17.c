/*
Programação de Computadores e Algoritmos

Teste 3

Lista 2

Grupo:

	Delrick Oliveira
	Gabriel Faraco
	Jackson Kelvin
	Manoel Victor
	Rai Santos 
	Sergio Pinheiro

*/
#include <stdio.h>
#include "Values.h"

int main(int argc, const char *argv[])
{

	int num,cont,maior,menor; //numero, contador

	puts("Informe um numero:");
	scanf("%d", &num); //Pedindo que o usuario digite um numero

	maior = num; //Para não declarar 'maior' e 'menor' com valores muito baixos ou altos, fiz com que eles tivessem o valor do
	menor = num; //primeiro numero digitado pelo usuario.

	for(cont = 1; cont<=49;cont++) //cont até 49 pois o numero deve receber 50 valores e um ja foi recebido, então 50 - 1 = 49.
	{
		puts("Informe um numero:");
		scanf("%d",&num);

		maior = greater_value(maior,num); //chamando a função greater_value para verificar se a variavel 'maior' é maior que 'num'
		menor = smaller_value(menor,num); //chamando a função smaller_value para verificar se a variavel 'menor' é menor que 'num' 

	}

	printf("O maior valor é %d e o menor valor é %d",maior,menor); //mostra o maior e o menor valor digitados pelo usuario 

	return 0;
}
