#include "validate_position.h"
#include "def_target_pink.h"

#define C 30
#define L 23
#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

void def_target(char maze[L][C], int ghost, int x, int y, int d)
{
  if (ghost == BLINK)
  {

  }
  else if (ghost == PINK)
  {
    def_target_pink(maze,x,y,d);
  }
  else if (ghost == INKY)
  {

  }
  else if (ghost == CLYDE)
  {

  }
}



