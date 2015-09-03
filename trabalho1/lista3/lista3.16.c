/* 
 Programação de Computadores e Algoritmos
 Trabalho 1
 Questão 3.16
 Equipe: Benjamin Borges
         Davi Tavares
         Manoel Souza 
         Lucas Botinelly
         Jackson Gomes
         Robson Borges
Grupo 1 - 
 */

#include <stdio.h>

int main(int argc, const char *argv[])

{
	int i,atual,ant,antesdoant;
	
	printf("0 ");

	atual=1;
	ant=0;
	antesdoant=1;

	for(i=1;i<=16;i++)
	{
		
		atual=ant+antesdoant;
		antesdoant=ant;
		ant=atual;
		if("%d",atual<=500)
		{
			printf("%d ",atual);
		}
	}
	return 0;
	

}
