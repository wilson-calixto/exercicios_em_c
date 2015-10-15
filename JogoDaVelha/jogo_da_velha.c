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
    if(i_global%2==0)
    {
            matriz[linha][coluna]='0';
            cont_global++;
    }
    else
    {
        cont_global++;
         matriz[linha][coluna]='X';
    }
}

/* Funcao que verifica se uma jogada é valida ou nao percorrendo o vetor de jogas ja realizadas*/

// Programador: Hermann J. Hernani.

int jogada_valida(char vet[9], int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 9; i++) // percorre o vetor
   {
       if (jogada == vet[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para false.
       {
           return 0;
       }
 
   }
    return 1; //  se a jogada não existir ele retorn 1, valor para true
}


/* Funcao que verifica se uma o jogo acabou*/

// Programador: wilson calisto

int velhou(char *vet) //recebe o vetor de jogadas e retorna: 1 pra velhou e 0 para falso
{
   int len;
   len=strlen(vet);
   if(len=9)
   {
        return 1;
   }else{
   
        return 0;
    }
   
}

/* Funcao que verifica se uma jogada é valida ou nao percorrendo o vetor de jogas ja realizadas*/

// Programador: wilson calisto 

int tem_jogada(int i) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
    if(i==9) /*se os jogadsores ja fizeram 9 jogadas ele retorna 0 False*/
    {
        return 0;
    }
    else
    {
        return 1; /* se ainda tiver jogada ele retorna 1 true*/
    }
}
