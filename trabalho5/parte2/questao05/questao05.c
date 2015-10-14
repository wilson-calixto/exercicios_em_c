#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include <time.h>


int main(int argc, const char *argv[])
{
    int v[5000], x, n;
    clock_t ti1, tf1, ti2, tf2;
    printf("digite o tamanho do vetor:\n");
    scanf("%d",&n);
    array_creator(n, v);
 
    printf("digite o termo a ser procurado:\n");
    scanf("%d",&x);
    ti1 = clock();
    busca_binaria(x, n, v);
    tf1 = clock();
    printf("Tempo da busca binária: ");
    tempo(ti1, tf1);
    
    ti2 = clock();
    buscaSequencial(n, v, x);
    tf2 = clock();
    printf("Tempo da busca sequencial: ");
    tempo(ti2,tf2);



    return 0;
}


