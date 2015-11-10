#include "validate_position.h"
#include<stdio.h>
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define C 30
#define L 23// wilson calixto: trocar os i j e k por referencias ao vetor ghost
#define TARGET 4
/* Defina o alvo para o fantasma pink
 * de acordo com a regra são 4 "casas"
 * a frente do pacman */
int def_target_pink(char maze[L][C],int ghost[3],int pacman[3])
{                          
  int result,copia[3],i=ghost[0],j=ghost[1],d=ghost[2],target[2];
  copia[0]=ghost[0];
  copia[1]=ghost[1];
  copia[2]=ghost[2];
  if (d == UP) // se a direção to pacman for para cima valida 4 "casas" para cima
  {
    copia[0]-=TARGET;
    result = validate_position (maze,copia);// falta terminar de adaptar de 2 variaveis para um vetor
    if (result == 1)
    {
      target[0]=i-TARGET;
      target[1]=j;
      maze[i-TARGET][j] = 'T';
      return *target;
    }
  }
  else if (d == RIGHT)
  {
    copia[1]+=TARGET;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      target[0]=i;
      target[1]=j+TARGET;
      maze[i][j+TARGET] = 'T';
      return *target;
    }
  }
  else if (d == DOWN)
  {
    copia[0]+=TARGET;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      target[0]= i+TARGET;
      target[1]= j;
      maze[i+TARGET][j] = 'T';
      return *target;
    }
  }
  else if (d == LEFT)
  {
    copia[1]-=4;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      target[0]=i;
      target[1]=j-TARGET;
      maze[i][j-TARGET];
      return *target;
    }
  }
	
}
