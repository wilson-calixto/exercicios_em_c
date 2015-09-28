/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * function.c
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
#include<stdio.h>
int qnt_numbers (int num)
{
    int i,j;
      for(i=1;i<=num;i++) /* determina o tamanho da série*/
        {
           for(j=1;j<=i;j++) /* determina os numeros por linhas*/
               {
                   printf("%d",i); /* imprime a série*/
                }
           printf("\n"); /* pulando linha*/
        }
}
                                           
              


