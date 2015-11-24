/*
*Autor: Jackson Kelvin de Souza
*/
//criar e ler a agenda no msm app
#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
	char codigo[15],nome[15],endereco[15];
};
int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("agenda.txt","w");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	struct cadastro contatos[3];
/*	
	int i;
	int j=1;
	for (i = 0 ; i < 3 ; i++)
	{
	printf("codigo:\n");
	scanf("%s",contatos[i].codigo);
	printf("nome:\n");
	scanf("%s",contatos[i].nome);
	printf("endereco:\n");
	scanf("%s",contatos[i].endereco);
	fwrite(&contatos[i],sizeof(struct cadastro),j,file);
	j++;
	}
	//fwrite(&contatos,sizeof(struct cadastro),3,file);
*/
	printf("codigo:\n");
	scanf("%s",contatos[0].codigo);
	printf("nome:\n");
	scanf("%s",contatos[0].nome);
	printf("endereco:\n");
	scanf("%s",contatos[0].endereco);
	fprintf(file,"%s\t%s\t%s\n",contatos[0].codigo,contatos[0].nome,contatos[0].endereco);
//---------------------
	printf("codigo:\n");
	scanf("%s",contatos[1].codigo);
	printf("nome:\n");
	scanf("%s",contatos[1].nome);
	printf("endereco:\n");
	scanf("%s",contatos[1].endereco);
	fprintf(file,"%s\t%s\t%s\n",contatos[1].codigo,contatos[1].nome,contatos[1].endereco);
//------------------------
	printf("codigo:\n");
	scanf("%s",contatos[2].codigo);
	printf("nome:\n");
	scanf("%s",contatos[2].nome);
	printf("endereco:\n");
	scanf("%s",contatos[2].endereco);
	fprintf(file,"%s\t%s\t%s\n",contatos[2].codigo,contatos[2].nome,contatos[2].endereco);
//----------------------------
//ler	
	fclose(file);
	

	file = fopen("agenda.txt","r");
	printf("CODIGO\tNOME\tENDERECO\n");
	while (fgets(contatos,3,file) != NULL)
	{
		printf("%s", contatos);
	}
	
	fclose(file);
	
	return 0;
}
