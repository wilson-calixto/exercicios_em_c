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

#include <string.h>
#define TAM 100000

int binary(char n[TAM])
{
	int i, decimal = 0, tamanho;
	tamanho = strlen(n); //Pega o tamanho da string

	for(i = 0; i < tamanho;i++) //Percorre os valores da string	
	{
		decimal = (decimal*2) + (n[i] - '0'); //Cálculo que multiplica o valor acumulado e soma com o inteiro n[i]
	}
	return decimal;
}
