#include <stdlib.h>
#include "validate_position.h"
#include "maze.h"
#include "../util.c/i_o.h"
#define C 30
#define L 23
#define DIRECAO_PACMAN 9
#define SEM_PARAMETRO 0
#define POSICAO_PACMAN 10
#define X 4
#define Y 5
#define LINHA 0
#define COLUNA 1
#define DIRECAO 2

void partpackman (int *pacman,char maze[L][C])
{
 	 do
 	 {  	
	       out(DIRECAO_PACMAN,SEM_PARAMETRO);
	       in(pacman[DIRECAO]);
 	 }while( pacman[2]>4 ||pacman[2]<1);

  	do 	
  	{
  		print_maze (maze);
		out(POSICAO_PACMAN,SEM_PARAMETRO);
		out(X,SEM_PARAMETRO);
		in(pacman[LINHA]); // referente a coluna - ghost
		out(Y,SEM_PARAMETRO);
		in(pacman[COLUNA]); // referente a linha - ghost
  	}while (!validate_position(maze,pacman));
}
