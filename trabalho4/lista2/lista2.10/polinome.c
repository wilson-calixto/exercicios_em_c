#include<stdio.h>

void polinome(int n, int (*vet))

{
	//p(x)=a0+a1x+a2x2**2+...+anx**n
	int i, result = 0;
	for(i=0;i<n;i++)
	{
		result+=vet[i];	
	}
	printf("%d.x**%d\n", result,n);
}
