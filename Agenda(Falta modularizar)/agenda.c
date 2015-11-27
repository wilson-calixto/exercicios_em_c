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

#define TAM 1000

typedef struct Contato
{
    char cod[TAM],nome[TAM], end[TAM];
}Contato;

int main(int argc, const char *argv[])
{
    int op = 0, op2 = 0;
    char arquivo[TAM], origem[TAM], file[TAM] = "", nome_agenda[TAM];
    
    strcat(arquivo,"Agenda.txt");
    strcat(origem,arquivo);
    strcat(origem, ".editado");
    
    while(op != 9)
    {

        printf("\nInforme a operação que deseja realizar:\n 1 - Criar agenda por arquivo\n 2 - Listar contatos\n 3 - Editar contatos\n 4 - Apagar contatos\n 5 - Pesquisar contato\n 6 - Limpa agenda\n 9 - Sair\n\nOperação: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
               if (argc == 2)
                    cria_agenda_arquivo(argv[1]);
               else
               {
                    puts("Informe o nome do arquivo:");
                    scanf("%s", file);
                    cria_agenda_arquivo(file);
               }
                break;
           case 2:
                lista(arquivo);
                break;
            case 3:
                edita(arquivo);
                copia(arquivo,origem);
                break;
            case 4:
                apaga(arquivo);
                copia(arquivo, origem);
                break;
            case 5:
                pesquisa(arquivo);
                break;
            case 6:
                limpa_arquivo(arquivo);
                break;
            case 9:
                break;
            default:
                printf("Operacao invalida.\n");
                break;
        }

    }    
 
    return 0;
}