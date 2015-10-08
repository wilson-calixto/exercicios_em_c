/* Função que imprime uma matriz de mxn */

void mostra_matriz(float **mat)
{   
    int i,j,linha=10,coluna=10;

    for ( i = 0; i < linha; i ++ )
    {    
        for ( j = 0; j < coluna; j ++ )
        {
            printf ( "%d", mat[i][j] );
        }
        printf ( "\n" );
    }
}
void mostra_caminho(float **mat)
{   
    int i,j,linha=10,coluna=10;

    for ( i = 0; i < linha; i ++ )
    {    
        for ( j = 0; j < coluna; j ++ )
        {
        	if(mat[i][j]==2)
        	{
            	printf ( "0");
            }else{
            
            	printf ( "1");
            }
            
        }
        printf ( "\n" );
    }
}