#include <stdio.h>

/*  Algoritimo para o calculo de provas com base nas duas melhores notas */

void calculation_tests()

{
    float nota1, nota2, nota3; /*  variaveis para as provas */
    float maior, menor, media, mediatotal, mediamelhor; /*  variaveis para as medias, media total das 3 provas das duas melhores */
    scanf("%f", &nota1);
    scanf("%f", &nota2); /*  input das notas */
    scanf("%f", &nota3);
    if (nota1 > nota2 && nota1 > nota3) /*  processo para determinar a menor, a maior e a nota intermediaria */
    {
        maior = nota1;
    
        if(nota2 > nota3)
        {
            media = nota2;
            menor = nota3;
        }
        else
        {
            media = nota3;
            menor = nota2;
        }
    }
    if (nota2 > nota1 && nota2 > nota3)
    {
        maior = nota2;
        if (nota1 > nota3)
        {
            media = nota1;
            menor = nota3;
        }
        else
        {
            media = nota3;
            menor = nota1;
        }
    }
    if (nota3 > nota1 && nota3 > nota2)
    {
        maior = nota3;
        if (nota2 > nota1)
        {
            media = nota2;
            menor = nota1;
        }
        else
        {
            media = nota1;
            menor = nota2;
        }
     }
    
    mediamelhor = (media+maior)/2; /* media com as duas melhores notas */
    mediatotal = (menor+media+maior)/3; /* media com as tres notas */
    
    printf("Media com as duas melhores notas: %.1f\n", mediamelhor);
    printf("Media com as tres notas: %.1f\n", mediatotal);
    printf("Nota mais baixa: %.1f\n", menor);
    printf("Nota mais alta: %.1f\n", maior);
}
