/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.5.c
 *
 * Equipe:
 *
 *          Elizabeth
 *          Hermann
 *          Jackson
 *          Jailson
 *          Paulo
 *          
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include "funcao.h"


int main (int argc,const char *argv[])
{
    int mat[MAX][MAX],i,j,l,c,per;
    printf("digite valor para linha: ");
    scanf("%d",&l); /*numeros de linhas*/
    printf("difite valor para coluna: ");
    scanf("%d",&c); /*numeros de colunas*/
    for (i=0;i<l;i++) /*inicia a matriz com o numero de linhas e colunas passado acima*/
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]); /*ler a matriz*/
        }
    }
  per = permutacao(mat,l,c); /*varialvel recebe o resultado da funcao*/
  if (per == 1) /*verifica se é permutação*/
  {
      printf("É permutação");
   }
  else 
  {
      printf("não é permutação");
  }
  printf("\n");
  return 0;

}
