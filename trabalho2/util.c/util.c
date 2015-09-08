#include <stdio.h>

/* 
 * Função para calcular a potencia
 * recebe dois inteiros x e z
 * e retorna um float pot
 */

float power(float x,float y)
{
	int i;
	float k=1;
	for(i=1;i<=y;i++)
	{
		k=k*x;
	}
	return k;
}

/* 
 * Faz a contagem de numero inteiros digitados 
 * Ex: 1234 a função retornará  4  
 *     0    a função retornará  1
 *     -999 a função retornará  3 
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

/* 
 * Verifica se um numero inteiro e perfeito
 * Reebe um inteiro e retorta 1 ou 0
 */

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

/*forma uma serie de numeros em ordem crescente em n linhas*/
void serie_repetition(int n) //imprime o valor de i j vezes numa serie de tamanho n
{
    int i,j;

    for(i=1;i<=n;i++)//laco externo indica o tamanho da serie
    {
        for(j=1;j<=i;j++)//laco interno indica a quantidade de numeros em cada linha da serie
        {   
            printf ("%d", j);
        }
        printf ("\n");
    }
}

/* Verifiva se x é maior que y
	caso for maior ou igual, retorna 1;
	caso contrario, retorna 0.
	
	feito por SergioPinheiro*/
	
int is_higher(int x, int y)
{
    if(x>=y) return 1;

    else return 0;
}

/* Retorna o MDC de dois números
	
	feito por SergioPinheiro*/

int mdc (int x, int y)
{
    int num, den, res; 

    if (is_higher(x,y))
    {
        num = x;
        den = y;
    }
    else
    {
        num = y;
        den = x;
    }

    do
    {
        res = num%den;
        
        if (res !=0)
        {
            num = den;
            den = res;
        }
    } while (res != 0);

    return den;
}

/* Verifica se o valor de x é par
	caso seja, retorna 1;
	caso contrario, retorna 0.
	
	feito por Sergio Pinheiro*/
	
int is_pair (int x)
{
    if (x%2==0) return 1;

    else return 0;
}


/*função que verifica se o numero é positivo ou negativo*/
int is_positive (int x)
{
	if (x > 0)
		return 1;
	else
		return 0;
}
