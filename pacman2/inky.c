#include <stdio.h>
#include <stdlib.h>
#include "calcula_target.h"
#include "dist2.h"
#include "move.h"

void inky(int pacman[3], int target[2], char maze[23][30])
{
       int red[3];
       do
  	{
		printf ( "Qual a posição do RED? (x,y)\n" );
  		printf ( "x: " );
  		scanf ( "%d", &red[1] ); // referente a coluna - ghost
  		printf ( "y: " );
  		scanf ( "%d", &red[0] ); // referente a linha - ghost
		clear_screen();
	}while (!validate_position(maze,red[0],red[1])); 
      
      position(maze, red, '4');
      print_maze(maze);
      do
      {
      		printf ( "Direção do red = 1-Down , 2-Right, 3-Up, 4-Left = " );
      		scanf ("%d", &red[2]);
      }while (red[2] > 4 ||red[2] < 1);
      
       
       dist2(pacman);
       calcula_target(red, pacman, target);                         
       verifica_target(maze, target);
}


