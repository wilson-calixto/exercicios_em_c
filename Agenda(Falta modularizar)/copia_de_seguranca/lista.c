#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define nulo 0
#define erro 1
#define TAM 1000

void lista(char arquivo[])
{
    Contato *p;
    int i;

        for(i = 1, p = agenda; i <= NC; i++,p++)
        {
	    printf("---------------------------------------------------------\n"); //separador de contatos
            printf("Contato %d\n\n",i); //numero do contato
            printf("Codigo: %s",(*p).cod); //codigo do contato
            printf("Nome: %s",(*p).nome); //nome do contato
            printf("Endereco: %s\n",(*p).end); //endereço do contato
            printf("---------------------------------------------------------\n"); //separador de contatos		
        }

}
