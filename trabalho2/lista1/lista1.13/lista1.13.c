/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 13
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *     Autor: Juliany Raiol
 *
 * / */
 
#include <stdio.h>
#include "util.h"

int main()
{
	/*Declaração das variáveis*/
	int linhas, colunas,novalinha, novacoluna,x,y;
	
	printf("Digite as linhas: ");
	scanf("%d",&linhas);
	printf("Digite as colunas: ");
	scanf("%d",&colunas);
	if( (linhas >= 1 ) && (colunas <= 20) ) retangulo(linhas,colunas);
	else
	{
		y = abs(linhas - 1); //Operação para achar quantos valores são necessários para alcançar o mínimo 1
		novalinha = linhas + y; //Operação para chegar ao número 1
		
		//A mesma operação para a linha se repete para a coluna
		x = colunas - 20; 
		novacoluna = colunas - x;
		
		printf("Seus valores de entrada foram alterados para %d %d\n",novalinha, novacoluna);
		
		retangulo(novalinha,novacoluna);
		
		printf("\n");
	}
	return 0;
}