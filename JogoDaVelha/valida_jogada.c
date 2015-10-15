#include <stdio.h>
#include <stdlib.h>
/* Funcao que verifica se uma jogada é valida ou nao percorrendo o vetor de jogas ja realizadas*/

// Programador: Hermann J. Hernani.

int valida_jogada(char vet[9], int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 9; i++) // percorre o vetor
   {
       if (jogada == vet[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para falso.
       {
           return 0;
       }
       else // caso contrario retorna 1, valor para verdadeiro
       {
           return 1;
       }
   
   }
}
