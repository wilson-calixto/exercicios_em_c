#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Funcao que verifica se uma jogada é valida ou nao percorrendo o vetor de jogas ja realizadas*/

// Programador: Hermann J. Hernani.

void joga(int *vet, char **matriz) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
    int i,cont,len;
    len=strlen(vet);
    coluna=vet[len-1];
    linha=vet[len-2];
    if(cont_global%2==0)
    {
            matriz[linha][coluna]='0';
    }
    else
    {
         matriz[linha][coluna]='X';
    }
}

