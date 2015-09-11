/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 
 * lista2.09.c
 *
 * Equipe:
 *          Sergio Pinheiro
 *          Jacksonn Kevin (Head)
 *          Manoel Victor
 *          Delrick Oliveira
 *          Gabriel Faraco
 *          Rai Santos
 *      
 */
#include <stdio.h>
#include "../../util.c/uti.h"

int main()
{
    int num; 

    printf ("Digite o numero: ");
    scanf ("%d", &num);

    if (is_pair(num)) 
        printf ("\nNumero par\n");
    else
        print ("\nNumero impar\n");
            
    return 0; 
}
