/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 5
 *
 *\Equipe:  Elizabeth Castro
 *          Andressa Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 * * / */
 
#include <stdio.h>
#include "util.h"

int main()
{
	//Declaração de variáveis
	int numero,value;
	
	//Recebendo os valores de entrada
	printf("Digite um Numero: ");
	scanf("%d",&numero);
	
	//Imprimindo o reverso do numero digitado
	printf("Inverso do numero %d eh: ",numero);
	value = reverse_number(numero);
	printf("%d",value);
	
	printf("\n");
	return 0;
} 