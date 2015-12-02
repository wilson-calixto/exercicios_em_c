#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define nulo 0
#define erro 1
#define TAM 1000
#define codigo_do_contato 2
#define linhas 3
#define NC 10

void pesquisa(char arquivo[])
{
    
    Contato *p;
    int pesq, i;
    {
        saida(codigo_do_contato,nulo);
        scanf("%d", &pesq);

        printf("---------------------------------------------------------\n");

        for(i = 1, p = agenda; i < NC; i++,p++)
        {
		if(pesq == i)
		{	
        		printf("Codigo: %s\n",(*p).cod);
			printf("Nome: %s\n", (*p).nome);
			printf("Endereco: %s\n", (*p).end);
 		}       
	}

        printf("---------------------------------------------------------\n");
    }
}
