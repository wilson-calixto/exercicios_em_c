#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void array_creator()    
{
    
    int i, cont, n = 0;
    int *vetor = (int *) malloc(n*sizeof(int));	
    scanf("%d", &n);
    // srand(time(NULL));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
	vetor[i] = rand()%n;
    }

    for (cont = 0; i < n; cont++)
    {
    printf("%d", vetor[i]);
    }
    free(vetor);
}

int main()
{
    array_creator();
    return 0;
}
