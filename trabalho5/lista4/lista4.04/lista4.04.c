
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
  int size, pos, pos2, y;
     
    printf("Digite a String: ");
    scanf("%[^\n]s",s);
    printf("Digite o caracter: ");
    scanf("\n%c", &c);
    size = strlen(s);
    pos = position_char(s, c, size);
    if(pos != -1)
    {
         printf("A caracter encontra-se na posicao = %d \n  ", pos);
    }else
    {
        printf("Caracter nao encontrado. \n ");
    }
    fflush(stdin);
//    system("clear");
//    printf("Digite a string novamente: ");
//    scanf("%[^\n]s", s);
//    printf("Digite o caracter a ser procurado: ");
//    scanf("\n %c", &c);
    printf("Deseja procura a partir de qual posicao: ");
    scanf("\n%d", &pos2);
    size = strlen(s);
    y = position(s, c, size, pos2);
    if(y != -1)
    {
        printf("A caracter encontra-se na posicao = %d \n ", y);
    }else
    {
        printf("Caracter nao encontrado. \n ");
    }
}

