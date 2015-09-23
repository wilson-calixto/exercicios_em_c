/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.5
 *
 * Equipe:
 *
 *          Jackson Gomes
 *          Paulo Marinho
 *          Hermann
 *          Elizabeth
 *          Jailson
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int  n, l, i;
    int *result; 
    
    printf("informe quantas jogadas: \n");
    scanf("%d", &n);

    result = (int*) (malloc(sizeof(int) * n));
    
    printf("informe os valores de cada lancamento: \n");
    
    for (i=0; i<n; i++)
    {
        scanf("%d", &l);
        result[i] = l;
    }
    
    printf("%d", *result);
    free(result);
    result = NULL;

    return 0;
}

