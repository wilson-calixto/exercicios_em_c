/* Implementado por Juliany, Evandro */
#include <stdio.h>
#include <stdlib.h>
#include "jogo_da_velha.h"

/* Implementação do MiniMax */

int minimax(int m[3][3], int player) 
{
    int move_i, move_j;
    int score = -2;
    int i,j;

    int winner = ganhou(m);
    if(winner != 0)
	{
		return winner * player;
	}

	move_i = -1;
	move_j = -1;

    for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
	        if(m[i][j] == 0)
			{
    	        m[i][j] = player;
    	        int thisScore = minimax(m, player*-1);
    	        if(thisScore > score)
				{
    	            score = thisScore;
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

int movimento_bot(int posicao[3][3])
{
    int move_i = -1;
	int move_j = -1;
    int score = -2;
    int i,j, result;
	int m[3][3] ={{0,0,0},
			      {0,0,0},
			      {0,0,0}};

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
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
	
    for(i=0;i<3;++i)
	{
		for (j=0;j<3;++j)
		{
	        if(m[i][j] == 0)
			{
	            m[i][j] = 1;
	            int tempScore = minimax(m,-1);
	            m[i][j] = 0;
	            if(tempScore > score)
				{
	                score = tempScore;
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
