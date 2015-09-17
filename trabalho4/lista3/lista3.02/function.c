void test_function(int n, int m, float a[][m], float x[n], float b[m])
{
	for(i=0;i<n;i++)
	{
		for(j = 0; j < m;j++)
		{
			resultado = a[i][j]*x[i];
			if( resultado == b[j] )
			{
				printf("Para o valor %f de A e %f de B, %f de X satisfaz o problema.\n",a[i][j],b[j],x[i]);
			}
			else printf("Para o valor %f de A e %f de B, não %f de X satisfaz o problema.\n",a[i][j],b[j],x[i]);
			
		}
	}
}