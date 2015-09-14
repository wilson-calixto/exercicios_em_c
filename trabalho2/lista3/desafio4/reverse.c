int reverse(int num)
{
    int rev;
    
    rev=0;

    while (num>0)
    {
        rev=rev*10+num%10; ///multiplica o resto por 10 e soma com o resto sequinte
        num=num/10; ///decrementando o numero de 10 em 10 vezes
    }
    return rev;
}
