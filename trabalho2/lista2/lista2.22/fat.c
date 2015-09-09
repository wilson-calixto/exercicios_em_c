int fat(int n)
{
	int aux = 1 ,cont;

	for(cont=1;cont<=n;cont++)
	{
		aux *= cont; 	
	}
	return(aux);
}
