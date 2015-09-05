/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.10.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas Botinelly
 *          Richardson
 *          Wilson Calisto 
 */

#include <stdio.h>
int pesoideal()
{
    char sexo;
    float peso, altura;
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe o sexo: ");
    scanf("%c\n", &sexo);
    if (sexo == 'm' || sexo == 'M')
    {
        peso = ((72.7*altura) - 58);
    }
    else
    {
        peso = ((62.1* altura) - 44.7);
    }
    printf("%.2f\n", peso);
}


int main(int argv, const char *argc[])
{
    pesoideal();
    return 0;
}
