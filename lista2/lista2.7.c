/* 
 *   Programação de Computadores e Algoritmos
 *   Trabalho 1
 *   Questão 2.7
 *   Equipe: Benjamin Borges
 *   Davi Tavares
 *   Manoel Souza 
 *   Lucas Botinelly
 *   Jackson Gomes
 *   Robson Borges
 *   Grupo 1 - 
 */

#include <stdio.h>

int main(int argc, const char *argv[])

{

	int a, b, c;
	printf("Digite um numero: \n");
	scanf("%d", &a);
	printf("Digite outro numero: \n");
	scanf("%d", &b);
	printf("Digite outro numero: \n");
	scanf("%d", &c);
	
	if (a<b && a<c)
	{
		printf("%d", a);
	}
	else if(b<a && b<c)
	{
		printf("%d", b);
	}
	else if(c<a && c<b)
	{
		printf("%d", c);
	}
	
	return 0;
}


