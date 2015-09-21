void inicializar( int matriz[][100], int m, int n ) /* Função para preencher matriz 0*/
{
	int i, j, v = 1;

	for( i = 0; i < m; i++ )
        {
        	for( j = 0; j < n; j++ )
                {
                        matriz[i][j] = 0; /* Inicializa elementos da matriz com 0 */
                }
        }

	for( i = 0; i < m; i++ )
        {
                for( j = 0; j < n; j++ )
                {
                        matriz[i][j] = v; /* Preenche matriz com números de 1 a 10000 */
                        v++;
                }
        }
}
