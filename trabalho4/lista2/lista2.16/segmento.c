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

#define MAX 100
#define FALSE 0
#define TRUE  1

void segmento(int n, int *seq) 
{

    int i, j,
        m,         /* comprimento do segmento repetido */  
        achou,zero;     

    achou = FALSE;

    for (m = 1; !achou && m <= n/2; m++) 
    {
        /* procura dois segmentos iguais de comprimento m consecutivos */
        for (i = 0; !achou && i <= n-2*m; i++)
        {
            /* i indica o inicio do primeiro segmento        */
            /* testa se os dois segmentos sao de fato iguais */
            achou = TRUE;
            for (j = 0; achou && j < m; j++)
            { 
                if (seq[i+j] != seq[i+m+j])
                {
                    achou = FALSE;

                }		
            }
        }
    }

    if (achou) 
    {
        printf("Sim, existem dois segmentos iguais consecutivos.\n");
        printf("Tome, por exemplo, i = %d e m = %d.\n", i-1, m-1);
    }
    else
    {
        printf("Não existem segmentos iguais");
    }
}
