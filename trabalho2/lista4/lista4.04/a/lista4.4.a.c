/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3 questao 4 letra a.
 * 
 * Equipe:
 * 
 *      Ewerton Petillo
 *      Hermann Hernani
 *      Jailson Pereira
 *      Lucas Botinelly
 *      Richardson Souza
 *      Wilson Calisto
 */

#include<stdio.h>
#include "../../../util.c/util.h"

float arctan(float numero);

int main(int argc, const char *argv[])
{
	float valor;

	printf("digite o valor\n");
	scanf("%f",&valor);

	/* retira as coordenadas invalidas */

	if(valor>=0 &&valor<=1)
    {
		printf("o resultado é :%f\n",arctan(valor)); /*chama a funcao que calcula a arcotangente das coordenadas x e y */
	}
    else
    {
		printf("o valor é invalido\n");	
	}

    return 0;
}
