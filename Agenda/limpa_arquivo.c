#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define nulo 0
#define erro 1
#define TAM 1000
#define TC 10

void limpa_arquivo(char arquivo[])
{
    FILE *fout, *fin;
    int i;
    Contato *p;

    fout = fopen(arquivo,"w+");
    fin = fopen("aux.txt","r");

    if(fout == NULL || fin == NULL)
        saida(erro,nulo);
    else
    {
 
        fprintf(fout,"\tAgenda\n---------------------------------------------------------\n");

        for(i = 0, p = agenda; i < TC; i++, p++)
        {
            fprintf(fout, "Contato %d\n\n",i+1);

            fprintf(fout, "Codigo: \n");
	    fgets((*p).cod, TAM, fin);
	
            fprintf(fout, "Nome: \n");
	    fgets((*p).nome, TAM, fin);

            fprintf(fout, "Endereco: \n\n");
	    fgets((*p).end, TAM, fin);

            fprintf(fout,"---------------------------------------------------------\n");
        }
    }

    fclose(fout);
}
