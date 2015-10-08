int contador = 0; //quantidade de multiplicaçoes realizadas

int expo(int k, int n)
{
    if (n == 0)
    {
        contador++; //contador é incrementado
        return 1; //todo numero diferente de 0 elevado a 0 é igual a 1. 
    }
    else if (n == 1)
    {
        return k; //retorna 'k'
    }
    else
    {
        contador++; //contador é incrementado
        return (k*expo(k,n-1)); //retorna k * k elevando a n-1
    }
}

int cont()
{
    return contador; //retorna a quantidade de multiplicações realizadas
}
