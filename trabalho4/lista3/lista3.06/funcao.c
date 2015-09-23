#include <stdio.h> //funcao com erro de logica que nao consegui solucionar
#include <stdlib.h>

int nulas(int matriz)
{
	int a,b,i,j,cont1,cont2,ac1,ac2; //declaracao das variaveis

	matriz = *p; //matriz recebe o conteudo do endereco da matriz recebida na funcao principal

	cont1=0;
	cont2=0;
	
	for (i=0;i<a;i++)
	{
		ac1=0;		
		for (j=0;j<b;j++)
		{	
			ac2=0;	
			if(matriz[i][cont1]==0) // para cada "0" na linha contador1 = contador1 + 1
			{
				cont1++;
				ac1++;
			}
			if(matriz[cont2][j]==0) // para cada "0" na coluna contador2 = contador2 + 1
			{
				cont2++;
				ac2++;  
			}  

		ln=0; 
		cn=0;
				
		if(ac1==a)
		{
			ln++; // se o numero de "0" na linha for igual ao tamanho da linha = linha nula
		}
		if(ac2==b)
		{
			cn++; // se o numero de "0" na coluna for igual ao tamanho da coluna = coluna nula
		}
	return ln,cn; // retorno correspondentes as linhas e colunas nulas
	}
}
