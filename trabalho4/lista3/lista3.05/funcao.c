#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int permutacao (int mat[MAX][MAX],int l,int c)
{
    int i,j,soma=0,soma1=0,verda = 1;
    for(i=0;i < l;i++) /*inicia a verificação da matriz*/
    {
        soma=0; /*inicia o contador para as linhas*/
        soma1=0; /*inicia o contador para as colunas*/
        for (j=0;j<c;j++)
        {
            if(mat[i][j]==0) /*condição que verifica se existe 0 na matriz*/
            {
                soma++; /*conta para a condição*/
            }
            if(mat[i][j]==1) /*condição que verifica se existe 1 na função*/
            {
                soma1++; /*conta para a condição*/
            }
        }
        if(soma!=(c-1) || (soma1!=1)) /*verifica se é permutação*/
         {
            verda=0;
        }
    } 
    
    return verda;
    
    
}


