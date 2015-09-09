float calc_num(int n)
{
	int cont = 1;
	float s,aux;

	s = 1.0;

	while(cont <= n)
	{ 
		aux = fat(cont);	
		s +=  1/(float) aux;
		cont++;
	}

	return(s);
}
