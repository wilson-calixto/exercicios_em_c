/*
 Programacao de Computadores e Algoritmos
 Trabalho 2
 Questao 1.7
 
Equipe:
	Evandro Fernandes
	Jackson Gomes
	Jéssica Kelly
	Paulo Marinho
	Robson Borges	
	Rodrigo Oliveira
	
 */

#include<stdio.h>
#include "util.h"

int main(int argc, const char *argv)
{
    int num;
    printf("Insira um número para procurar divisores: \n");
    scanf("%d",&num);
    printf("A quantidade de divisores do número %d é: %d\n",num,conta_div(num));
}
