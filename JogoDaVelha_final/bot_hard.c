#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
#include "i_o.h"
#include "bot_easy.h"
#include "human.h"
// defines de modo de jogo
#define HARD 3
#define EASY 2
#define MULTIPLAYER 1
#define SINGLEPLAYER 2
#define EXIT 4
#define MAX_JOGADAS 9
#define TAMANHO 3
// defines de impressão
#define LIMPA_TELA 3
#define ONDE_JOGOU 12
#define PLAYER1_GANHOU 8
#define PLAYER2_GANHOU 7
#define VELHOU 9
#define MENSAGEM_SAIDA 11
#define LINHA 3
#define COLUNA 3
#define PRINT_NULO 0
/* Implementado por Juliany, Evandro */
/* Implementação do MiniMax */

int minimax(int m[LINHA][COLUNA], int player)
{
    int move_i = -1;
	int move_j = -1;
    int score = -2;
    int i,j;

    int winner = ganhou_jogador(m);
    if(winner != 0)
	{
		return winner * player;
	}

    for(i=0;i<LINHA;i++)
	{
		for(j=0;j<COLUNA;j++)
		{
	        if(m[i][j] == 0)
			{
    	        m[i][j] = player;
    	        int this_score = minimax(m, player*-1);
    	        if(this_score > score)
				{
    	            score = this_score;
    	            move_i = i;
					move_j = j;
    	        }
    	        m[i][j] = 0;
    	    }
		}
    }
    if(move_i == -1 && move_j == -1) return 0;
    return score;
}

int movimento_bot(int posicao[LINHA][COLUNA])
{
    int move_i = -1;
	int move_j = -1;
    int score = -2;
    int i,j, result;
	int m[3][3] ={{0,0,0},
			      {0,0,0},
			      {0,0,0}};
    //computer squares are 1, player squares are -1.
	for(i=0;i<LINHA;i++)
	{
		for(j=0;j<COLUNA;j++)
		{
			if (posicao[i][j]==-2)
			{
				m[i][j]=-1;
			}
			else if (posicao[i][j]==-3)
			{
				m[i][j]=1;
			}
		}
	}
	
    for(i=0;i<LINHA;i++)
	{
		for (j=0;j<COLUNA;j++)
		{
	        if(m[i][j] == 0)
			{
	            m[i][j] = 1;
	            int temp_score = minimax(m,-1);
	            m[i][j] = 0;
	            if(temp_score > score)
				{
	                score = temp_score;
	                move_i = i;
					move_j = j;
	            }
	        }
		}
    }
    //returns a score based on minimax tree at a given node.
    m[move_i][move_j] = 1;
	result = posicao[move_i][move_j];
	return result;
}
