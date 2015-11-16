#include <stdio.h>
#include <stdlib.h>
#include "calcula_target.h"
#include "dist.h"
#include "maze.h"

#define COLUNA 1
#define LINHA 0


void verifica_target(char maze[23][30], int target[2])
{
        if (maze[target[0]][target[1]]!=' ')
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
        	        if (maze[target[0]][target[1]]=='0')
		        {
		        	if (maze[target[0]][target[1]+1]=='0' && maze[target[0]][target[1]-1]=='0' && maze[target[0]+1][target[1]]=='0' && maze[target[0]-1][target[1]]=='0' )  
		                {
		                        if (target[0]>11)
		                        {
		                                target[0]--;
		                                verifica_target(maze, target);
		                        }
		                        else 
		                        {
		                                if (target[0]<11)
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

        }
}        



void calcula_target(char maze[23][30], int red[3],int pacman[3],int target[2])
{
	target[LINHA]=(pacman[LINHA] - red[LINHA]) + pacman[LINHA];
       target[COLUNA]=(pacman[COLUNA] - red[COLUNA]) + pacman[COLUNA];
       verifica_target(maze, target);
       
}

