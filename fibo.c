#include <stdio.h>


int contador = 0;

int fibo(int n)
{
   contador++;

   printf("contador = %d f(%d)\n",contador, n);
	if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
		return ( fibo(n-1) + fibo(n-2) );
}  

int main(void)
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
	//if ( n == 0 ) contador = 1;

   for ( c = 0 ; c < n ; c++ )
   {
      printf("\n termo: %d\n", fibo(c));
   }
 
	printf("\nrodadas = %d\n", contador);

   return 0;
}
 

