#include <stdio.h>
#include <stdlib.h>

void read_array(int n, int v[n])
{
	int cont; //contador

	for(cont = 0; cont < n; cont++)
	{
		printf("Informe o %dº valor do vetor: ",cont + 1);
		scanf("%d", &v[cont]); //lê valores para o vetor
	}
		
}

//fatorial
int fatorial(int n) 
{
	if(n == 0)
    {
		return 1;
    }
	//fatorial recursivo
	return (n*fatorial(n-1));
}

void insere_vetor(int tamanho, int *vetor)
{
	int i;
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		scanf("%d", &vetor[i]);
	}
}

void insere_matriz(int linha, int ncoluna, int **matriz)
{
	int i;
	for ( i = 0; i < linha; i += 1 ) 
	{
		matriz[i] = (int*)  malloc (ncoluna*sizeof(int*));
		insere_vetor(ncoluna,matriz[i]);
	}
}
//funcao inverso
void inverso(int *vetor, int s)
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        printf("%d ", vetor[i]);  
    }

}

/* Funcao len
	retorna o numero de caracteres de uma string + 1 (referente ao caractere de fim da linha '\0')
*/	
int len (char str[])
{
    int cont = 0;
    while (str[cont] != '\0')
    {
        cont++;
    }
    cont++;
    return cont;
}
/*---------------------------------------------------------------------------------------------------------------------*/
//Funçao para calcular potencia de x elevado a y

int power(int x, int y)
{
	if(y == 1)
		return x;
	else
		return x * power(x, y -1);
}
/*---------------------------------------------------------------------------------------------------------------------*/

/*  Função para limpar dados alocados numa matriz mxn */

void clean_matrix(int **v, int m)
{
    int i;

    for ( i = 0; i < m; i++ )
    {
        free(v[i]);
    }
    free (v);
}
/*----------------------------------------------------------------------------------------------------------------------*/

//Função para ler um vetor FLOAT

void read_vector(int n, float v[n])
{
        int cont; //contador

	for(cont = 0; cont < n; cont++)
	{
		printf("Informe o %dº valor do vetor: ",cont + 1);
		scanf("%f", &v[cont]); //lê valores para o vetor
	}
        
}
