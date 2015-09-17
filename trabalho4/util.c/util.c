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
		return 1;
	//fatorial recursivo
	return (n*fatorial(n-1));
}

<<<<<<< HEAD
void insere_vetor(int tamanho, int *vetor)
{
	int i;
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		scanf("%d", &vetor[i]);
	}
}

void insere_matriz(int linha, int ncoluna, int *matriz)
{
	int i;
	for ( i = 0; i < linha; i += 1 ) 
	{
		matriz[i] = malloc (ncoluna*sizeof(int));
		insere_vetor(ncoluna,matriz[i]);
	}
=======
//funcao inverso
void inverso(int *vetor, int s)
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        printf("%d ", vetor[i]);  
    }

   
>>>>>>> 62859485c6e18844c5c8ff91e8c3a1fcf45ebebc
}
