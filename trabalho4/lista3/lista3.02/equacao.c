int test_function(int n, int m, int a[][m], int x[n], int b[m])
{
	int i, j, resultado = 1;
	
	//Faz uma busca nos vetores e na matriz
	for(i=0;i<n;i++)
	{
		for(j = 0; j < m;j++)
		{
			resultado = a[i][j]*x[i]; //Resolve a equação
			if( resultado != b[j] ) //Verifica se o resultado da equação é verdadeiro
			{
				resultado = 0;
				
			}			
		}
	}
	return resultado;
}