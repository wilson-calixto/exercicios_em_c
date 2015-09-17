/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.14.c
 *
 * Equipe:
 *
 */


#include	<stdio.h>
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
   

    int
main ( int argc, char *argv[] )
{
    int **matriz,*itinerario,custo=0,ordem,i;
    
    /* pede a ordem da matriz */
   /* printf ( "Digite a ordem da matriz\n" );*/
    scanf("%d",&ordem);

	/* inicia o vetor com o dobro da ordem da matriz*/    
    itinerario=(int*)(malloc((ordem*2)*sizeof(int)));    

    /*inicia a matriz*/
    matriz=(int**)malloc(ordem*sizeof(int*));  
    for ( i=0;i<ordem ;i++ )
    {
        matriz[i]=(int*)malloc(ordem*sizeof(int));
    }
	
 	/*completa a matriz com dados*/
    pede_dados(matriz,ordem);
   
    /* completa o vetor itinerario com dados */
    completa_vetor(itinerario,ordem);

	/* calcula o custo do itinerario*/
    custo=calcula_custo(matriz,itinerario,ordem);
    
    /* mostra o resultado final*/
    printf ( "%d\n",custo );


    return 0;
}	


/*Dada uma matriz  quadrada e sua ordem, a funcao completa essa matriz */
void pede_dados(int **matriz,int ordem)
{
	/*i sao as linhas e j sao as colunas, ordem e a ordem da matriz que e quadrada*/
    int i,j;
    /*printf("vc esta na matriz\n");*/
    for (i=0;i<ordem;i++ )
    {   
        for (j=0;j<ordem ;j++ )
        {
/*                printf ( "Digite um numero da matriz\n" ); */
                scanf ( "%d", &matriz[i][j] );
        }    
     }
}

/* Dada uma um vetor e seu tamanho, a funcao completa esse vetor */
void completa_vetor(int *itinerario,int ordem)
{
    int i;
        ordem*=2;
/*        printf("vc esta no vetor\n");*/
    for ( i=0;i<ordem;i++ )
        {
           /* printf ( "Digite o numero o vetor\n" );*/
           scanf ( "%d", &itinerario[i] );      
        }
}


/* dado uma matriz quadrada, sua ordem e um vetor, a funcao retorna o custo do itinerario */
int calcula_custo(int **matriz,int *itinerario,int ordem)
{   
    int i,linha=0,coluna=0,acm=0,tamanho_max=0;
        tamanho_max=((ordem*2)-1);
     
    for (i=0;i<tamanho_max;i++)
    {
        linha=itinerario[i];
        coluna=itinerario[i+1];
        acm+=matriz[linha][coluna];
    
    }

    return acm;

}

