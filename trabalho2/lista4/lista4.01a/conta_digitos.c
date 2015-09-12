#include <stdio.h>
int conta_digitos (unsigned long int num1, int num2 )
{
	int i,contador;
	while (num1 != 0)
	{
		if ((num1 % 10) == num2)
		{
			contador += 1;
		}
		num1 = num1 / 10;

	}	
	

	return contador;
}	



/* -----  end of function conta_digitos  ----- */
