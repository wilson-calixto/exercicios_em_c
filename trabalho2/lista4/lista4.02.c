/*Progrmação de Computadores e Algoritmos

 *Trabalho 2
 *Lista 4, questão 2
 *
 *Equipe:
 *	Jackson Kelvin
 *	Delrick
 *	Manoel
 *	Gabriel Faraco
 *	Sérgio
 *	Raí                       */

#include <stdio.h>

/*função que verifica se um numero b "encaixa" em um numero a
 *ou seja, se os dígitos de b, correspondem aos ultimos dígitos de a*/

int fits(int a, int b) 
{
    while (b != 0 && a%10 == b%10) 
    {
        a = a/10;
        b = b/10;
    }
    if (b == 0)
        return 1;
    else
        return 0;
}

/*função principal*/

int main(int argc, const char *argv[]) 
{
    int num1, num2, maior, menor, val;

    printf("Insira um numero: \n");
    scanf("%d", &num1);
    printf("Insira um numero: \n");
    scanf("%d", &num2);
            
    if (num1 > num2) 
    {
        maior = num1;
        menor = num2;
    }
    else 
    {
        maior = num2;
        menor = num1;
    }    

    val = 0;
    while (maior >= menor) 
    {
        if (fits(maior,menor) == 1)
            val = 1;
        maior/=10;
    }
    if (val == 1)
    {
        if(num1 > num2)
        {
            printf("%d é segmento de %d \n",num2, num1);
        }
        else
        {
            printf("%d é segmento de %d \n",num1, num2);
        }
    }

    else
    {
        if(num1 > num2)
        {
            printf("%d nao é segmento de %d \n",num2, num1);
        }
        else
        {
            printf("%d nao é segmento de %d \n",num1, num2);
        }
    }

    return 0;
}
