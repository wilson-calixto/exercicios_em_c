#include <string.h>
/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */
// Programador: Hermann J. Hernani.

int jogada_valida(int vetor_posicao[9], int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
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

/* Funcao que marca as jogadas que ja sairam.
 */
// Programador: Raí Santos
void marca_jodada(int posicao,int i,int vetor_posicao[9])
{
        vetor_posicao[i] = posicao;               
}

/* Funcao que marca a matriz com -1=O ou -1=X*/
// Programador: wilson calisto 
void joga(int jogada,int matriz[LINHA][COLUNA],int i) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
{       
        if(i%2==0) /*se par o jogador é o -1==O se impar é -2==X */
 	     {
		           	switch(jogada)
					{
					case 1: matriz[0][0]=-3;
							  break;       
					case 2: matriz[0][1]=-3;
						    break;
					case 3: matriz[0][2]=-3;
						    break;
					case 4: matriz[1][0]=-3;
						    break;
					case 5: matriz[1][1]=-3;
						    break;
					case 6: matriz[1][2]=-3;
						    break;
					case 7: matriz[2][0]=-3;
						    break;
					case 8: matriz[2][1]=-3;
						    break;
					case 9: matriz[2][2]=-3;
						    break;	
			  		}
		 }
    	else
   		 {   
		           	switch(jogada)
					{
					case 1: matriz[0][0]=-2;
							  break;        
					case 2: matriz[0][1]=-2;
						    break;
					case 3: matriz[0][2]=-2;
						    break;
					case 4: matriz[1][0]=-2;
						    break;
					case 5: matriz[1][1]=-2;
						    break;
					case 6: matriz[1][2]=-2;
						    break;
					case 7: matriz[2][0]=-2;
						    break;
					case 8: matriz[2][1]=-2;
						    break;
					case 9: matriz[2][2]=-2;
						    break;
			  		}
     }   
}

/* Funcao que verifica se o jogador e quem ganhou ganhou*/
// Programador: Delrick 
int ganhou(int mat[LINHA][COLUNA])
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

int ganhou_jogador(int mat[LINHA][COLUNA])
{

    if(mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2])
	{
		return mat[0][0];
	}
	else if (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2])
	{
		return mat[1][0];
	}
	else if (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2])
	{
		return mat[2][0];
	}
	else if (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0])
	{
		return mat[0][0];
	}
	else if (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1])
	{
		return mat[0][1];
	}
	else if (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2])
	{
		return mat[0][2];
	}
	else if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
	{
		return mat[0][0];
	}
	else if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
    {           	 
        return mat[0][2];
    }
    else
    {
        return 0;
    }
}
/* Funcao que joga*/
//wilson
void play(int matriz[LINHA][COLUNA],int vetor_posicao[9],int i,int modo_de_jogo,int jogada)
{					
	marca_jodada(jogada,i,vetor_posicao);		     
	joga(jogada,matriz,i);
}
