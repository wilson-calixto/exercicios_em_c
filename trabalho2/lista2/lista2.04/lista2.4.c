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
	int a,b,c; // declaracao de 3 variaveis

	printf("Digite o valor de a: \n");	
	scanf("%d",&a);	//recebe o valor da variavel a

	printf("Digite o valor de b: \n");
	scanf("%d",&b); //recebe o valor da variavel b

	printf("Digite o valor de c: \n");
	scanf("%d",&c); //recebe o valor da variavel c

	printf("As raizes da equacao sao: %.2f \n", float bhaskara(float a, float b, float c)); //imprime as raizes da equacao, chamando a funcao bhaskara
	return 0;
}
