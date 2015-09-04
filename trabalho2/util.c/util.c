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

/* Faz a contagem de numero inteiros digitados 
 * Ex: 1234 a função retornará  4  
 *     0    a função retornará  1
 *     -999 a função retornará  3 */ 

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


/* verifica se um numero inteiro e perfeito*/

int is_perfect(int num)
{
	int i,acm;
	acm=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			acm=acm+i;
		}	
	}
	if(acm==num)
	{
		return 1;
	}else{
		return 0;
	}		
}





