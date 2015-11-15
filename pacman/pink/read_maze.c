#include <stdio.h> 
#define C 30
#define L 23





void read_maze (char maze[L][C])
{
	int aux,i,j;
	

	for( i = 0; i < L; i++ ) 
	{
		for( j = 0; j < C; j++ ) 
		{
			scanf("%d",&aux );
			
			if(aux==1)
			{
				maze[i][j]=' ';
			}
		    if(aux==0)
			{
				maze[i][j]='0';
			}
			if(aux==7)
			{
				maze[i][j]='7';
			}
			if(aux==6)
			{
				maze[i][j]='6';
			}			
						
		}
	}

}

