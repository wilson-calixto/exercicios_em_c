/* Implementado por Juliany, Evandro */
#include <stdio.h>
#define max 3

/* Implementação do MiniMax */



int minimax(int posicao[9], int player, int matriz[3][3]) 
{
    //Descobre a melhor posição para jogar
    int winner 
    
    /*= ganhou(matriz);
    if(winner != 0) return winner*player;*/

    move = -1;
    int score = -2;//Perde os movimentos anteriores
    int i;
    for(i = 1; i <= 9; ++i) {//Pesquisa todos os movimentos,
        if(posicao[i] == 0) {//Se posição estiver vazia, ou seja, não tiver nenhuma jogada
            posicao[i] = player;//Testa o movimento
            int thisScore = -minimax(posicao, player*-1);
            if(thisScore > score) {
                score = thisScore;
                move = i;
            }//Escolhe o que é pior para o adversário, ou seja, aquela jogada que o bot tem mais chances de ganhar
            posicao[i] = 0;//Se ele não achou, tenta novamente
        }
    }
    
    
    if(move == -1) return 0;
    return score;
}

int movimento_bot(int posicao[9]) {
    int move = -1;
    int score = -2;
    int i;
    for(i = 0; i < 9; ++i) {
        if(posicao[i] == 0) {
            posicao[i] = 1;
            int tempScore = -minimax(posicao, -1);
            posicao[i] = 0;
            if(tempScore > score) {
                score = tempScore;
                move = i;
            }
        }
    }
    //É o melhor movimento.
    return move;
}




