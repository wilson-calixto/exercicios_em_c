//Em construção!!!

void walking(char maze[23][30], int ghost[3], int target[2])
{
	int x,y; 
	y =  ghost[0];
	x =  ghost[1]; 


	while (maze[x][y] != '7')
	{
		switch (ghost[2])
		{
			case 1:
				x = x+1;
				break;
			case 2:
				y = y+1;
				break;
			case 3:
				x = x-1;
				break;
			case 4:
				y = y-1;
				break;	
		}
		if (validate_position(maze, int x , int y))
		{
			ghost[0] = y;      
			ghost[1] = x;
			maze[x][y]  = 'G'; 
		}else
		{
			x = ghost[1];
			y = ghost[0];
			ghost[2] += 1;
			if (ghost[2] > 4)
			{
				ghost[2] = 1;
			}
		}
	}

}
