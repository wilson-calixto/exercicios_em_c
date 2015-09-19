/*
 * Programacao de Computadores e ALgoritmos
 * lista3.03.c
 *
 * Equipe:
 *	Sergio Pinheiro
 *	Andressa Moreira
 *	Wilson Araújo
 *	Gabriel Faraco
 *	Benjamin Borges
 *
 */
 
#include <stdio.h>
#define MAX 100


int main(int argc, const char *argv[])
{
	int a, b, c, d, i, j, l;
	float X[MAX][MAX], Y[MAX][MAX], Z[MAX][MAX];	//matrizes

	printf("digite o tamanho da primeira matriz:\n");
	scanf("%d",&a);
	scanf("%d",&b);

	printf("digite os numeros da primeira matriz:\n");
	for (i=0; i<a; i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%f",&X[i][j]);	//leitura dos numeros da primeira matriz
		}
	}

	printf("digite o tamanho da segunda matriz:\n");
	scanf("%d",&c);
	scanf("%d",&d);

	if (b!=c)
	{
		printf("o produto não pode ser feito!\n");
		
	}else{

		printf("digite os numeros da segunda matriz:\n");
		for (i=0; i<c; i++)
		{
			for (j=0;j<d;j++)
			{
				scanf("%f",&Y[i][j]);	//leitura dos numeros da segunda matriz
			}

		}
		
		//imprimir funcao multiplica matriz


	}
	return 0;
}
