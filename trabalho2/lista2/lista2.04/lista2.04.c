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

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])

{
	float a,b,c; // declaracao de 3 variaveis

	printf("Digite o valor de a: \n");	
	scanf("%f",&a);	//recebe o valor da variavel a

	printf("Digite o valor de b: \n");
	scanf("%f",&b); //recebe o valor da variavel b

	printf("Digite o valor de c: \n");
	scanf("%f",&c); //recebe o valor da variavel c

	baskaras(a, b, c); //imprime as raizes da equacao, chamando a funcao bhaskara
	return 0;
}
