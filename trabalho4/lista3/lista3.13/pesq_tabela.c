int pesq_tabelas(int ntimes, char *time, char ***tabela)
{
	int i;
	
	for ( i = 0; tabela[i][0] != NULL ; i += 1 ) 
	{
		if (tabela[i][0] == time)
		{
			return 1;
		}

	}

	return i ; 
}
