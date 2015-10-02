/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * lista4.05.c
 *
 * Equipe:
 *      
 *      Manoel Victor
 *      Paulo Marinho
 *      Wilson Neto
 */
#include <stdio.h>
#include "p.h"

int main (int argc, const char *argv[])
{
	char a[100], b[100]; //declara vetores
	
	printf("informe uma sequencia de caracters para o primeiro vet: \n");
    	scanf("%s", a); //recebe uma string

    	printf("informe uma sequencia de caracters para o segundo vet: \n");
    	scanf("%s", b);//recebe um trecho da string
    
	printf("%d\n", position(a,b)); //mostra a posição do trecho da string na string

	return 0;
}
