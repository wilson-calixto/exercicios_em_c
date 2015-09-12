/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 5 da lista 3
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Paulo Henrique 
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *  
 *  o progrma faz uso da funcao lower_number (que pode ser encontrada em "funcao.c" na pasta "lista3.5") que recebe dois numeros dos quais ela retorna o menor dentre eles
 *  */

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n1, n2, re;
	printf(">");
	scanf("%d", &n1);
	printf(">");
	scanf("%d", &n2);
	re = lower_number(n1, n2);
	printf("%d\n", re);
}
