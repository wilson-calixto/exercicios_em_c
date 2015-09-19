int pesq_matriz(int ntimes, char *time, char ***tabela)
{
	int i;
	
	for ( i = 0; i < ntimes ; i += 1 ) 
	{
		if (tabela[i][0] == time)
		{
			return 1;
		}

	}

	return 0; 
}
