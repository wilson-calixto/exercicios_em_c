/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.25.c
 *
 * Equipe:
 *        Ewerton
 *        Hermann
 *        Jailson
 *        Lucas
 *        Richardson
 *        Wilson 
 */

#include<stdio.h>

void print_numbers()
{
   int n_num, i, j;
   printf("Numero: ");
   scanf("%i",&n_num);
  
  for(i = 1; i <= n_num; i++)
  {
      for(j = 1; j <= i; j++)
      {
        printf("%i ",i);
      }
     printf("\n");
   }
}


int main(int argc, const char *argv[])
{
   print_numbers(); 
   return 0;
}
