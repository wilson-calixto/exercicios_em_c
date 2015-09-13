/*
Insira qulaquer numero e a função retornará o numero de dígitos

*/
int qtd_num(int num)
{
    int contador;
    if ( num != 0  ) //perguntando se o mumero e diferente de 0
    {
        if ( num < 0 ) //aninhando o if perguntando se alem de diferente de 0, e menor
        {
           num = num*(-1); // tornando-lhe positivo
        }
        for ( contador = 0; num >  0 ;  contador++  )
        {
            num = num / 10;
        }
        return contador;
     }else
     {
            return 1;
     }
}

