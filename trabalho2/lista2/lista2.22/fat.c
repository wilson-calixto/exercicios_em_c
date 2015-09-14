int fat(int n)
{
	int fat = 1 ,cont;

	for(cont=1;cont<=n;cont++)//calcula o fatorial
	{
		fat *= cont; 	
	}
	return(fat);
}
