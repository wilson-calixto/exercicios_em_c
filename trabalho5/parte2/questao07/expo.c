int contador = 0;

int expo(int k, int n)
{
    if (n == 0)
    {
        contador++;
        return 1;
    }
    else if (n == 1)
    {
        return k;
    }
    else
    {
        contador++;
        return (k*expo(k,n-1));
    }
}

int cont()
{
    return contador;
}
