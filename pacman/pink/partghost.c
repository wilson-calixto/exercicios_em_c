#include <stdio.h>
#include <stdlib.h>
#include "validate_position.h"
#include "maze.h"
#include "../util.c/i_o.h"
#define C 30
#define L 23
#define POSIÇÃO_GHOST 3
#define SEM_PARAMETRO 0
#define X 4
#define Y 5

void partghost (int *ghost,char maze[L][C])
{
  	do
	{  	  
		out(POSIÇÃO_GHOST,SEM_PARAMETRO);
		in(ghost[2]);
  	}while(ghost[2]>4 ||ghost[2]<1);
  	//ghost_number = 2;
  	do
  	{
  		out(POSIÇÃO_GHOST,SEM_PARAMETRO);
  		out(X,SEM_PARAMETRO); 
		in(ghost[0]); // referente a linha - ghost
  		out(Y,SEM_PARAMETRO);
		in(ghost[1]); // referente a coluna - ghost
  	}while (!validate_position(maze,ghost));
                                        
}
