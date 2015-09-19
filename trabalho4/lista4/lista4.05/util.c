#include <stdio.h>
#define MAX 100

int A[MAX][MAX]; 

void preencher(int n)
{		
	int i,j;
 	for (i= 0; i<n;i++)
	{
    		for(j=0;j<n;j++)
		{ 
         		scanf("%d",&A[i][j]);
     		}
  	}
}

int devolveMaior (int m[][MAX], int n, int *lin, int *col) {
  int i, j;
  int maior = m[0][0];
  *lin = 0;
  *col = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (maior < m[i][j]) {
        maior = m[i][j];
        *lin = i;
        *col = j;
      }
  return (maior);
 }

void imprimeMaior(int n){
	int i,maior,linha,coluna;	
	for (i = 0; i < (n*n); i++) {
    		maior = devolveMaior(A, n, &linha, &coluna);
    		printf ("%d em (%d, %d)\n", maior, linha, coluna);
    		A[linha][coluna] = -1;
 	 }
}

