#include <stdio.h>
#include <stdlib.h>
#include "validate_position.h"
#include "maze.h"
#define C 30
#define L 23

void partpackman (int *pacman,char maze[L][C])
{
 	 do
 	 {  	
 	       printf ( "Direção do Pac-mam: " );
 	       scanf ("%d",&pacman[2]);
 	 }while( pacman[2]>4 ||pacman[2]<1);

  	do 	
  	{
  		print_maze (maze);
  		printf ( "Qual a posição do Pacman? (x,y)\n" );
  		printf ( "x: " );
  		scanf ( "%d", &pacman[0]); // referente a coluna - ghost
  		printf ( "y: " );
  		scanf ( "%d", &pacman[1]); // referente a linha - ghost
  	}while (!validate_position(maze,pacman));
}
