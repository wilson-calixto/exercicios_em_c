/* Implementado por Juliany, Evandro e Richardson*/
#include <stdio.h>
#include "jogodavelha.h"
#define max 3

/* Implementação do MiniMax */



int minimax(int matriz[3][3], int player) 
{
    //Descobre a melhor posição para jogar
    int move_i, move_j, winner = ganhou(matriz);
    if(winner != 0) return winner*player;

    move_i = -1;
    move_j = -1;
    
    int score = -2;//Perde os movimentos anteriores
    int i, j;
    for(i = 0; i < 3; ++i) {//Pesquisa todos os movimentos,
    	for(j = 0; j < 3; ++j) {
        if(matriz[i][j] != -1 || matriz[i][j] != -2) {//Se posição estiver vazia, ou seja, não tiver nenhuma jogada
            matriz[i][j] = player;//Testa o movimento
            int thisScore = -minimax(matriz, player*-1);
            if(thisScore > score) {
                score = thisScore;
                move_i = i;
                move_j = j;
            }//Escolhe o que é pior para o adversário, ou seja, aquela jogada que o bot tem mais chances de ganhar
            matriz[i][j] = 0;//Se ele não achou, tenta novamente
        }
    }
    
    }
    if(move_i == -1 && move_j == -1) return 0;
    return score;
}

void movimento_bot(int matriz[3][3]) {
    int move_i = -1, move_j = -1;
    int score = -2;
    int i, j;
    for(i = 0; i < 3; ++i) {
    	for(j = 0; j < 3; ++j) {
        if(matriz[i] == 0) {
            matriz[i][j] = 1;
            int tempScore = -minimax(matriz, -1);
            matriz[i][j] = 0;
            if(tempScore > score) {
                score = tempScore;
                move_i = i;
                move_j = j;
            }
        }
    }
    }
    //É o melhor movimento.
    matriz[move_i][move_j] = -2;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",
    	}
    }
    
}




