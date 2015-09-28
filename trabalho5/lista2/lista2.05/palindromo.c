int palindromo( char *string, int length ) 
{
	int i, j, b = 1;

	for( i = 0, j = length - 1; i < length, j >= 0; i++, j-- )
	{
		if( string[ i ] != string[ j ] )
		{
			b = 0;
		}
	}
	
	return b; 
}	
