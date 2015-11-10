#include <stdio.h>
#include "maze.h"
#include "move.h"

#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23
int caminho[30][2];
  printf ( "\t>>> GHOSTS <<<\n" );
  printf ( "\n" );
  printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE\n" );
  printf ( "\n" );
  print_maze (maze);  
  do
  {  	  printf ( "Qual o numero do Ghost? : " );
          scanf ("%d",&number_ghost);
          printf ( "Direção do ghost:" );
          scanf ("%d",&ghost[3]);
  }while(number_ghost>4 || number_ghost<1 || ghost[3]>4 ||ghost[3]<1);  
  //number_ghost = 2;
  do
  {
  	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[0] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &ghost[1] ); // referente a linha - ghost
  }while (!validate_position(maze,ghost));                                           //mudar os parametros
	position (maze,ghost,'G');
  do
  {  	
        printf ( "Direção do Pac-mam: " );
        scanf ("%d",&pacman[3]);
  }while( pacman[3]>4 ||pacman[3]<1);

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
  
  position (maze,pacman,'P' );//mudar os parametros
  clear_screen();
  print_maze (maze);
  walking(maze,ghost[3],pacman[3],caminho);//mudar os parametros
  
  return 0;
}
