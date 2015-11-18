#include <stdio.h> 
#define C 30
#define L 23

void print_maze (char maze[L][C])
{
  int i, j,k;
  printf("   ");
  for (i=0; i<C; i++)
  {
	if (i < 10)
	{
	  printf(" %d ", i);
	}else
	{
	  printf("%d ", i);
	}
  }
  printf("\n");
  k = 0;
  for ( i = 0; i < L; i++ )
  {
   	if (k < 10)
	{
	  printf("%d  ", k++);
	}else
	{
	  printf("%d ", k++);
	}


    for ( j = 0; j < C; j++ )
    {
      switch (maze[i][j])
      {
	      case '0':
		      printf("ꗞꗞꗞ");
		      break;
	      case '7':
		      printf("   ");
      		      break;
	      case '6':
		      printf("   ");
		      break;
	      case '3':
		      printf(" G "); 
		      break;
	      case '5':
		      printf(" P "); 
		      break;
	      case '4':
		      printf(" R ");
		      break;
	      case '8':
		      printf(" T ");
		      break;
	      case ' ':
		      printf("   ");
		      break;
      }

    }
    printf ( "\n" );
  }
//    printf ( "\n" );
//    printf ( "\n" );
//for ( i = 0; i < L; i++ )
//  {
//    for ( j = 0; j < C; j++ )
//    {
//     printf("%c", maze[i][j] ); 
//    }
//    printf ( "\n" );
//  }
}
