/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.8
 *
 * Equipe:
 *
 *          Elizabeth
 *          Herman
 *          Jackson Gomes
 *          Jailson
 *          Paulo Marinho
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv){

	int m,n,i,j,k,*a,*b,*c;

	printf("Digite o tamanho do vetor A: \n");
	scanf("%d",&m);
	printf("Digite o tamanho do vetor B: \n");
	scanf("%d",&n);
	a=(int *)malloc(m*sizeof(int));
	b=(int *)malloc(n*sizeof(int));
	c=(int *)malloc(m*n*sizeof(int));

	for (i=1;i<=m;i++){
 		printf("Digite o valor do %d elemento \n",i);
		scanf("%d",&a[i]);
	}

	for (i=1;i<=n;i++){
 		printf("Digite o valor do %d elemento \n",i);
		scanf("%d",&b[i]);
	}
	i=1;
	j=1;
	k=0; 
	while (i<=m && j<=n){
		if (a[i]<b[j]){
			k=k+1;
			c[k]=a[i];
			i=i+1;
		}else{ 
			if(a[i]>b[j]){ 
				k=k+1;
				c[k]=b[j];
				j=j+1;
			}else{
				k=k+1;
				c[k]=a[i];
				i=i+1;
				j=j+1;
				}
           }
	}
	while (i<=m){ 
		k=k+1;
		c[k]=a[i];
		i=i+1;
	}
	while (j<=n){
		k=k+1;
		c[k]=b[j];
		j=j+1;
	}

	for (i=1;i<=k;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
