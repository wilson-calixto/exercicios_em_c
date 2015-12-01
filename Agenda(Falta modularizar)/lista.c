#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define nulo 0
#define erro 1
#define TAM 1000

void lista(char arquivo[])
{
    FILE *fp;
    char texto[TAM];
    int i;

    if ((fp = fopen(arquivo,"r")) == 0)
         saida(erro);
    else
    {
        for(i = 0; !feof(fp); i++)
        {
            fgets(texto,TAM,fp);
            puts(texto);
        }

        fclose(fp);
    }
}
