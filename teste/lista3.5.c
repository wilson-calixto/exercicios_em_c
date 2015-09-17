#include <stdio.h>
#include"matriz.c"
#define MAX 100

int main(int argc,const char *argv[])
	{
		int m,n;
		int A[MAX][MAX];

		printf("Digite a quantidade de linhas da matriz A:\n");
		scanf("%d", &m);
		printf("Digite a quantidade de colunas da matriz A:\n");
		scanf("%d", &n);	
	preencher(A,m,n);
        if(teste_permutacao(A,m,n)){
            printf("Permutação\n");
            }
        else{
            printf("Noh permutação");
            }
        return 0;
}

