/*
 * Trabalho Agenda
 * agenda.c
 *
 * Equipe: 
 *          Lucas Botinnely
 *          Manoel Victor
 *          Rai Santos
 *          Juliany Raiol
 *          Gabriel Faraco
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"
#define cria_agenda 1
#define lista_agenda 2
#define edita_agenda 3
#define apaga_agenda 4
#define pesquisa_agenda 5
#define limpa_agenda 6
#define finaliza 9
#define TAM 1000
#define nulo 0
#define erro 1
#define operacao_invalida 9
#define menu 10

int main(int argc, const char *argv[])
{
    int op = 0, op2 = 0;
    char arquivo[TAM], origem[TAM], file[TAM] = "", nome_agenda[TAM];
    
    strcat(arquivo,"Agenda.txt");
    strcat(origem,arquivo);
    strcat(origem, ".editado");
    
    while(op != 9)
    {

        saida(menu,nulo);              
        scanf("%d", &op);

        switch(op)
        {
            case cria_agenda:
               if (argc == 2)
                    cria_agenda_arquivo(argv[1]);
               else
               {
                    puts("Informe o nome do arquivo:");
                    scanf("%s", file);
                    cria_agenda_arquivo(file);
               }
                break;
           case lista_agenda:
                lista(arquivo);
                break;
            case edita_agenda:
                edita(arquivo);
                copia(arquivo,origem);
                break;
            case apaga_agenda:
                apaga(arquivo);
                copia(arquivo, origem);
                break;
            case pesquisa_agenda:
                pesquisa(arquivo);
                break;
            case limpa_agenda:
                limpa_arquivo(arquivo);
                break;
            case finaliza:
                break;
            default:
			        saida(operacao_invalida,nulo);               
                break;
        }

    }    
 
    return 0;
}
