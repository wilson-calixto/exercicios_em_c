#include <stdio.h>
#include <stdlib.h>
#include "validate_position.h"
#include "maze.h"
#define C 30
#define L 23

void partghost (int *ghost,char maze[L][C])
{
  	do
	{  	  
  	        printf ( "Direção do ghost:" );
  	        scanf ("%d",&ghost[2]);
  	}while(ghost[2]>4 ||ghost[2]<1);
  	//ghost_number = 2;
  	do
  	{
  		printf ( "Qual a posição do GHOST? (x,y)\n" );
  		printf ( "x: " );
  		scanf ( "%d", &ghost[0] ); // referente a linha - ghost
  		printf ( "y: " );
  		scanf ( "%d", &ghost[1] ); // referente a coluna - ghost
  	}while (!validate_position(maze,ghost));
                                           //mudar os parametros
}
