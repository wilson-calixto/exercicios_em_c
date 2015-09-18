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

/* funcao que verifica o maior numero */

int big(int num1, int num2)
{
    int maior;

    maior = num1;
    if (num2 > num1) 
    {
        maior = num2;  
    }
    return maior;
}


/*funcao que verifica o menor numero  */

int small(int num1, int num2)
{
    int menor;

    menor = num1;
    if(num2 < num1)
    {
        menor = num2;
    }
    return menor;
}

