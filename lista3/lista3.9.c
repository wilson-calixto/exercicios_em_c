#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i;
	for(i=1;i<=50;i++)
	{
		if( (i%2) ) printf("%d\n",i);
	}
	return 0;
}
