/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 2
 * Questao 21
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 * / */

#include <stdio.h>

int main()
{
	int numero;
	float resultado=0;

	printf("Até que termo quer somar: ");
	scanf("%d",&numero);
	
	resultado=iteracao(numero);
	
	printf("\n %.2f \n", resultado);


	return 0;
}
