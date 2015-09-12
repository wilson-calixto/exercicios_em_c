#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/* 
 * Função para calcular a potencia
 * recebe dois inteiros x e y
 * e retorna um float k
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

/* Função calcula a arctangente das coordenadas x e y
 * recebe um float x
 * retora um float
 */

float arctan(float x)
{
	float resposta=0,pi=3.14,valor;
	int e=1,i=1.0;
	
	do{
		valor=power(x,i)/i;

		if(e%2==0)
		{
			resposta=resposta-valor;
		}
        else
        {
			resposta+=valor;
		}
		e++;		
		i=i+2;
        
	}while(valor>0.0001);
	
	return resposta;
}

/* Função recebe n coordenadas calcula o angulo em relacao ao eixo horizontal de cada uma e devolve o menor angulo */

float alfa(float x, float y)
{
	float pi=3.14,aux,radianos;
	if(x==0 && y==0)
	{	
		return -1;
	}
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

/*funcao que verifica o menor de dois numeros
  e o retorna */

int small(int num1, int num2)
{
    int menor;

    menor = num1;
    if(num2 > num1)
    {
        menor = num2;
    }
    return menor;
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
    	if (den != 0)
    	{
        	res = num%den;
        
        	if (res !=0)
        	{
            		num = den;
            		den = res;
        	}
    	}
    	else 
    		res = 0;
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

/*função que verifica se o numero é nulo*/
int is_null(float x)
{
	if(x==0){
		return 0;
	}else{
		return 1;
	}
}

/*função que calcula o maior entre três numeros*/
float biggest(float a,float b, float c)
{
	if((a>=b)&&(a>=c)){
		return a;
	}else if((b>=a)&&(b>=c)){
		return b;
	}else if((c>=b)&&(c>=a)){
		return c;
	}

}

/* Recebe dois inteiros e retorna o menor deles */

int lower_number(int n1, int n2)
{
	if (n1 > n2)
	{
		return n2;
	}
	else
	{
		return n1;
	}
}
/*função que verifica se um numero b "encaixa" em um numero a
 *ou seja, se os dígitos de b, correspondem aos ultimos dígitos de a*/

int fits(int a, int b) 
{
    while (b != 0 && a%10 == b%10) 
    {
        a = a/10;
        b = b/10;
    }
    if (b == 0)
        return 1;
    else
        return 0;
}

/* uma função de subtração */

int subtraction(int num1, int num2)
{
    int aux;
    aux = num1 - num2;
    return aux;
}

/*
 *para utilizar a função rand()
 *para usar o srand, enviando com "semente"
 *o horário do sistema, para os valores não se repetirem
 */
int dice()
{
	srand(time(NULL));
	return ("%d\n", 1+ (rand() % 6));	
}
