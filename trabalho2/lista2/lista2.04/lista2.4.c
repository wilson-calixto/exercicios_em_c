/*
* Programacao de Computadores e Algoritmos
* Trabalho 2
* Questao 2.4
* Equipe: Benjamin Borges
* Davi Tavares
* Paulo Henrique
* Fernando Calderaro
* Lucas Frota
* Luiz Fernando
*
* */

#include "bhaskara.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])

{
	int a,b,c;

	printf("Digite o valor de a: \n");	
	scanf("%d",&a);	

	printf("Digite o valor de b: \n");
	scanf("%d",&b);

	printf("Digite o valor de c: \n");
	scanf("%d",&c);

	printf("As raizes da equacao sao: %.2f \n", float bhaskara(float a, float b, float c));
	return 0;
}
