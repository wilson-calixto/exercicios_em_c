int inc(int x, int y)
{
    int soma=0; //soma - varaivel para receber o resultado da função
    
    if(y==0)
        return x; // 'x' + 0 = x
    if(y < 0)
    {
        soma = inc(x, y+1);
        return(--soma);
    }
    else
    {
        soma = inc(x,y-1); //não é possivel incrementar o valor de funçoes, uma variavel deve receber o valor antes realizar os incrementos
        return(++soma); //retorna os incrementos sucessivos da soma
    }
}
