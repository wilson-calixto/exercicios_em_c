#include <stdio.h>

int date(char str[12])
{	

	printf("dia  %c%c", str[0], str[1]);

	if ((str[3] == '0') && (str[4] == '1'))
	{
		printf(" de janeiro");
	}
	if ((str[3] == '0') && (str[4] == '2'))
	{
		printf(" de fevereiro");
	}
	if ((str[3] == '0') && (str[4] == '3'))
	{
		printf(" de marco");
	}
	if ((str[3] == '0') && (str[4] == '4'))
	{
		printf(" de abril");
	}
	if ((str[3] == '0') && (str[4] == '5'))
	{
		printf(" de maio");
	}
	if ((str[3] == '0') && (str[4] == '6'))
	{
		printf(" de junho");
	}
	if ((str[3] == '0') && (str[4] == '7'))
	{
		printf(" de julho");
	}
	if ((str[3] == '0') && (str[4] == '8'))
	{
		printf(" de agosto");
	}
	if ((str[3] == '0') && (str[4] == '9'))
	{
		printf(" de setembro");
	}
	if ((str[3] == '1') && (str[4] == '0'))
	{
		printf(" de outubro");
	}
	if ((str[3] == '1') && (str[4] == '1'))
	{
		printf(" de novembro");
	}
	if ((str[3] == '1') && (str[4] == '2'))
	{
		printf(" de dezembro");
	}
	
	printf(" de %c%c%c%c\n", str[6], str[7], str[8], str[9]);

	return 0;
}
