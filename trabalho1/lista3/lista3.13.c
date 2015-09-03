/* 
 Programação de Computadores e Algoritmos
 Trabalho 1
 Questão 3.13
 Equipe: Benjamin Borges
	 Davi Tavares
	 Manoel Souza 
	 Lucas Botinelly
	 Jackson Gomes
	 Robson Borges
Grupo 1 - 
 */

#include<stdio.h>

int main(int argc, const char *argv[])
{
	int temp,result=0,i,a,b;
	printf("Digite o primeiro número: \n");
	scanf("%d",&a);
	temp=a;
	printf("Digite o segundo número: \n");
	scanf("%d",&b);
	for (i=1;i<b;i++){ 
		result=temp*a;
		temp=result;
	}
	printf("%d\n",result);
	return 0;
		
 }
