/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 1.8
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Paulo Henrique 
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *  
 *  */

#include <stdio.h>
#include "funcao.h"

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
