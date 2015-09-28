/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.04
 *     
       Equipe: 
       Andressa
       Delrick 
 *     Juliany
 *     Lucas Botinelly
 *     Sérgio  
 *   
 */

#include <stdio.h>
#include <string.h>
#include "binary.h"
#define TAM 100000

int main()
{
	char n[TAM];
	int new;
	
	//Entrada de dados
	printf("Digite um numero binario: ");
	scanf("%s",n);
	
	//Processamento de dados
	new = binary(n);
	
	//Saída de dados
	printf("O número %s em decimal eh: %d\n",n,new);
	return 0;
}
