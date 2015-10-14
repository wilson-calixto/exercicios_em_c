#include <stdio.h>
#include <stdlib.h>
#include "Permutacao.h"

void ListP(int n[], int num)
{
    Permuta(n, num, 0); //Chama a funçao que Permuta
}

void Mostra(int n[], int num)
{
    int i; //i - contador

    for(i = 0; i < num; i++)
    {
        printf("%d ", n[i]); //Informe os valores do vetor
    }
    putchar('\n'); //pula uma linha
}

void Permuta(int n[], int num, int k)
{
    int i, len; //i - contador, len - tamanho

    len = num; // len recebe o numero de elementos do vetor

    if(k == len) 
        Mostra(n, num); //se 'k' for igual ao tamanho do vetor entao mostra os elementos
    else
    {
        for(i = k; i < len; i++) //de 'k' ate len troca Permura e Troca outra vez
        {
            Troca(n, num, k, i);
            Permuta(n, num, k+1);
            Troca(n, num, i, k);
        }
    }
}

void Troca(int n[], int num, int p1, int p2)
{
    int aux; //auxiliar

    aux = n[p1];        //troca de valores entre variaveis
    n[p1] = n[p2];      //--------------------------------
    n[p2] = aux;        //--------------------------------
}

void LerVetor(int n[], int num)
{
    int i; //i - contador

    for(i = 0; i < num; i++)
    {
        scanf("%d", &n[i]); //lê valores para o vetor
    }
}
