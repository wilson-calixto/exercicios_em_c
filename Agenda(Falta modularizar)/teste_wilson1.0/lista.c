#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

void lista(char arquivo[])
{
    FILE *fp;
    char texto[TAM];
    int i;

    if ((fp = fopen(arquivo,"r")) == 0)
        printf("\nImpossivel abrir o arquivo.\n\n");
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
