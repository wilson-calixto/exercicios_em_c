#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000
#define NC 10 //numero de contatos

typedef struct Contato
{
    char cod[TAM], nome[TAM], end[TAM];
}Contato;

typedef Contato* Agenda;

void cria_agenda_arquivo(char argv[])
{
    Contato agenda[NC], *p;
    int i;
    char arquivo[TAM] = "", origem[TAM] = "";

    FILE *fout, *fin;

    strcat(arquivo , "Agenda.txt");
    
    fin = fopen(argv,"r");

    if(fin == NULL)
        printf("Impossivel abrir o arquivo.");
    else
    {

        for(i = 0, p = agenda; i < NC; i++, p++)
        {
        //    puts("Informe o codigo do contato:");
            fgets((*p).cod,TAM,fin);
 
        //    puts("Informe o nome do contato:");
            fgets((*p).nome,TAM,fin);    
        
        //    puts("Informe o endereço do contato:");
            fgets((*p).end,TAM,fin);
        }

    }

    fout = fopen(arquivo,"w+");

    if(fout == NULL)
        printf("Erro, nao foi possivel abrir o arquivo.\n");
    else
    {
        fprintf(fout,"\tAgenda\n---------------------------------------------------------\n");

        for(i = 0, p = agenda; i < NC; i++, p++)
        {
            fprintf(fout,"Contato %d\n\n",i+1);
            fprintf(fout,"Codigo: %s",(*p).cod);
            fprintf(fout,"Nome: %s",(*p).nome);
            fprintf(fout,"Endereco: %s\n",(*p).end);
            fprintf(fout,"---------------------------------------------------------\n");
        }
    }

    fclose(fout);
}
