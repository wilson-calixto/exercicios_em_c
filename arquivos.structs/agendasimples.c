/*
*Autor: Jackson Kelvin de Souza
*/
//escrever no txt
#include <stdio.h>
struct agenda
{
	char codigo[15], nome[15], endereco[15];
};
int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("agendasimples.txt","wb");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	struct agenda cad={"1515310012","jackson k.s","rua 28"};
	fwrite(&cad,sizeof(struct agenda),1,file);
	fclose(file);

	return 0;
}

