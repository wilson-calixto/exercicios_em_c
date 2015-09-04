/* 
 * Função para calcular a potencia
 * recebe dois inteiros x e z
 * e retorna um inteiro pot
 */

int calc_pow(int x, int z)
{
    int i, pot;

    pot=1;

    for ( i = 0; i < z; i++ )
    {
        pot*=x;
    }

    return pot;
}

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
