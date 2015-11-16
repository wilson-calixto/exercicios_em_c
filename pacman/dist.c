void dist (int pacman[3])
{
	int posicao_pacman;
	posicao_pacman = pacman[2];
	
	//dir = malloc(sizeof(int) * 2);
	
	if (posicao_pacman == 1 )
	{
		pacman[0] = pacman[0]-2;
	} //operacao_dist(pacman, dir, -2, 0);

	if (posicao_pacman == 2) //operacao_dist(pacman, dir,  0, 2);
	{
		pacman[1] = pacman[1]+2;
	}	
	if (posicao_pacman == 3) //operacao_dist(pacman, dir, 2, 0);
	{
		pacman[0] = pacman[0]+2;
	}	
	if (posicao_pacman == 4) //operacao_dist(pacman, dir, 0, -2);
       {
       	pacman[1] = pacman[1]-2;
       }
	//return dir;
}

