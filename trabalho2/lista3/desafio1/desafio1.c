/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 3
 * Questao desafio 1
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
#include "primos.h"

int main()
{
    int n,i;

    // parametro ja definido foi 1000, entao eh so da o valor para n
    n=1000;

    // vai analizar todos os valores de 1 até
    for(i=1;i<=n;i++)
    {
        //se ele retornar 1 quer dizer que eh true, logo pode adicionar o valor de i
        if(primos(n)==1)
        {
            printf("%d",i);
        }
    }

    return 0;
}
