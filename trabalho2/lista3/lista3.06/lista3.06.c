/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 3
 * lista3.06.c
 *
 * Equipe:
 *  Sergio Pinheiro
 *  Delrick Oliveira
 *  Jackson Kevin
 *  Manoel Victor
 *  Gabriel Faraco
 *  Raí Santos
 *      
 */

#include <stdio.h>
#include "../../util.c/util.h"
int main(int argc, const char *argv[])
{
	float a,b,c;
	printf("digite o primeiro numero:");
	scanf("%f",&a);
	printf("digite o segundo numero:");
	scanf("%f",&b);
	printf("digite o terceiro numero:");
	scanf("%f",&c);
	printf("%.2f",biggest(a,b,c));

	return 0;
}
