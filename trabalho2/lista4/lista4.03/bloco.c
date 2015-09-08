/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 2
 * Lista 4 - Questão 3.a)
 *
 * Equipe:
 *
 *          Dreka
 *          Elisabeth
 *          Julianny
 *          Luana
 *          Wilson 
 */

#include<stdio.h>

int bloco (int n)
{
    int vet1[n], vet2[n], i, key, aux = 0;

    printf("Informe N números:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet1[i]);  //vet1 recebe valores digitados

        if(vet1[i] % 2 == 0)    //verifica se o valor atual é par
        {
            vet2[i] = 0;    //se sim, 'vet2' recebe o valor '0', indicando ser par
        }   else
            {
                vet2[i] = 1;    //se não, recebe o valor '1', indicando ser ímpar
            }
    }

    for(i = 0; i < n-1; i++)
    {
        if(vet2[i] == 0 && vet2[i] == vet2[i+1])    //compara cada valor em 'vet2', se são todos '0', ou seja, pares
        {
            key = 0; //se sim, 'key' também recebe '0'
        }   else if(vet2[i] == 1 && vet2[i] == vet2[i+1])   //agora compara-os para saber se são todos '1', ou seja, ímpares
            {
                key = 1; //se sim, 'key' também recebe '1'
            }   else    //caso falhe em ambos, ou seja, há valores pares e ímpares
                {
                    key = -1;   //então 'key' recebe '-1'
                }
    }

    return key;
}
