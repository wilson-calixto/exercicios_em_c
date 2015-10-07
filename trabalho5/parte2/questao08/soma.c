int inc(int x, int y)
{
    int soma=0;
    
    if(y==0)
        return x;
    else
    {
        soma = inc(x,y-1);
        return(++soma);
    }
}
