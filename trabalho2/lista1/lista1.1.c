/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista1.1.c
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
    for(i=1;i<=num;i++) /*determina o tamanho da série*/
    {
        for(j=1;j<=i;j++) /*determina os numeros por linhas*/
        {
            printf("%d",i); /*imprime a série*/
        }
      printf("\n"); /*pulando linha*/
    }
}
int main (int argc,const char *argv[])
{
    int n;
    printf("digite numero: "); /*numero que vai ser o tamanho da laço*/
    scanf("%d",&n);
    qnt_numbers(n); /*chamando a funçao*/
  return 0;
}
