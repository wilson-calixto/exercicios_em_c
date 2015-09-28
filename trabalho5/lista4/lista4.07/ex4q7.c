#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex4q7.h"

int main (int argc, const char *argv[])
{
    char str[]="abcdefghijklm", str1[50];
    int i, j;
    i=2;
    j=6;
    printf("Mudando a copia do vetor de origem\n");
    strcpy(str1,str);
    strings(str1, i, j);
    printf("%s\n", str1);
    printf("O valor do vetor de origem sem a mudança : %s\n", str); 
    printf("Mudando o vetor de origem\n");
    strings(str, i, j);
    printf("Vetor de origem depois da mudança : %s\n", str);
    return 0;   
}
