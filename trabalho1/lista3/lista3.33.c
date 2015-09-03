/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.33
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermamm
 *         Luis
 *         Luana
 *         Richardson
 *
 */

#include <stdio.h>

main(int argc, const char *argv[])
{
    int op, status, cont;
    float n_temp, acum, media, maior, menor;
    
    status=1;
    cont=1;

    printf("Informe uma temperatura: ");
    scanf("%f", &n_temp);
    maior=n_temp;
    menor=n_temp;
    acum=n_temp;
  
    while (status==1)
    {
        printf("Outra temperatura? [1/0] ");
        scanf("%d", &op);

        switch (op)
        {
            case 1: 
                printf("\nTemperatura: ");
                scanf("%f",&n_temp);
                acum+=n_temp;
                cont++;
                if (n_temp > maior)
                {
                    maior=n_temp;
                }
                      
                if (n_temp < menor)
                {
                menor=n_temp;
                }
                break;
            case 0:
                status=0;
                break;
        }  
    }
    
    media=acum/cont;
    printf("\nMenor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("\nMedia de temperatura eh: %.2f\n",media);

    return 0;
}
