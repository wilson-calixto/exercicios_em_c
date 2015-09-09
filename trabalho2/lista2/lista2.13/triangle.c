int triangle( float a, float b, float c ) 
{
	
	if( !(a + b > c) ) 
	{
		return 2; /* retorna 2 se os lados do triangulo sao invalidos */
	}
	else 
	{
		if( a == b && b == c ) 
		{
			return 3; /* retorna 3 se o triangulo e equilatero */
		}
		else if( a == b || b == c || a == c ) 
		{
			return 4; /* retorna 4 se o triangulo e isosceles */
		}
		else if( a != b && a != c ) 
		{
			return 5; /* retorna 5 se o triangulo e escaleno */
		}
	}
}
