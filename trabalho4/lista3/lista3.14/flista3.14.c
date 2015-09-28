#include <stdio.h>
#include <stdlib.h>

/*Dada uma matriz  quadrada e sua ordem, a funcao completa essa matriz */
void pede_dados(int **matriz,int ordem)
{
	
    int i,j;
    
    for (i=0;i<ordem;i++ )
    {   
        for (j=0;j<ordem ;j++ )
        {

                scanf ( "%d", &matriz[i][j] );
        }
    }
}

/* Dada uma um vetor e seu tamanho, a funcao completa esse vetor */
void completa_vetor(int *itinerario,int tamanho_do_vetor)
{
    int i;
    	
    for ( i=0;i<tamanho_do_vetor;i++ )
        {
        
           scanf ( "%d", &itinerario[i] );      
        }
}


/* dado uma matriz quadrada, sua ordem e um vetor, a funcao retorna o custo do itinerario */
int calcula_custo(int **matriz,int *itinerario,int tamanho_do_vetor)
{   
    int i,linha=0,coluna=0,acm=0;
    
    /*o loop vai de 0 ate o tamanho_do_vetor -2 para que o endereco nao estore o vetor*/  
    for (i=0;i<tamanho_do_vetor-1;i++)
    {
    /*linha recebe o elemento do vetor na posicao atual */
        linha=itinerario[i];
    /*coluna recebe o elemento vetor na proxima posicao */
        coluna=itinerario[i+1];
        acm+=matriz[linha][coluna];
    }
    
    return acm;
}

/*imprime o vetor na tela*/

void imprime_vetor(int *itinerario,int tamanho_do_vetor)
{
    int i;
    	
    for ( i=0;i<tamanho_do_vetor;i++ )
    {
        printf ( " %d",itinerario[i] );      
    }
}
