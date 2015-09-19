void bubble_sort( int * array, int size ) /* Função para ordenar vetor */
{
	int i, j, swap = 0, temp; /* swap - variável para verificar se é necessário mais um loop para ordenar vetor
				       temp - variável para auxiliar na troca de elementos do vetor */
 
	for( i = 0; i < size - 1; i++ ) 
	{
		for( j = 0; j < size - 1; j++ ) 
		{
			if( *array[ i ] > *array[ i + 1 ] ) /* Compara valores */
			{
				/* Troca elementos do vetor para ordena-lo */
				swap = 1;
				temp = *array[ i ];
				*array[ i ] = *array[ i + 1 ];
				*array[ i + 1 ] = temp;
			}
		}
		
		if( !swap ) /* Verifica se houve troca */
			break;
	}
}					
