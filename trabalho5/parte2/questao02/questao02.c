/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 5
 * trabalho5.2.02.c
 *
 * Equipe:
 *
 *          Manoel Victor
 *          Paulo Marinho
 *          Wilson Neto
 */

#include <stdio.h>
#include <stdlib.h>

void ListP(int n[], int num);
void Permuta(int n[], int num, int k);
void Troca(int n[], int num, int p1, int p2);
void Mostra(int n[], int num);
void LerVetor(int n[], int num);

void ListP(int n[], int num)
{
    Permuta(n, num, 0);
}

void Mostra(int n[], int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        printf("%d ", n[i]);
    }
    putchar('\n');
}

void Permuta(int n[], int num, int k)
{
    int i, len;

    len = num;

    if(k == len)
        Mostra(n, num);
    else
    {
        for(i = k; i < len; i++)
        {
            Troca(n, num, k, i);
            Permuta(n, num, k+1);
            Troca(n, num, i, k);
        }
    }
}

void Troca(int n[], int num, int p1, int p2)
{
    int aux;

    aux = n[p1];
    n[p1] = n[p2];
    n[p2] = aux;
}

void LerVetor(int n[], int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        scanf("%d", &n[i]);
    }

}

int main()
{
    int *n, num, i;

    puts("Informe a quantidade de numeros:");
    scanf("%d", &num);

    n = malloc(sizeof(int) * num);

    puts("Informe o valores:");
    LerVetor(n, num);

    ListP(n, num);   

    return 0;
}
