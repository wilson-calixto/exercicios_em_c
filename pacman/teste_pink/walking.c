void walking(char maze[23][30], int ghost[3], int target[2])
{
	int x,y; 
	x = ghost[1];
	y = ghost[0];

	while (maze[x][y] != '7')
	{
		//Percorre o caminho em linha até que encontre um obstáculo, ou seja, retorne negativo da função
		//validate position
		while (!validate_position(maze, x, y))
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
			ghost[2] +=1;
			if (ghost[2] > 4) 
			{
				ghost[2] = 1;
			}
		}
		
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
	}

}
