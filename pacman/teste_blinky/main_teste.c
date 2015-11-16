#include <stdio.h>
#include "maze.h"
#include "move.h"
#include "math.h"
#include "validate_position.h"
#include "walking.h"
#include "clear_screen.h"
#include "change_path.h"



#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23


void target_blinky(int pacman[3], int target[2])
{
    target[0] = pacman[0];
    target[1] = pacman[1];
}

// Este MAIN foi criado para testar a função walking

		/* ----------  end of function main  ---------- */

int main (int argc, char *argv[])
{
  int ghost[3],pacman[3], target[2];
  char maze[L][C];
  char ch;
  int i=0,j=0;
  FILE *fp;
  fp = fopen("maze.txt","r" );
  if(fp == NULL)
	printf("Erro, nao foi possivel abrir o arquivo\n");
  else
	while( (ch=fgetc(fp))!= EOF )
	{
		if (ch != '\n')
		{
			maze[i][j] = ch;
			j++;
		}else
		{
			j = 0;
			i++;
		}
	}		
  fclose(fp);
	
  clear_screen();
  
  printf ( "\t>>> BLINKY GHOST <<<\n" );

  do
  {
  	print_maze(maze);
	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[0] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &ghost[1] ); // referente a linha - ghost
	printf ( "Direção do ghost = 1-Down , 2-Right, 3-Up, 4-Left = " );
        scanf ("%d", &ghost[2]);
	clear_screen();
  }while (!validate_position(maze,ghost[0],ghost[1]) || ghost[2] > 4 ||ghost[2] < 1);                                           //mudar os parametros
	position (maze,ghost,'3');

  do 
  {
	clear_screen();
  	print_maze (maze);
  	printf ( "Qual a posição do Pacman? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &pacman[0]); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &pacman[1]); // referente a linha - ghost
  }while (!validate_position(maze,pacman[0],pacman[1]));                          //mudar os parametros
  
  do
  {  	
        printf ( "Direção do Pac-mam: 1-Down , 2-Right, 3-Up, 4-Left =  " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);

  target_blinky(pacman,target);
  position (maze,pacman,'5' );//mudar os parametros
  print_maze (maze);
  walking(maze,ghost,target);//mudar os parametros
  print_maze (maze);
  
  return 0;
}
