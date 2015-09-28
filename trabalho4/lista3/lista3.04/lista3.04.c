/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * 
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos 
 *          Jackson Kelvin
 *          Wilson Calisto 
 */
//Autor:Jackson Kelvin de Souza

#include <stdio.h>
#include <stdlib.h>
#include "tt.h"

int main(int argc, const char *argv[])
{
    int matriz[100][100], m, n;

    printf("Informe o numero de linhas da matriz:\n");	
    scanf("%d", &m);
    printf("Informe o numero de colunas da matriz:\n");
    scanf("%d", &n);

    maker_matriz(m, n, matriz);
    print(m,n,matriz);

    if(repeat(m, n, matriz))
    {	
	printf("\n");
        printf("Existem elementos repetidos.\n");
    }
    else
    {
	printf("\n");
        printf("Nao existem elementos repetidos.\n");
    }   
    return 0;
}
