/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 
 * fl05q01.c
 *
 * Equipe:
 *
 *      Andressa Moreira
 *      Lucas Botinelly
 *      Delrick Oliveira
 *      Sergio Pinheiro
 *      Juliany Raiol    
 *    
 */

/*int matcomb(int v[], int tamvet, int tamcomb, int qtd)
{
    int mcomb[qtd][tamcomb], i;
    //int **p;
    
    
        
}*/

#include <stdlib.h>

int * abc(int v[], int tamv, int ini, int tamc)
{
    int *x, i;
    int *u = (int *) malloc((tamc*sizeof(int))-1); 
    
    x = &v[ini];

    u[0] = *x;
    x++;

    for(i = 1; i < (tamc-1); i++)
    {
        u[i] = *x; 
        x++; 
    }

    return u;
}

int qtdcomb(int n ,int k)
{
    int resp, aux, qtd = 0;
    
    resp = fat(n);
    aux = (fat(k) * fat(n-k));
    resp = resp/aux;

    return resp;
} 


int fat(int n)
{
    int resp = 1;

    if (n == 1)
        return 1;
    else
        resp = fat(n-1)*n;
        return resp;

}
