int primos(int n)
{
    int i,j,cont;

    //come�a com um la�o que vai ate o numero de parametro
    for(i=0;i<=n;i++)
    {
        //inicia o contador
        cont=0;
        //outro la�o para comparar entre os proprios numeros
        for(j=1;j<=i;j++)
        {
            //se o resto da divis�o de i por j ou seja i/j
            if(i%j==0)
            {
                //incrementa mais 1 no contador
                cont++;
            }
        }
        //se o contador for 2, quer dizer que ele � primo por s� ter 2 divisores.
        if(cont==2)
        {
            //ele retorna o valor 1 pra cada numero primo
            return 1;
        }

    }
}
