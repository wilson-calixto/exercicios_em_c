#include <stdio.h>
#include <stdlib.h>
#define C 30
#define L 23

/* Função para definir as posições e direção iniciais do fantasma
 * e do pacman */

void position(char maze[L][C], int numbers_player[3], int player)
{
  int i,j;       
  i=numbers_player[0];
  j=numbers_player[1];
  maze[i][j]= player;
}
