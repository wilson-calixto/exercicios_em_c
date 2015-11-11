#define C 30
#define L 23

int validate_position(int maze[L][C], int linha, int coluna)
{
  if (maze[linha][coluna]== 8 || maze[linha][coluna] == 1 || maze[linha][coluna] == 7 )
  {
    return 1;
  }
  else
  {
    return 0;
  }

}
