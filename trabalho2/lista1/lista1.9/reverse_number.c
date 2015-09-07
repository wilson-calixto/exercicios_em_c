#include <stdio.h>

//Procedimento para a impressão de um número invertido
void reverse_number(int num)
{
	while(num!=0) //Verifica se o quociente de um número dividido por 10 é maior que zero
	{
		// Imprime sempre o resto do número por 10
		printf("%d",num%10); 
		
		//Decrementa o número dividindo o seu valor por 10
		num/=10;
	}
}
