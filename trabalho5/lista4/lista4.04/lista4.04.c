
/* Programacao de Computadores e ALgoritmos
 * ex4.q4.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Jailson
 *          Ewerton Petillo
 *          
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

int main(int argc, const char *argv[])
{
  char s[20];
  char c;
  int size, pos;
     
    printf("Digite a String: ");
    scanf("%[^\n]s",s);
    printf("Digite o caracter: ");
    scanf("\n%c", &c);
    size = strlen(s);
    pos = position_char(s, c, size);
    if(pos != 0)
    {
         printf("A letra encontra-se na posicao = %d \n  ", pos);
    }else
    {
        printf("Caracter nao encontrado. \n ");
    }
}

