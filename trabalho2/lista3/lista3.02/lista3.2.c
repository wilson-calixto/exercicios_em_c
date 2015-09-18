/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 3
 * Questao 2
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *
 * / */

#include <stdio.h>
#include "delta.h"

int main( int argc,const char *argv[])
{
        int a,b,c,resultado;

        printf("Digite 3 valores para calcular o delta:");  
        scanf("%i %i %i", &a,&b,&c);  // recebe os 3 valores de entrada.

        resultado=delta(a,b,c);   // faz o processamento na funçao

	printf("O resultado de delta é:%d\n", resultado);      //exibe o delta
}

