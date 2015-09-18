/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * funcao.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Lucas
 *          Jailson
 *          Wilson
 *          Richardson 
 */
#include <stdio.h>
#include <stdlib.h>
int dama (int m[][8])  /*recebe a matriz preenchida*/
{
    int i,j;
    for(i=0;i<8;i++) /* inicia verificação da matriz*/
    {
        for(j=0;j<8;j++)
        {
            if(m[i][j]== -1) /* se o numero for igual a -1 a peça é preta e vai verificar se entra em um dos laços */
            {
                 if((m[i+1][j-1]==1 || m[i+1][j+1]==1) && (m[i+2][j-1]==0 || m[i+2][j+1]==0))
                     /*condição para o preto andar e capturar um branco*/
                   {
                         printf("o preto na posição %d:%d,pode andar e pegar um branco \n",i,j);
                    }
                 if((m[i+1][j-1]==0 || m[i+1][j+1]==0)&&(m[i+2][j-1]!=1 || m[i+2][j+1]!=1))
                     /*condição para o preto andar*/
                    {
                         printf("o preto na posição %d:%d,pode avancar sem medo \n",i,j);

                     }
                 if((m[i+1][j-1]==0 || m[i+1][j+1]==0)&&(m[i+2][j-1]==1 || m[i+2][j+1]==1))
                     /* condição para o preto nao andar se não vai ser capturado */
                     {
                         printf("o preto na posição %d:%d,nao pode avancar se ñ vai ser capturado\n",i,j);
                     }
                 if(m[i+1][j-1]==1 || m[i+1][j+1]==0)
                     /* condição que diz que o preto não pode se mover */
                     {
                          printf("o preto na posição %d:%d,nao pode avançar \n",i,j);
                     }

             }
                
            
        }
    }

}

