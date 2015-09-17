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
    scanf("%d",&l);
    printf("difite valor para coluna: ");
    scanf("%d",&c);
    for (i=0;i<l;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
  per = permutacao(mat,l,c);
  if (per == 1)
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
