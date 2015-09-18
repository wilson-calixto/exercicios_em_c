#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void preencher(int A[MAX][MAX], int n)
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

int devolveMaior (int m[MAX][MAX], int n, int *lin, int *col) {
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
