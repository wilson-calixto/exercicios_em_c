#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define nulo 0
#define erro 1
#define TAM 1000 //Tamanho maximo da string
#define NC 10 //numero de contatos

typedef struct Contato
{
    char cod[TAM], nome[TAM], end[TAM];
}Contato; //definindo estrutura Contato como um tipo

typedef Contato* Agenda; //definindo ponteiro para Contato como Agenda (que nao foi usado)

void cria_agenda_arquivo(const char argv[])
{
    Contato agenda[NC], *p; //vetor e ponteiro do tipo Contato
    int i; // contador
    char arquivo[TAM] = ""; //nome do arquivo a ser escrito

    FILE *fout, *fin; //ponteiros do tipo macro FILE, sendo um de entrada e outro de saida

    strcat(arquivo , "Agenda.txt"); //variavel 'arquivo' recebe nome do arquivo a ser escrito
    
    fin = fopen(argv,"r"); //abre arquivo a ser lido

    if(fin == NULL)
          saida(erro,nulo);
    else
    {

        for(i = 0, p = agenda; i < NC; i++, p++)  //preenchendo campos do vetor
        {
        //    puts("Informe o codigo do contato:");
            fgets((*p).cod,TAM,fin);
 
        //    puts("Informe o nome do contato:");
            fgets((*p).nome,TAM,fin);    
        
        //    puts("Informe o endereço do contato:");
            fgets((*p).end,TAM,fin);
        } 

    }

    fout = fopen(arquivo,"w+"); //cria arquivo a ser lido

    if(fout == NULL)
	        saida(erro,nulo);
    else
    {
        fprintf(fout,"\tAgenda\n---------------------------------------------------------\n"); //cabeçalho da agenda

        for(i = 0, p = agenda; i < NC; i++, p++) //escreve no arquivo saida
        {
            fprintf(fout,"Contato %d\n\n",i+1); //numero do contato
            fprintf(fout,"Codigo: %s",(*p).cod); //codigo do contato
            fprintf(fout,"Nome: %s",(*p).nome); //nome do contato
            fprintf(fout,"Endereco: %s\n",(*p).end); //endereço do contato
            fprintf(fout,"---------------------------------------------------------\n"); //separador de contatos
        }
    }

    fclose(fin); //fecha arquivo entrada
    fclose(fout); //fecha arquivo saida
}
