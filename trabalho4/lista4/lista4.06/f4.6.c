#include <stdio.h>
#include <stdlib.h>

int tabela(char x[10])
{
	int a;

	if (x[0] == 'p' && x[1] == 'e')
	{
		a = 1;
	}
	else if (x[0] == 'c' && x[1] == 'a')
	{
		a = 3;
	}
	else if (x[0] == 'b' && x[1] == 'i')
	{
		a = 3;
	}
	else if (x[0] == 't' && x[1] == 'o')
	{
		a = 5;
	}
	else if (x[0] == 'r' && x[1] == 'a')
	{
		a = 10;
	}
	else if (x[0] == 'r' && x[1] == 'e')
	{
		a = 50;
	}
	else
	{
		a = 0;
	}

	return a;
	free(x);
}
