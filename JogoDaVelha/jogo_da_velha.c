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

/*funcao que recebe um numero de 1 a 9 e o armazena em um vetor global, assim como o seu endereco em outro vetor */

// Programador: Raí Santos

void pede_jodada(int posicao)
{
    int i = 0, j =0;

    switch(posicao)
    {

        case 1: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 0;
                vetor_de_endereco[i+1] = 0;
                break;
        
        case 2: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 0;
                vetor_de_endereco[i+1] = 1;
                break;

        case 3: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 0;
                vetor_de_endereco[i+1] = 2;
                break;

        case 4: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 1;
                vetor_de_endereco[i+1] = 0;
                break;

        case 5: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 1;
                vetor_de_endereco[i+1] = 1;
                break;

        case 6: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 1;
                vetor_de_endereco[i+1] = 2;
                break;

        case 7: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 2;
                vetor_de_endereco[i+1] = 0;
                break;

        case 8: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 2;
                vetor_de_endereco[i+1] = 1;
                break;

        case 9: vetor_posicao[j] = posicao;
                vetor_de_endereco[i] = 2;
                vetor_de_endereco[i+1] = 2;
                break;

        }
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
