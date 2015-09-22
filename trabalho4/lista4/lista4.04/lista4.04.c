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
    int matriz[100][100], m, n,i,j;

    printf("Informe o numero de linhas da matriz:\n");	
    scanf("%d", &m);
    printf("Informe o numero de colunas da matriz:\n");
    scanf("%d", &n);

    printf("Informe o numero de linhas que deseja trocar:\n");	
    scanf("%d", &i);
    printf("Informe o numero da a outra linhas que deseja trocar:\n");
    scanf("%d", &j);
  

    maker_matriz(m, n, matriz);
    printf("matriz original:\n");
    print(m,n,matriz);
    printf("matriz com as linhas trocadas:\n");
    troca(i, j, m, n, matriz);
    print(m,n,matriz);

    return 0;
}
