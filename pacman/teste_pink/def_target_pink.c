#include "validate_position.h"
#include <stdlib.h>
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define C 30
#define L 23
#define TARGET 4
#define LINHA 1
#define COLUNA 0
#define TRUE 1


/* Defina o alvo para o fantasma pink
 * de acordo com a regra são 4 "casas"
 * a frente do pacman */
void *def_target_pink(char maze[L][C],int ghost[3],int pacman[3], int target[])
{                          
  int result,i=ghost[0],j=ghost[1],d=ghost[2],*p;
  p = target;
 // ghost[0] linha
 // ghost[1] coluna
 // ghost[2] direçao
  if (d == UP) // se a direção to pacman for para cima valida 4 "casas" para cima
  {

    ghost[COLUNA]-=TARGET;
    result = validate_position (maze,ghost);// falta terminar de adaptar de 2 variaveis para um vetor
    if (result == TRUE)
    {
      *p = i-TARGET;
       p++;
      *p = j;
      maze[i-TARGET][j] = 'T';
    }
  }
  else if (d == RIGHT)
  {
    ghost[LINHA]+=TARGET;
    result = validate_position (maze,ghost);
    if (result == TRUE)
    {
      *p =i;
       p++;
      *p =j+TARGET;
      maze[i][j+TARGET] = 'T';
    }
  }
  else if (d == DOWN)
  {
    ghost[COLUNA]+=TARGET;
    result = validate_position (maze,ghost);
    if (result == TRUE)
    {
      *p= i+TARGET;
       p++;
      *p =j;
      maze[i+TARGET][j] = 'T';
    }
  }
  else if (d == LEFT)
  {
    ghost[LINHA]-=4;
    result = validate_position (maze,ghost);
    if (result == TRUE)
    {
      *p=i;
       p++;
      *p =j-TARGET;
      maze[i][j-TARGET];
    }
  }
}

