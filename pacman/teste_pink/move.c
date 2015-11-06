#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "validate_position.h"
#include "clear_screen.h"
#include "maze.h"
#include "def_target.h"

#define C 30
#define L 23

/* Função para definir as posições e direção iniciais do fantasma
 * e do pacman */

void position(char maze[L][C], int ghost)
{
  int x_ghost, y_ghost, d_ghost; // variáveis para guardar a posição dos fantasmas e direção
  int x_pacman, y_pacman, d_pacman; // variáveis para guardar a posição dos fantasmas e direção
  int result, status; // variáveis de controle

  status = 1;

  while (status == 1)
  {
    clear_screen(); // limpa tela
    print_maze(maze);
    printf ( "Qual a posição do GHOST? (x,y)\n" );
    printf ( "x: " );
    scanf ( "%d", &x_ghost ); // referente a coluna - ghost
    printf ( "y: " );
    scanf ( "%d", &y_ghost ); // referente a linha - ghost

    // verifica se é uma posição válida
    result = validate_position (maze,x_ghost,y_ghost);

    if (result == 1) // se válida marca o ghost no maze
    {
      status = 0;
      maze[y_ghost][x_ghost]='G';
      srand( (unsigned)time(NULL) );
      d_ghost=1+(rand() % 4);
    }
    else // senão retorna para informar as posições novamente
    {
        printf ( "Posição inválida. Tente novamente!\n" );
    }
  }

  status = 1;

  while (status == 1)
  {
    clear_screen(); // limpa a tela
    print_maze(maze);
    printf ( "Qual a posição do PACMAN?\n" );
    printf ( "x: " );
    scanf ( "%d", &x_pacman );
    printf ( "y: " );
    scanf ( "%d", &y_pacman );

    result = validate_position (maze,x_pacman,y_pacman);

    if (result == 1)
    {
      status = 0;
      maze[y_pacman][x_pacman]='P';
      printf ( "Qual a direção do PACMAN?\n" );
      printf ( "1.UP - 2.RIGHT - 3.DOWN - 4.LEFTH\n" );
      printf ( "Posição: " );
      scanf ( "%d", &d_pacman );
    }
    else
    {
      printf ( "Posição inválida. Tente novamente!\n" );
    }
  }

  clear_screen(); // limpa tela
  print_maze(maze); // imprime labirinto
  def_target(maze, ghost, x_pacman, y_pacman, d_pacman); // marca alvo para o ghost
  clear_screen(); // limpa tela
  print_maze(maze); // imprime labirinto
}
