#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void array_creator()    
{
    
    int i, cont,n;
    scanf("%d", &n);
    int *vetor;
    vetor = (int *) malloc(n*sizeof(int));	
    // srand(time(NULL));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
	// vetor[i] = rand()%n;
    }

    for (cont = 0; cont < n; cont++)
    {
        printf("%d", vetor[cont]);
    }
    printf("\n");
    free(vetor);   

}

int main(int argv, const char *argc[])
{
    array_creator();
    return 0;
}
