/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * function.c
 *
 * Equipe:
 *
 *          Delrick Oliveira
 *          Lucas Frota
 *          Davi Tavares
 *          Evandro Fernandes
 *          Manoel Victor 
 */

#include <stdio.h>
#include <stdlib.h>

void inters(int n, int *a,int *b, int *c)
{
	int i, j, *p;
    
    p = &c[0]; //ponteiro 'p' passa a apontar para o primeiro endereço da matriz 'c'

	for(i = 0; i < n; i++) //indice que ira variar menos
 	{
		for(j = 0; j < n; j++) //indice que ira variar mais
		{
			if(a[i] == b[j])
			{
					*p = a[i]; //local da memoria em que 'p' esta apontado recebe a[i]
					p++; //'p' passa a apontar para o proximo endereço da matriz 'c'
			}
		}
	}
}

int taminters(int n, int a[n], int b[n])
{
	int tam = 0, i, j;//tamanho,indice i, indice j

	for(i = 0; i < n; i++)//indice que ira variar menos
		for(j = 0; j < n; j++)//indice que ira variar mais
			if(a[i] == b[j])//verifica valores de a[í] e b[j], se forem tamanho da interseçao é incrementado
				tam++;

	return tam;
}

void ler_vetor(int n, int v[n])
{
	int cont;

    printf("Informe os valores do vetor:\n"); //é inapropriado usar printf em funçao void, mas assim fica melhor 
    					      //para o usuario saber o que está acontacendo.
	for(cont = 0; cont < n; cont++)
		scanf("%d", &v[cont]);//lê valores para o vetor
}
