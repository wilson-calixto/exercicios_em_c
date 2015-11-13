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
		      printf("[X]");
		      break;
	      case '7':
		      printf("   ");
      		      break;
	      case '6':
		      printf("   ");
		      break;
	      case 'G':
		      printf(" G "); 
		      break;
	      case 'P':
		      printf(" P "); 
		      break;

	      case ' ':
		      printf("   ");
		      break;    
	      case 'T':
		      printf(" T ");
		      break; 

              case '9':
		      printf(" ");
		      break; 
      }

    }
    printf ( "\n" );
  }
 }
/*
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
*/
