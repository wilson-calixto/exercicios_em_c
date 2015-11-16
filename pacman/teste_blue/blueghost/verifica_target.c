#include <stdio.h>
#include <stdlib.h>
#include "calcula_target.h"
#include "dist.h"
#include "maze.h"
#include "inky.h"
#define COLUNA 1
#define LINHA 0
#define LEFT 4
#define RIGHT 2 
#define DOWN  3
#define UP 1
#define C 30
#define L 23


void dist (int pacman[3])
{
	int posicao_pacman;
	posicao_pacman = pacman[2];
	
	//dir = malloc(sizeof(int) * 2);
	
	if (posicao_pacman == 1 )
	{
		pacman[0] = pacman[0]-2;
	} //operacao_dist(pacman, dir, -2, 0);

	if (posicao_pacman == 2) //operacao_dist(pacman, dir,  0, 2);
	{
		pacman[1] = pacman[1]+2;
	}	
	if (posicao_pacman == 3) //operacao_dist(pacman, dir, 2, 0);
	{
		pacman[0] = pacman[0]+2;
	}	
	if (posicao_pacman == 4) //operacao_dist(pacman, dir, 0, -2);
       {
       	pacman[1] = pacman[1]-2;
       }
	//return dir;
}


void print_maze (char maze[L][C])
{
  int i, j,k;
  printf("   ");
  for (i=0; i<C; i++)
  {
	if (i < 10)
	{
	  printf(" %d ", i);
	}else
	{
	  printf("%d ", i);
	}
  }
  printf("\n");
  k = 0;
  for ( i = 0; i < L; i++ )
  {
   	if (k < 10)
	{
	  printf("%d  ", k++);
	}else
	{
	  printf("%d ", k++);
	}


    for ( j = 0; j < C; j++ )
    {
      switch (maze[i][j])
      {
	      case '0':
		      printf("[X]");
		      break;
	      case '7':
		      printf("   ");
      		      break;
	      case '6':
		      printf("   ");
		      break;
	      case '3':
		      printf(" G "); 
		      break;
	      case '5':
		      printf(" P "); 
		      break;
	      case '4':
	             printf(" R ");
	             break;
	      case '8':
	      	      printf(" T ");
		      break;
	      case ' ':
		      printf("   ");
		      break;
      }

    }
    printf ( "\n" );
  }
}

void calcula_target(int red[3],int pacman[3],int target[2])
{
       target[LINHA]=(pacman[LINHA] - red[LINHA]) + pacman[LINHA];
       target[COLUNA]=(pacman[COLUNA] - red[COLUNA]) + pacman[COLUNA];
}

void inky(int pacman[3], int red[3], int target[2])
{
       dist(pacman);
       calcula_target(red, pacman, target);                         
}

void position(char maze[L][C], int numbers_player[3], char player)
{
  int i,j;       
  i=numbers_player[0];
  j=numbers_player[1];
  maze[i][j]= player;
}

void verifica_target(char maze[23][30], int target[2])
{
	if (target[0]>29)
	{
		target[0]=28;
		if (maze[target[0]][target[1]]=='0')
		{
			if (maze[target[0]][target[1]+1]=='0' && maze[target[0]][target[1]-1]=='0' && maze[target[0]+1][target[1]]=='0' && maze[target[0]-1][target[1]]=='0' )
		        {
		                if (target[0]>14)
		                {
		                        target[0]--;
		                        verifica_target(maze, target);
		                }
		                else 
		                {
		                        if (target[0]<14)
		                        {
		                                target[0]++;
		                                verifica_target(maze, target);
		                        }
		                }            
		                
		        }
		}
		
				
	        else
	        {
	                maze[target[0]][target[1]]='T';
	        }
	}
	if (target[1]>22)
	{
		target[1]=21;
	}

}

int main (int argc, const char *argv[])
{
        char maze[L][C]={{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ','7','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ',' ','7','0','0','0','0','0','0','0','0','0','0','0','7',' ',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ','7',' ','7','0',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0',' ','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ','7',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'}};
        
        int red[3], pacman[3], *dis, ghost[3], target[2];
        
       
        dis=malloc(sizeof(int) * 2);
        red[0]=6;
        red[1]=8;
        red[2]=RIGHT;
        position(maze ,red, '4');
        
        pacman[0]=8;  
        pacman[1]=10;
        pacman[2]=RIGHT;
        position(maze ,pacman, '5');
        
        ghost[0]=1;
        ghost[1]=1;
        ghost[2]=RIGHT;
        position(maze ,ghost, '3');
        
        dist(pacman);
        inky(pacman, red, target);
        
        verifica_target(maze, target);
        
        
        position(maze ,target, '8');
        
        print_maze (maze);
        
        return 0;
}

