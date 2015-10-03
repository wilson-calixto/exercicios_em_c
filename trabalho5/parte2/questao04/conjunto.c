#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int nconjelem, nsubconj,contador, *nelem;
    printf("Quantos elementos o conjunto possui: ");
    scanf("%d", &nconjelem);
    printf("Quantos subconjuntos o conjunto possui: ");
    scanf("%d", &nsubconj);
    if(nsubconj>1 && nsubconj<=10)
    {
        contador=nsubconj;
        printf("Quantos elemento o subconjunto possui: ");
        scanf("%d", &nsubconjelem);
        for(i=0;i==nconjelem;i++)
        {
            printf("Qual elemento: ");
            scanf("%d", *nelem);

        }


    }

    if(nsubconj<=0 || nconjelem<=0)
    {
        printf("===NÃO POSSIVEL FAZER O CONJUNTO===\n====OPERAÇÃO FINALIZADA====\n");

    }


    return 0;
}


