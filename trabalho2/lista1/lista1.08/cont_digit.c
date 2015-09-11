/*
Insira qulaquer numero e a função retornará o numero de dígitos

*/
int qtd_num(int num)
{
    int contador;
    if ( num != 0  )
    {
        if ( num < 0 )
        {
           num = num*(-1);
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

