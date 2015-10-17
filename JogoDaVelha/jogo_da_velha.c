#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostra_matriz(char matriz[3][3])
{
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);	
}			


/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */

// Programador: Hermann J. Hernani.

int jogada_valida(int *vetor_posicao, int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 9; i++) // percorre o vetor
   {
       if (jogada == vetor_posicao[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para false.
       {
           return 0;
       }
 
   }
    return 1; //  se a jogada não existir ele retorna 1, valor para true
}






// Programador: Raí Santos
void converte_jodada(int posicao,int *vetor_de_endereco,int *vetor_posicao)
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
        
        default: printf("Posicao invalida! \n");
        }
}





/* Funcao que marca com X ou O*/

// Programador: wilson calisto 

void joga(int jogada,char matriz[3][3],int i) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
{
    
   
        if(i%2==0) /*se par o jogador é o 1==O se impar é 2==X */
 	     {
		           	switch(jogada)
					{

					case 1: matriz[0][0]='0';
							  break;        
					case 2: 
						  matriz[0][1]='0';
						    break;

					case 3: matriz[0][2]='0';
						    break;

					case 4: matriz[1][0]='0';
						    break;

					case 5: matriz[1][1]='0';
						    break;

					case 6: matriz[1][2]='0';
						    break;

					case 7: matriz[2][0]='0';
						    break;

					case 8: matriz[2][1]='0';
						    break;

					case 9: matriz[2][2]='0';
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
		 }
    	else
   		 {
    
		           	switch(jogada)
					{

					case 1: matriz[0][0]='X';
							  break;        
					case 2: 
						  	matriz[0][1]='X';
						    break;

					case 3: matriz[0][2]='X';
						    break;

					case 4: matriz[1][0]='X';
						    break;

					case 5: matriz[1][1]='X';
						    break;

					case 6: matriz[1][2]='X';
						    break;

					case 7: matriz[2][0]='X';
						    break;

					case 8: matriz[2][1]='X';
						    break;

					case 9: matriz[2][2]='X';
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
        
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

/* Funcao que verifica se o jogador ganhou*/
// Programador: Delrick 
int ganhou(char mat[3][3])
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



