/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.14.c
 *
 * Equipe:
 *
 */


#include<stdio.h>
#include<stdlib.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
void pede_dados(int **matriz,int ordem);
void completa_vetor(int *itinerario,int ordem);
int calcula_custo(int **matriz,int *itinerario,int ordem);
void imprime_vetor(int *itinerario,int tamanho_do_vetor);

    int
main ( int argc, char *argv[] )
{
    int **matriz,*itinerario,custo=0,ordem,i,tamanho_do_vetor=0;
    
    /* pede a ordem da matriz */
  
    scanf("%d",&ordem);

	/* inicia o vetor com o dobro da ordem da matriz*/    
	tamanho_do_vetor=ordem*2;
    itinerario=(int*)(malloc(tamanho_do_vetor*sizeof(int)));    

    /*inicia a matriz*/
    matriz=(int**)malloc(ordem*sizeof(int*));  
    for ( i=0;i<ordem ;i++ )
    {
        matriz[i]=(int*)malloc(ordem*sizeof(int));
    }
	
 	/*completa a matriz com dados*/
    pede_dados(matriz,ordem);
   
    /* completa o vetor itinerario com dados */
    completa_vetor(itinerario,tamanho_do_vetor);

	/* calcula o custo do itinerario*/
    custo=calcula_custo(matriz,itinerario,tamanho_do_vetor);
    
    /* mostra o resultado final*/
    printf ( "o custo do itinerário ");
    /*imprime vetor*/
	imprime_vetor(itinerario,tamanho_do_vetor);
	printf ( "é\n %d",custo);
    return 0;
}	


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


