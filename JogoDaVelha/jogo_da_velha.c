#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*comentando*/
void mostra_matriz(char **matriz)
{
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);	
}



/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */

// Programador: Hermann J. Hernani.

int jogada_valida(char *vetor_de_posicao, int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 9; i++) // percorre o vetor
   {
       if (jogada == vetor_de_posicao[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para false.
       {
           return 0;
       }
 
   }
    return 1; //  se a jogada não existir ele retorna 1, valor para true
}




/*funcao que recebe um numero de 1 a 9 e o armazena em um vetor global, assim como o seu endereco em outro vetor */

// Programador: Raí Santos
void converte_jodada(int posicao)
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
        
        default: printf("Posicao invalida! \n")
        }
}






/* Funcao que marca com X ou O*/

// Programador: wilson calisto 

void joga(int *vetor_de_endereco, char **matriz,int i) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
{
    int j,cont,len,linha,coluna;
    len=strlen(vetor_de_endereco);
    linha=vetor_de_endereco[len-2];
    coluna=vetor_de_endereco[len-1];
   
    if(i%2==0)
    {
            matriz[linha][coluna]='0';
        
    }
    else
    {
        
         matriz[linha][coluna]='X';
    }
}


 //recebe o vetor de jogadas e retorna: 1 pra velhou e 0 para falso
// Programador: wilson calisto

int velhou(char *vetor_de_jogadas)
{
   int len;
   len=strlen(vetor_de_jogadas);
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


// Programador: Delrick 
int ganhou(char **mat)
{
    if((mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]) || (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2]) || (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2]) || (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]) || (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]) || (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]) ||  (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) || (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



