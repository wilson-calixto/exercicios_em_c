/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista4.7.c
 *
 * Equipe:
 *
 *          Jackson Kelvin
 *          Sergio Alexandre
 *          Grabriel Faraco
 *          Manoel Florencio
 *          Rai Santos
 *          Delrick Oliveira 
 */


#include<stdio.h>
#include "func.lista4.7.h"
 
  
int main ( int argc, char *argv[] )
{
     int a, b;
     float c, d;

     printf("Digite quatro numeros.\n");
     scanf("%d %d %f %f", &a, &b, &c, &d);
     printf("a = %d  b = %d  c = %f  d = %f\n", a, b, c, d);
     while (a < b)
     {
         if (c > d)
         { 
         d = f1(b,a);
         b = b - 1;
         }
         else
         {
             c = 1 / f1(a,b);
             a = a + 1;
         }
         printf("a = %d  b = %d  c = %f  d = %f\n", a, b, c, d);
      }
         return 0; 
}

		
