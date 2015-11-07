#include <stdio.h>
#include <stdlib.h>

/* Função para definir as posições e direção iniciais do fantasma
 * e do pacman */

void position(char maze[L][C], int x_player, int y_player, char player)
{
  maze[y_player][x_player]= player;
}
