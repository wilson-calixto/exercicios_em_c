#include <stdio.h>

int main(int argc, const char *argv[])
{
	char c = 'a';
	int i = 100;
	double d = 2.5;
	long l = 999;

	printf ("char = %c  %p \n", c, &c); 
	printf ("int = %d  %p \n", i, &i); 
	printf ("double = %e  %p \n", d, &d); 
	printf ("long = %ld  %p \n", l, &l) ; 

	return 0;
}
