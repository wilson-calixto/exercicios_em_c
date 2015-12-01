#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

void pesquisa(char arquivo[])
{
    FILE *fp;
    int pesq, i;
    char texto[TAM];

    if((fp = fopen(arquivo,"r")) == NULL)
        printf("\nImpossivel abrir o arquivo.\n\n");
    else
    {
        printf("Informe o codigo do contato: ");
        scanf("%d", &pesq);

        pesq = (pesq * 7);

        printf("---------------------------------------------------------\n");

        for(i = 1; !feof(fp); i++)
        {
            fgets(texto,TAM,fp);

            if(i == pesq - 2 || i == pesq - 1 || i == pesq)
                printf("%s\n",texto);
        }

        printf("---------------------------------------------------------\n");
    }
}
