/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * lista4.05.c
 *
 * Equipe:
 *      
 *      Manoel
 *      Paulo M.
 *      Wilson Neto
 */
#include <stdio.h>
#include "p.h"

int main (int argc, const char *argv[])
{
	char a[100], b[100];
	
	printf("informe uma sequencia de caracters para o primeiro vet: \n");
    scanf("%s", a);

    printf("informe uma sequencia de caracters para o segundo vet: \n");
    scanf("%s", b);
    
	printf("%d", position(a,b));


	return 0;
}


