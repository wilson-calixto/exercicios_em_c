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
  int ghost[3],pacman[3], number_ghost=0;
  char maze[L][C];
  char ch,path[20] = "maze.txt";
  int i=0,j=0;
 /* 
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
*/	
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
 		 
 	 	walking(maze,ghost,pacman);//mudar os parametros
  		print_maze (maze);
  	}
  }
  return 0;
}
