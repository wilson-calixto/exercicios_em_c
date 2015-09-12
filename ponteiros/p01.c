#include <stdio.h>

int main(int argc, const char *argv[])
{
	char c;
	int i;
	double d;
	long l;

	printf ("sizeof (char) = %lu\n", sizeof (c)); 
	printf ("sizeof (int) = %lu\n", sizeof (i)); 
	printf ("sizeof (double) = %lu\n", sizeof (d)); 
	printf ("sizeof (long) = %lu\n", sizeof (l)); 

	return 0;
}
