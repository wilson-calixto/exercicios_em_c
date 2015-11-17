/*Codigo Finalizado por Evandro Fernandes*/
#include "validate_position.h"
#include <stdio.h>
#define UP 3
#define RIGHT 2
#define DOWN 1
#define LEFT 4
#define C 30
#define L 23
#define TARGET 4
/* Defina o alvo para o fantasma pink
 * de acordo com a regra são 4 "casas"
 * a frente do pacman */
 
void pink(char maze[L][C], int ghost[3],int pacman[3],int target[2])
{              
	int result,i,j;

	switch (pacman[2])
		{
			case 1:
				target[0]= pacman[0] + TARGET;
	      			target[1]= (pacman[1]);
				result = validate_position (maze,target[0],target[1]);
				if (result == 1)
				{
				target[0]= pacman[0] + TARGET;
	      			target[1]= (pacman[1]);				
				break;
				}
				else
				{
				target[0]= 1;
				target[1]= 28;
				break;
				}
			case 2:
				target[0]= pacman[0];
				target[1]= (pacman[1]) + TARGET;
				result = validate_position (maze,target[0],target[1]);
				if (result == 1)
				{
				target[0]= pacman[0];
				target[1]= (pacman[1]) + TARGET;				
				break;
				}
				else
				{
				target[0]= 1;
				target[1]= 28;
				break;
				}
			case 3:
				target[0]= pacman[0] - TARGET;
				target[1]= (pacman[1]);
				result = validate_position (maze,target[0],target[1]);
				if (result == 1)
				{
				target[0]= pacman[0] - TARGET;
				target[1]= (pacman[1]);				
				break;
				}
				else
				{
				target[0]= 1;
				target[1]= 28;
				break;
				}
			case 4:
				target[0]= pacman[0];
				target[1]= (pacman[1]) - TARGET;
				result = validate_position (maze,target[0],target[1]);
				if (result == 1)
				{
				target[0]= pacman[0];
				target[1]= (pacman[1]) - TARGET;				
				break;
				}
				else
				{
				target[0]= 1;
				target[1]= 28;
				break;
				}
		}
}            
