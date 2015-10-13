#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void array_creator()    
{
    int vetor[5000], i, cont, n = 0;
    srand(time(NULL));
    
    for(i = 0; i < n; i++)
    {
        vetor[i] = rand()%n;
    }

    for (cont = 0; i < n; cont++)
    {
        printf("%d", vetor[5000]);
    }
}

int main()
{
    array_creator();
    return 0;
}
