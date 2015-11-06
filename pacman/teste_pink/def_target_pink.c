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
void def_target_pink(char maze[L][C],int x, int y, int d)
{
  int result;

  if (d == UP) // se a direção to pacman for para cima valida 4 "casas" para cima
  {
    result = validate_position (maze,x,y-4);
    if (result == 1)
    {
      maze[y+4][x] = 'T';
    }
  }
  else if (d == RIGHT)
  {
    result = validate_position (maze,x+4,y);
    if (result == 1)
    {
      maze[y][x+4] = 'T';
    }
  }
  else if (d == DOWN)
  {
    result = validate_position (maze,x,y+4);
    if (result == 1)
    {
      maze[y+4][x] = 'T';
    }
  }
  else if (d == LEFT)
  {
    result = validate_position (maze,x-4,y);
    if (result == 1)
    {
      maze[y][x-4];
    }
  }
}
