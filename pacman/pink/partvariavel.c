#include <stdio.h>

int partvariavel (int ghost_number)
{
	do
	{
		printf ( "Qual o numero do Ghost? : " );
		scanf ("%d",&ghost_number);
	}while(ghost_number>4 || ghost_number<1);

	return ghost_number;
}
