/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * funcion.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Lucas
 *          Jailson
 *          Wilson
 *          Richardson 
 *
 *  função para calcular o delta e as raizes de uma equação
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  

void cal_raizes (float x, float y, float z)
{
    float r1,r2,delta;
    float deli,rdel;
    if(x !=  0 ) /*verifica se o valor de a é maior que zero*/
    {
        delta = ((y*y)-(4*x*z)); /*calcula o valor de delta*/
             if (delta >= 0)
             {
                 r1 = (-y + (sqrt(delta)))/2*x; /* calcula a raiz 1 */
                 r2 = (-y - (sqrt(delta)))/2*x; /* calcula a raiz 2 */
                 printf("as raízes são reais: %0.2f,%0.2f \n",r1,r2);
             }
             else 
             {
                     if(delta < 0)
                     {
                          deli = - delta;
                          rdel = sqrt(deli); /* calcula a raiz de delta*/
                          printf("as raízes são complexas do tipo x+iy \n");
                          printf ("a raiz 1: %0.2f + i.%0.2f \n",((-y)/2*x),((rdel)/2*x));/* calcula a raiz 1 */
                          printf("a raiz 2: %0.2f - i.%0.2f \n" ,((-y)/2*x),((rdel)/2*x));/*calcula a raiz 2*/
                     }
             }
      }
    
}


