#include<stdio.h>

int is_perfect(int num);

int main()
{


	return 0;
}




int is_perfect(int num)
{
	int i,acm,vet[10];
	acm=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			vet[i]=acm;			
			acm=acm+i;
		}	
	}

	}		
}
