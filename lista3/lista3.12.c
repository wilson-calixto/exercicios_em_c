/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 1
 *  Questão 2.9
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Manoel Souza 
 *  Lucas Botinelly
 *  Jackson Gomes
 *  Robson Borges
 *  Grupo 1 - 
 *   */

#include<stdio.h>

int main(int argc, const char *argv[])
{ 
	int i=1, num;
	printf("Digite o número: \n");
	scanf("%d",&num);
	while (i<=10){
		printf("%d x %d= %d\n",num,i,num*i);
		i++;
		}
	return 0;
}
