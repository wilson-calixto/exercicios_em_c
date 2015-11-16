#include "validate_position.h"
#include <stdio.h>
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define C 30
#define L 23
#define TARGET 4
/* Defina o alvo para o fantasma pink
 * de acordo com a regra são 4 "casas"
 * a frente do pacman */
 
void pink(char maze[L][C],int ghost[3],int pacman[3],int target[2])
{                          
  int result,copia[3],i=ghost[0],j=ghost[1],d=ghost[2];

  copia[0]=ghost[0];
  copia[1]=ghost[1];
  copia[2]=ghost[2];
  if (d == UP) // se a direção to pacman for para cima valida 4 "casas" para cima
  {
    copia[1]-=TARGET;
    result = validate_position (maze,ghost[0],copia[1]);// falta terminar de adaptar de 2 variaveis para um vetor
    if (result == 1)
    {
      target[0]=i-TARGET;
      target[1]=j;
     // maze[i-TARGET][j] = 'T';
    
    }
  }
  else if (d == RIGHT)
  {
    copia[0]+=TARGET;
    result = validate_position (maze,ghost[0],copia[1]);
    if (result == 1)
    {
      target[0]=i;
      target[1]=j+TARGET;
    //  maze[i][j+TARGET] = 'T';
      
    }
  }
  else if (d == DOWN)
  {
    copia[1]+=TARGET;
    result = validate_position (maze,ghost[0],copia[1]);
    if (result == 1)
    {
      target[0]= i+TARGET;
      target[1]= j;
    //  maze[i+TARGET][j] = 'T';
     
    }
  }
  else if (d == LEFT)
  {
    copia[0]-=4;
    result = validate_position (maze,ghost[0],copia[1]);
    if (result == 1)
    {
      target[0]=i;
      target[1]=j-TARGET;
     // maze[i][j-TARGET];
	}
  }
}
