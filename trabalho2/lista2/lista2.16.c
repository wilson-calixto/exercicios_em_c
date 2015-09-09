/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 2.16
 *  Equipe: Wilson Neto
 *  Julianny Raiol
 *  Luana Andrade 
 *  Elizabeth
 *  
 *  */

#include <stdio.h>

int fatorial(int n)
{
    int aux=0,fat=1;                
    for(aux=n;aux>=1;aux--)         
    {
        fat*=aux;           //fatorial vai se multiplicando pelo aux que vai decrementando
    }
    return fat;
}
