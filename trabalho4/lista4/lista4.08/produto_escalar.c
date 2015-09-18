int produto_escalar(int tamanho,int *vetor1, int *vetor2)
{
	int pescalar = 0,i;
	for ( i = 0; i < tamanho; i += 1 )
	{
		pescalar = pescalar + (vetor1[i]*vetor2[i]);
	}
	return  pescalar;
}
