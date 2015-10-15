#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Funcao que marca com X ou O*/

// Programador: wilson calisto 

void joga(int *vet, char **matriz) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
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

