#include <stdio.h>

int pot(int a, int b)
{
	int co = 0, ac = 1;
	while (co < b)
	{
		co++;
		ac = ac * a;
	}
	return ac;
}
