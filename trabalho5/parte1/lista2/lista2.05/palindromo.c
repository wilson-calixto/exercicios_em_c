int palindromo( char *string, int length ) /* Função para verificar se uma string é igual ao seu inverso */
{
	int i, j, b = 1; /* i e j - contadores para loop
			    b - variável que assume valores 1 e 0 conforme valores booleanos */

	for( i = 0, j = length - 1; i < length, j >= 0; i++, j-- ) /* Loop para percorrer string */
	{
		if( string[ i ] != string[ j ] ) /* Compara a string com o seu inverso */
		{
			b = 0;
		}
	}
	
	return b; /* Retorna o valor de b */
}	
