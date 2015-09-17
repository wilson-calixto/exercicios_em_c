#include <stdio.h>
#include <stdlib.h>


void select_sort(int *x)
{
    int i, j, aux;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (x[i]<x[j])
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;				
            }
        }
    }

}
/* funcao recebe dois vetores,o numero de loops (len do vetor) e calcula seu produto */
void produto_escalar(int *vetor1,int *vetor2,int loops)
{   
    int i,produto;   
    for (i=0;i<loops ;i++ )
    {
        produto=vetor1[i]*vetor2[i];

        printf ( "O produto de x[%d] por y[%d] e : %d \n",i+1,i+1,produto );   
    }

}

//-------------------------------------------------------------------------------
void inverso(int *vetor, int s)
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        printf("%d ", vetor[i]);  
    }

   
}

//------------------------------------------------------------------------------
int teste_permutacao(int matriz[][100],int n,int m)
{
    int  i, j, cont1=0, cont2=0, aux=1;
    for (i=0; i < n; i++)
    {
        cont1=0;
        cont2=0;
        for(j=0; j<m; j++)
        {
            
            if(matriz[i][j]==0)
            {
                cont1++;
            }
            if(matriz[i][j]==1)
            {
                cont2++;
            }
        }
        if (cont1!=(n-1) && (cont2!=1))
    {
        aux=0;
    }
    }

    return aux;
} 

//------------------------------------------------------------------------------
int verifica(int m,int n,int a[][100]) 
{
    int verifica = 0, i, j, k, l;

    for(i = 0; i < m; i++) //o 'i' será o primeiro indice da matriz a[m][n] que irá variar menos vezes para fazer a comparação
    {
        for(j = 0; j < n; j++) //o 'j' será o segundo indice da matriz a[m][n] que irá variar menos
        {
            for(k = 0; k < m; k++) //o 'k' será o primeiro indice da matriz a[m][n] que irá variar mais vezes para fazer a comparação
            {
                for(l = 0; l < n; l++) //o 'l' será o segundo indice da matriz a[m][n] que irá variar mais vezes.
                {
                    if((a[i][j]  == a[k][l]) && (i != k) && (j != l)) // verifica se a[i][j] é igual a a[k][l], se 'i' é diferente de 'k'
                    {						                          // e se 'j' é diferente de 'l' pois se forem iguais será uma compa-
                        verifica = 1;				                  // ração de uma matriz com indices iguais ex: a[1][1] == a[1][1],
                    }						                          // se não houvesse essas duas ultimas comparações seria gerado um
                }						                              // bug dizendo que haveria elementos iguais mesmo sem haver. 
            }   
        }
    }

    return verifica;
}
//------------------------------------------------------------------------------
void read_matrix(int m,int n,int a[][100])
{
    int i, j;

    printf("Informe os valores de A: \n");
    
    for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            scanf("%d", &a[i][j]); //lê valores para a matriz 'a'
        } 
    }  
}
