#include<stdio.h>
#include<stdlib.h>


/*
Programação de computadores e algoritmos 
Trabalho 01
equipe

Paulo marinho
Wilson calixto
Sergio Pinheiro
Andressa moriera
Rodrigo oliveira

 LISTA 3 QUESTÃO 28 */





int main(){
	





	int n,i;
	float media,valor;

	printf("numero de cd's\n");
	scanf("%d",&n);
	

	for(i=1;i<=n;i++){
	
		printf("valor do cd numero %d\n",i);
		scanf("%f",&valor);
		media+=valor;

		}
	media=(media/n);
	printf("A media é %.2f",media);
	

return 0;
}