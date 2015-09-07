#include <stdio.h>

/* 
 * Função para calcular a potencia
 * recebe dois inteiros x e z
 * e retorna um inteiro pot
 */

int calc_pow(int x, int z)
{
    int i, pow;

    pow=1;

    for ( i = 0; i < z; i++ )
    {
        pow*=x;
    }

    return pow;
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

/*  recebe um numero float entre 0  e 1 e devolve sua arco tangente  */

float arctan(float x)
{
	float resposta=0.0,valor;
	int e=1,i=1;
	
	do{
		valor=(calc_pow(x,i))/i;

		if(e%i==0)
		{
			resposta=resposta-valor;
		}else{
			resposta+=valor;
		}
		e++;		
		i=i+2;
		
		}while(valor>0.0001);
	
	return resposta;
}

/*recebe 2 coordenadas do plano cartesiano em float e retorna o ângulo formado pelo vetor (x,y) e o eixo horizontal.*/

float alfa(float x, float y)
{
	float pi=3.14,aux,radianos;
	if(y<x)
	{
		aux=y/x;
		radianos=arctan(aux);
	}else{
		aux=(x/y);
		radianos=pi/2-arctan(aux);
	}	
	return (180*radianos)/pi;
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
