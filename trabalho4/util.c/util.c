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

//funcao inverso
void inverso(int *vetor, int s)
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        printf("%d ", vetor[i]);  
    }

   
}
