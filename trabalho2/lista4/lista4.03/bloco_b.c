/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 2
 * Lista 4 - Questão 3.b)
 *
 * Equipe:
 *
 *          Dreka
 *          Elisabeth
 *          Julianny
 *          Luana
 *          Wilson 
 */


#include<stdio.h>

int verificalinha (int vet[], int controle, int a)  //verifica se todos os elementos de uma linha têm a mesma paridade
{
    int i, tam, key = 0;
    tam = controle + a;

    if(n > 1)
    {
        for(i = a; i < tam-1; i++)
        {
            if(vet[i] != vet[i + 1]     //compara os valores para saber se são diferentes
            {
                key = 1;    //se sim, 'key' recebe '1'. Se não, continua com '0'
            }
        }

        return key;
    }   else
        {
            printf("\n\nValor inválido!\n\n");
            
            return 0;
        }
}


void bloco(int n)   //fará todo o processo de verificação da piramidal-alternante
{
    int vet1[n], vet2[n], i, aux, linhas = 0, controle = 2;     //'controle' irá ajudar no controle das linhas

    printf("Informe %d números:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet1[i]);  //será preenchido com os valores digitados pelo usuário

        if(vet1[i] % 2 == 0)    //verifica se o valor atual é par
        {
            vet2[i] = 0;    //se sim, 'vet2' recebe '0'
        }   else
            {
                vet2[i] = 1;    //se não, 'vet2' recebe '1'
            }
    }

    aux = n;

    for(i = 1; i <= n; i++)     //'aux' verifica se é possível que a quantidade 'n' informada possa formar ou não uma pirâmide
    {
        if(aux >= 0)
        {
            aux = aux - 1;
            linhas++;

            if(aux < 0)
            {
                aux = aux + i;
                linhas--;
            }
        }
    }

    if(aux != 0)    //se 'aux' for diferente de '0' então não há valores suficientes para formar uma pirâmide
    {
        printf("\n\nNÃO!\n\n");     //se sim, o usuário é avisado o programa é encerrado
    }   else
        {
            i = 0;

            while(i < n-1)
            {
                if(vet2[i] == vet2[i + 1]   //compara o último elemento de uma linha com o primeiro da linha seguinte, se tiverem a mesma paridade então não é piramidal-alternante
                    {
                        printf("\n\nNÃO!\n\n");
                            break;
                    }   else
                        {
                            if(verificalinha(vet2, controle, i + 1) == 1)   //utiliza a função 'verificalinha' para verificar se todos os valores de uma mesma linha têm a mesma paridade
                            {
                                printf("\n\nNÃO!\n\n");
                                    break;
                            }   else
                                {
                                    i = i + controle;   //'i' é incrementado de modo a ir para o primeiro elemento da linha seguinte
                                    controle++; //incrementa a variável para manter o controle sobre a quantidade de cada linha da pirmaide

                                    if(i == n-1)    //se verdadeiro, finaliza a pirâmide
                                    {
                                        printf("\n\nPiramidal %d-alternante.\n\n", linhas);     //informa o valor de 'm'
                                    }
                                }
                        }
            }
        }
}
