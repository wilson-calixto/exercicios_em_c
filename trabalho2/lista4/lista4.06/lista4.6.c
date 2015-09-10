/*
* Programacao de Computadores e Algoritmos
* Trabalho 2
* Questao 4.6
* Equipe: Benjamin Borges
* Davi Tavares
* Paulo Henrique
* Fernando Calderaro
* Lucas Frota
* Luiz Fernando
*
* */

#include "../../util.c/util.h"
#include <stdio.h>
#include <function.h>

int main(int argc, const char *argv[])

{
	int a,b;

	printf("Digite o primeiro numero: \n");
	scanf("%d",&a);

	printf("Digite o segundo numero: \n");
	scanf("%d",&b);

	printf("O mdc dos numeros digitados e: %d \n", int mdc(int a,int b));
	return 0;
}
