/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.3.c
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
 */
#include <stdio.h>
#include "function.h"
#include <math.h>

int main(int argc,const char *argv[])
{ 
    float a,b,c;
    printf("digite valor para a: ");
    scanf("%f",&a);
    printf("digite valor para b: ");
    scanf("%f",&b);
    printf("digite valor para c: ");
    scanf("%f",&c);
    cal_raizes(a,b,c);
  return 0; 
}

