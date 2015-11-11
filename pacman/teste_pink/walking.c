//Em construção!!!

void walking(int maze[23][30], int ghost[3], int target[2])
{
	int x,y; 
	y =  ghost[0];
	x =  ghost[1]; 


	while (maze[y][x] != 7)
	{
		switch (ghost[2])
		{
			case 1:
				y = y+1;
				break;
			case 2:
				x = x+1;
				break;
			case 3:
				y = y-1;
				break;
			case 4:
				x = x-1;
				break;	
		}
		if (validate_position(maze, y, x))
		{
			ghost[0] = y;      
			ghost[1] = x;
			if (maze[y][x] != 7)
			{
				maze[y][x]  = 3; 
			}else
			{

			}
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
