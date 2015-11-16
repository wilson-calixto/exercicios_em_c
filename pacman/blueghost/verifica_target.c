#include <stdio.h>
#include <stdlib.h>
#include "calcula_target.h"
#include "dist.h"
#include "maze.h"
#include "inky.h"

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

