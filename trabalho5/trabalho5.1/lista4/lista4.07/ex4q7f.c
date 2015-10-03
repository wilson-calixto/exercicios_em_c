/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.04
 *     
       Equipe: 
       Andressa
       Delrick 
 *     Juliany
 *     Lucas Botinelly
 *     Sérgio  
 *   
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void strings(char *s, int i, int j)
{
    int m,k=0;
    for(m=i;m<j;m++)
    { 
        s[k]=s[m];
        k++;
    }
    s[k]='\0';
}

