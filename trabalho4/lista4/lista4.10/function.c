float power(float x, int y) //funçao para calcular um real 'x' elevado a um inteiro 'y'
{
	if(y == 1)
		return x;
	else
		return x * power(x , y-1);
	
}

void derivada (float a[],float b[],int n)//funçao para calcular a derivada
{ 
	int i; // i - contador
  	
  	for (i=1;i<=n;i++)
  	{
		b[i]=i*a[i+1];
  	}
	
}

float valor_polinomio(float a[],float x,int n) //funçao para calcular o valor do polinomio
{	
	float valor;
  	int i; // i - contador  
  	
  	valor=a[1]; // valor recebe a1 * x elevado a 0, ou seja, 1

 	for (i=2;i<=n+1;i++)
 	{
		valor+= a[i] * (power(x,(i-1))); //valor acumula a soma dos 'a's multiplicados por x
	}
	
	return valor;
	
}
