/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * |FILENAME|
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

#include <stdio.h>
#include "funcao.h"

int main(int argc, const char *argv[]) 
{
    int num1, num2, maior, menor, val;

    printf("Insira um numero: \n");
    scanf("%d", &num1);
    printf("Insira um numero: \n");
    scanf("%d", &num2);
            
    maior = big(num1, num2);
    menor = small(num1, num2);

    val = 0;
    while (maior >= menor) 
    {
        if (fits(maior,menor) == 1)
            val = 1;
        maior/=10;
    }
    if (val == 1)
    {
        if(num1 > num2)
        {
            printf("%d é segmento de %d \n",num2, num1);
        }
        else
        {
            printf("%d é segmento de %d \n",num1, num2);
        }
    }

    else
    {
        if(num1 > num2)
        {
            printf("%d nao é segmento de %d \n",num2, num1);
        }
        else
        {
            printf("%d nao é segmento de %d \n",num1, num2);
        }
    }

    return 0;
}
