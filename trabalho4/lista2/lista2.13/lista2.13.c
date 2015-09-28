#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char *argv){ 
	int i,j,n, *aux, *v,*w;
	printf("Digite o grau dos polinômios: \n");
	scanf("%d",&n);
	v=(int *)malloc(n*sizeof(int));
	w=(int *)malloc(n*sizeof(int));	
	aux=(int *)malloc(n*sizeof(int));	
	for (i=n;i>0;i--){
		printf("Digite o valor do %d elemento do polinomio 1: \n",i);
		scanf("%d",&v[i]);	
		printf("Digite o valor do %d elemento do polinomio 2: \n",i);
		scanf("%d",&w[i]);
		
	}
	for (i=n;i>0;i--){ 
		aux[i]=0;	
	}	

	for (i=n;i>0;i--){ 
		for (j=n;j>0;j--){
			aux[i]+=v[i] * w[j];
		
		}
	}

	for (i=n;i>0;i--){
		printf("%d ",aux[i]);	
	}
	return 0;
	
}
