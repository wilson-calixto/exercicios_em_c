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


// Este MAIN foi criado para testar a função walking

		/* ----------  end of function main  ---------- */

int main (int argc, char *argv[])
{
  int ghost[3],pacman[3],target[2], number_ghost=0;
  char maze[L][C];
  char ch,path[20] = "maze.txt";
  int i=0,j=0;
  while (number_ghost != 9)
  {
  	//clear_screen();
	load_maze(maze,path);
  	//print_maze(maze);
  	printf ( "\t>>> GHOSTS <<<\n" );
  	printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE  9.SAIR   \n" );
  	do
  	{  	  
  	  printf ( "Qual o numero do Ghost? = " );
          scanf ("%d", &number_ghost);
  	}while(number_ghost > 4 || number_ghost < 1 || number_ghost == 9  );  
  
  //Lendo cordenadas para o ghost 
  	if (number_ghost != 9)
  	{
		
  		print_maze(maze);
  		read_player(maze,ghost,'3'); 
  		read_player(maze,pacman,'5');
	        switch (number_ghost)
		{
			case 1:
				blinky(pacman,target);
				position(maze,pacman,'8');
				break;
			case 2:
				pink(maze,ghost,pacman,target);
				position(maze,target,'8');
				break;
			case 3:
				inky(pacman,target,maze);
				position(maze,target,'8');
				break;
			case 4:
				clyde(ghost,pacman,target);
				position(maze,target,'8');
		        	break;

		}	
 	 	
		walking(maze,ghost,target);//mudar os parametros
  		print_maze (maze);
  	}
  }
  return 0;
}
