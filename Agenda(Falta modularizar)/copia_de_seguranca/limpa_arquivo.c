#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define TAM 1000
#define TC 10

void limpa_arquivo(char arquivo[])
{
    FILE *fout;
    int i;

    fout = fopen(arquivo,"w+");

    if(fout == NULL)
        printf("Impossivel abrir o arquivo.");
    else
    {
 
        fprintf(fout,"\tAgenda\n---------------------------------------------------------\n");

        for(i = 0; i < TC; i++)
        {
            fprintf(fout, "Contato %d\n\n",i+1);
            fprintf(fout, "Codigo: \n");
            fprintf(fout, "Nome: \n");
            fprintf(fout, "Endereco: \n\n");
            fprintf(fout,"---------------------------------------------------------\n");
        }
    }

    fclose(fout);
}
