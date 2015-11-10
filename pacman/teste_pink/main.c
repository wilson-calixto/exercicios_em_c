#include <stdio.h>
#include "maze.h"
#include "move.h"

#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23

int main ( int argc, char *argv[] )
{
  int ghost[3],pacman[3], number_ghost;
  int maze[L][C],i,j;
 
  for (i=0;i<23;i++)
  {
	 for (j = 0; j < 30; j++)
	 {
		 scanf("%d", &maze[i][j]);
	 } 
  }
  printf("\n");
  printf ( "\t>>> GHOSTS <<<\n" );
  printf ( "\n" );
  printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE\n" );
  printf ( "\n" );
  print_maze (maze); 
  
  do
  {  	  printf ( "Qual o numero do Ghost? : " );
          scanf ("%d", &number_ghost);
          printf ( "Direção do ghost:" );
          scanf ("%d", &ghost[2]);
  }while(number_ghost > 4 || number_ghost < 1 || ghost[2] > 4 ||ghost[2] < 1);  
 /* //number_ghost = 2;
  do
  {
  	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[0] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &ghost[1] ); // referente a linha - ghost
  }while (!validate_position(maze,ghost));                                           //mudar os parametros
	position (maze,ghost,number_ghost);
  do
  {  	
        printf ( "Direção do Ghost: " );
        scanf ("%d",&ghost[2]);
  }while( pacman[2]>4 ||pacman[2]<1);

  
  do 
  {
	clear_screen();
  	print_maze (maze);
  	printf ( "Qual a posição do Pacman? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &pacman[0]); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &pacman[1]); // referente a linha - ghost
  }while (!validate_position(maze,pacman));                          //mudar os parametros
  
  do
  {  	
        printf ( "Direção do Pac-mam: " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);


  position (maze,pacman,5 );//mudar os parametros
  clear_screen();
  print_maze (maze);
  walking(maze,ghost,pacman);//mudar os parametros
  */
  return 0;
}
