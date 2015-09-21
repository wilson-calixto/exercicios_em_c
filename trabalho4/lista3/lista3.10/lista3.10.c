/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.10.c
 *
 * Equipe:
 *
 *          Elizabeth
 *          Hermann
 *          Jackson
 *          Jailson
 *          Paulo
 *           
 *
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"
int main (int argc,const char *argv[])
{
    int i,j;
    int m[8][8];
    printf ("preencha tabuleiro \n");
    for(i=0;i<8;i++) /*inicia matriz*/
    {
        for(j=0;j<8;j++)
        {
            scanf("%d",&m[i][j]);
        }
       
    }
    dama(m); /*passa a matriz para a função*/
    printf("\n");
    
  return 0;

}
