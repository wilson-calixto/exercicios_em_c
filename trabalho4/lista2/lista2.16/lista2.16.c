/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista2.16
*
* Equipe:
*  Sergio Pinheiro
*  Wilson Araújo
*  Andressa Moreira
*  Benjamin Borges
*  Gabriel Faraco
      
*/

#include <stdio.h>
#include <stdlib.h>
#include "segmento.h"

#define MAX 100
#define FALSE 0
#define TRUE  1

int main() 
{

    int n,i,seq[MAX];


    printf("Digite o comprimento da sequencia: ");
    scanf("%d", &n);
    printf("Digite uma sequencia de %d inteiros: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }
    
    segmento(n,seq);

    return 0;
}
