/*
 * Programaçao de Computadores e Algoritmos
 *
 * Teste 4
 *
 * Grupo:
 *          Davi Tavares
 *          Delrick Oliveira
 *          Evandro Fernandes
 *          Lucas Frota
 *          Manoel Victor
 */

#include <stdio.h>
#include <stdlib.h>

void inters(int n, int *a,int *b, int *c)
{
	int i, j, *p;
    
    p = &c[i1][0];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i1][i] == b[i1][j])
			{
					*p = a[i1][i];
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




int main(int argc, const char *argv[])
{
    int n, *inter, tam, i1, j1, *vetor;

    puts("Informe o valor de n:");
    scanf("%d", &n);

    vetor = malloc(sizeof(int) * n);

    for(i1= 0; i1 < n; i1++)
    {
        printf("Informe o tamanho do %dº conjunto: ",i1 + 1);
        scanf("%d", &tam);
       
        vetor[i1] = malloc(sizeof(int) * tam);

        ler_vetor(j1, *vetor[j1]);

    for(i1 = 0; i1 < n - 1; i1++)
    {
        int interaux[n][taminters(i1, vetor[i1][], vetor[i1 + 1][])];

        inters(i1 ,vetor[i1][], vetor[i1 + 1][], interaux[i1][]);           
    
    }

	return 0;
}
