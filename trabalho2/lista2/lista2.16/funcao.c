int fat(int n)
{
    int fatorial;


    //numero de parametro vai decrementando
    //ate chegar a 2
    for(fatorial=1;n>1;n--)
    {

        fatorial=fatorial*n;

    }

    //retorna o fatorial do numero
    return fatorial;
}
