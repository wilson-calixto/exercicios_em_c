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
#include "ff.h"

int main(int argc, const char *argv[])
{
    int matriz[100][100], m, n;

    printf("Informe o numero de linhas da matriz:\n");	
    scanf("%d", &m);
    printf("Informe o numero de colunas da matriz:\n");
    scanf("%d", &n);

    maker_matriz(m, n, matriz);
    print(m,n,matriz);
    //funcao de troca de variaveis nas linhas i j
    print(m,n,matriz);

    return 0;
}
