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
    
    p = &c[0];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i] == b[j])
			{
					*p = a[i];
					p++;
			}
		}
	}
}

int taminters(int n, int a[n], int b[n])
{
	int tam = 0, i, j;

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			if(a[i] == b[j])
				tam++;

	return tam;
}

void ler_vetor(int n, int v[n])
{
	int cont;

    printf("Informe os valores do vetor:\n");

	for(cont = 0; cont < n; cont++)
		scanf("%d", &v[cont]);
}
