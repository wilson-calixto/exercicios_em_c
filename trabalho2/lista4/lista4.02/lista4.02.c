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
#include "f.h"

int main(int argc, const char *argv[]) 
{
    int num1, num2, maior, menor, val;

    printf("Insira um numero: \n");
    scanf("%d", &num1); //insercao do primeiro numero
    printf("Insira um numero: \n");
    scanf("%d", &num2); //insercao do segundo numero
            
    maior = big(num1, num2); //funcao para verificar o maior numero
    menor = small(num1, num2);//funcao para verificar o menor numero

    val = 0;
    while (maior >= menor) //condicao de parada
    {
        if (fits(maior,menor) == 1) //chamada da funcao "encaixa"
            val = 1;
        maior/=10;
    }
    if (val == 1) //se a funcao retornar "verdadeiro" o menor numero encaixa no maior
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
