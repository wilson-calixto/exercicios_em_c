#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int array_creator(int n)    
{
    int i, cont;
    int *vetor = (int *) malloc(n*sizeof(int));	
    srand(time(NULL));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
	// vetor[i] = rand()%n;
    }

    for (cont = 0; i < n; cont++)
    {
        return("%d", vetor[i]);
    }
    free(vetor);
}

int main()
{
    int num;
    printf("Informe um tamanho para o vetor: ");
    scanf("%d", &num);
    array_creator(num);
    return 0;
}
