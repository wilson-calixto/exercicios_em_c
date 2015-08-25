/* 
 *   Programação de Computadores e Algoritmos
 *   Trabalho 1
 *   Questão 3.7
 *   Equipe: Benjamin Borges
 *   Davi Tavares
 *   Manoel Souza 
 *   Lucas Botinelly
 *   Jackson Gomes
 *   Robson Borges
 *   Grupo 1 - 
 */

#include<stdio.h>

int main(int argc, const char *argv[])
{
	int i,num,maior;
	printf("Digite um número: \n");
	scanf("%d",&num);
	maior=num;
	for (i==0;i<4;i++){
		printf("Digite um número: \n");
		scanf("%d",&num);
		if(maior<num){
			maior=num;
			}
		}	
	printf("O maior número é: %d\n",maior);
	return 0;
}
