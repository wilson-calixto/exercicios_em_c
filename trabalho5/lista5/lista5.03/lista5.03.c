 /*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.03
 *     Equipe: 
 *     Benjamin Borges
 *     Jackson Gomes
 *     Richardson Souza
 *     Luiz Brandão
 *     Wilson Calixto
 */

 


#include <string.h>
#include <stdio.h>
#include "funcao.h"

int main(int argc, const char *argv[]){ 
	int n;
	printf("Digite um número: ");
	scanf("%d",&n);
	printf("O número %d em binário é %s\n",n,int2binary(n));
	return 0;
}


