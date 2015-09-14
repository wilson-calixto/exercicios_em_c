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
     int a, b; // duas variáveis inteiras para dois números inteiros 
     float c, d; //duas variáveis float para dois números floats

     printf("Digite quatro numeros.\n"); 
     scanf("%d %d %f %f", &a, &b, &c, &d); // leitura do valor das variáveis 
     printf("a = %d  b = %d  c = %f  d = %f\n", a, b, c, d); // print das variáveis antes das modificações
     while (a < b) // enquanto "b" for maior que "a" execute:
     {
         if (c > d)// se c maior que d faça :
         { 
         d = f1(b,a);// d recebe o retorno da função f1 com b e a como parãmetros
         b = b - 1; // b é decrementado
         }
         else // senão :
         {
             c = 1 / f1(a,b); // c recebe 1 sobre o retorno da função f1 com a e b como parametros
             a = a + 1; // a incrementa 
         }
         printf("a = %d  b = %d  c = %f  d = %f\n", a, b, c, d); // print das variáveis após a execução do algoritmo 
      }
         return 0; 
}

		
