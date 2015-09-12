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
#include"qnt_numbers.h"
int main (int argc,const char *argv[])
{
    int n;
    printf("digite numero: "); /*numero que vai ser o tamanho da laço*/
    scanf("%d",&n);
    qnt_numbers(n); /*chamando a funçao*/
  return 0;
}
