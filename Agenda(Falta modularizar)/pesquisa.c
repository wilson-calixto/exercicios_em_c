#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "i_o.h"
#define nulo 0
#define erro 1
#define TAM 1000
#define codigo_do_contato 2
#define linhas 3
void pesquisa(char arquivo[])
{
    FILE *fp;
    int pesq, i;
    char texto[TAM];

    if((fp = fopen(arquivo,"r")) == NULL)
      
        saida(erro,nulo);
    else
    {
        saida(codigo_do_contato,nulo);
        scanf("%d", &pesq);

        pesq = (pesq * 7);

        saida(linhas,nulo);

        for(i = 1; !feof(fp); i++)
        {
            fgets(texto,TAM,fp);

            if(i == pesq - 2 || i == pesq - 1 || i == pesq)
                printf("%s\n",texto);
        }
		     saida(linhas,nulo);
    }
}
