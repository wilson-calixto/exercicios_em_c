/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 1
 * function.c
 *
 * Equipe:
 *
 *          Davi Tavares
 *          Delrick Oliveira
 *          Evandro Fernandes
 *          Lucas Frota
 *          Manoel Victor
 */

#include <stdio.h>
#include <stdlib.h>

float power(float x, int y) //funçao para calcular potencia
{
    if(y == 1)
        return x;
    else
        return x* power(x, y-1);
}

float raiz(float x) //funçao para calcular raiz quadrada
{
    float n; // contador
    float recorre = x; //auxiliar

    for(n = 0; n < 10; n++) //loop de 0 a 9
        recorre = recorre/2 + x/(2*recorre);

    return recorre; //retorna recorre
}

void sort(float *x, int n) //funçao para ordenar o vetor
{
    int i,j; //i - contador 1, j - contador 2
    float aux; //auxiliar

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(x[i] < x[j])
            {
                aux = x[i]; // troca de valores entre variaveis
                x[i] = x[j];// --------------------------------
                x[j] = aux; // --------------------------------
            }
        }
    }
}

void elimina(float *x, int n) //função para eliminar valores repetidos dentro de um vetor
{
    int i; // contador

    sort(x, n); //ordena o vetor

    for(i = 0; i < n; i++)
    {
        if(x[i] == x[i+1])
        {
            x[i] = 0;
            sort(x, n);
        }
    }
}

void ler_vetores(float *x, float *y, int n) //funçao para ler valores para vetores X e Y
{
    int i; //contador

    for(i = 0; i < n; i++)
    {
        printf("Informe o valor de x:\n");
        scanf("%f", &x[i]); //lê valores para o vetor 'X'

        printf("Informe o valor de y:\n");
        scanf("%f", &y[i]); //lê valores para o vetor 'Y'
    }
}

void verificaN(int *n) //funçao para verificar valor de 'n'
{
    if(*n < 1 || *n > 100)
    {
        while(*n < 1 || *n > 100) //loop até que o usuario informe um valor entre o intervalo definido
        {
            printf("Valor invalido. Informe uma valor entre 1 e 100:\n");
            scanf("%d", &*n); //lê valor para 'n'
        }
    }
}

void geraD(float *d, float *A, float *B, float x, float y, int n) //gera vetor de distancias
{
    int i; //contador

    for(i = 0; i < n; i++)
    {
        d[i] = raiz( power( (x - A[i]) , 2) + power( (y - B[i]) , 2) ); 
    }
}

void printD(float *d, int n) //funçao para mostrar o vetor de distancias
{
    int i; //contador
    
    printf("A(s) distancia(s) é/são: ");

    for(i = 0; i < n; i++)
    {
        if(d[i] != 0)
            printf("%0.2f ", d[i]);
    }

    putchar('\n'); //pula uma linha
}
