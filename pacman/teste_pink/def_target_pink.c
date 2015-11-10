#include "validate_position.h"

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define C 30
#define L 23

/* Defina o alvo para o fantasma pink
 * de acordo com a regra são 4 "casas"
 * a frente do pacman */
void def_target_pink1(char maze[L][C],int vetor[3], int d)
{                             //      i==i j==j
  int result,copia[3],i=vetor[0],j=vetor[1];
  copia[0]=vetor[0];
  copia[1]=vetor[1];
  copia[2]=vetor[2];
  if (d == UP) // se a direção to pacman for para cima valida 4 "casas" para cima
  {
    copia[0]-=4;
    result = validate_position (maze,copia);// falta terminar de adaptar de 2 variaveis para um vetor
    if (result == 1)
    {
      maze[i-4][j] = 'T';
    }
  }
  else if (d == RIGHT)
  {
    copia[1]+=4;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      maze[i][j+4] = 'T';
    }
  }
  else if (d == DOWN)
  {
    copia[0]+=4;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      maze[i+4][j] = 'T';
    }
  }
  else if (d == LEFT)
  {
    copia[1]-=4;
    result = validate_position (maze,copia);
    if (result == 1)
    {
      maze[i][j-4];
    }
  }
}
