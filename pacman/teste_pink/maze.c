#include <stdio.h> 
#define C 30
#define L 23

void print_maze (char maze[L][C])
{
  int i, j;

  for ( i = 0; i < L; i++ )
  {
    for ( j = 0; j < C; j++ )
    {
      printf ( "%c", maze[i][j] );
    }
    printf ( "\n" );
  }

}
