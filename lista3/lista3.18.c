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

 LISTA 2 QUETÃO 18 */



int main()
{
	int dia,mes,ano,bo;
	bo=1;
	printf("dia\n");
	scanf("%d",&dia);
	printf("mes\n");
	scanf("%d",&mes);
	printf("ano\n");
	scanf("%d",&ano);
/* verifica se o dia mes e ano não são menores q ou maiores que o limite */

	if(dia<0 || dia>31 || mes<0 || mes>12 || ano<0)
	{
		bo=0;

/* verifica os dias>29 de fevereiro de 2000 */

	}else{

		if((mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12) && (dia>31))
		{
			bo=0;

		}else{
			if((mes==4||mes==6||mes==9||mes==11) && (dia>30))
			{	
				bo=0;
				
			}else{
				if(mes==2){
					if(ano==2000 && dia>29)
					{
						bo=0;
					}else{
						if(ano%4==0 && ano%100!=0 && dia>29)
						   {
							bo=0;
							
						   }
						
						}					
					


					}

					
				}


			}

		


	if(bo==0)
	{
		printf("False");

	}
	else{

		printf("True");
	     }











		     }


return 0;
}
