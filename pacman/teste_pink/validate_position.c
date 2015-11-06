#define C 30
#define L 23

int validate_position(char maze[L][C], int x, int y)
{

  if (maze[y][x]==' ')
  {
    return 1;
  }
  else
  {
    return 0;
  }

}
