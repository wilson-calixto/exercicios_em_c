#include <stdio.h>
#include "maze.h"
#include "move.h"
#include "math.h"

#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23

		/* ----------  end of function main  ---------- */

int main (int argc, char *argv[])
{
  int ghost[3],pacman[3], number_ghost;
  int maze[L][C];
  int i,j;
  FILE *fp;
  fp = fopen("maze.txt","r" );
  for (i=0;i<L;i++)
  {
	  for (j=0;j<C;j++)
	  {
		  fscanf(fp, "%d", &maze[i][j]);
	  }
  }
  fclose(fp);
  clear_screen();
  printf ( "\t>>> GHOSTS <<<\n" );
  printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE\n" );
  do
  {  	  
  	  printf ( "Qual o numero do Ghost? = " );
          scanf ("%d", &number_ghost);
  }while(number_ghost > 4 || number_ghost < 1 );  
  //number_ghost = 2;
  do
  {
  	print_maze(maze);
	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[1] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &ghost[0] ); // referente a linha - ghost
	printf ( "Direção do ghost = 1-Down , 2-Right, 3-Up, 4-Left = " );
        scanf ("%d", &ghost[2]);
	clear_screen();
  }while (!validate_position(maze,ghost[0],ghost[1]) || ghost[2] > 4 ||ghost[2] < 1);                                           //mudar os parametros
	position (maze,ghost,3);
    
  do 
  {
	clear_screen();
  	print_maze (maze);
  	printf ( "Qual a posição do Pacman? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &pacman[1]); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &pacman[0]); // referente a linha - ghost
  }while (!validate_position(maze,pacman[0],pacman[1]));                          //mudar os parametros
  
  do
  {  	
        printf ( "Direção do Pac-mam: 1-Down , 2-Right, 3-Up, 4-Left =  " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);
  position (maze,pacman,5 );//mudar os parametros
  clear_screen();
  print_maze (maze);
  walking(maze,ghost,pacman);//mudar os parametros
  print_maze (maze);
  
  return 0;
}
