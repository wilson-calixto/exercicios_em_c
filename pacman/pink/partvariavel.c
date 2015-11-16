#include "../util.c/i_o.h"
#define NUM_GHOST 11
#define SEM_PARAMETRO 0

int partvariavel (int ghost_number)
{
	do
	{
		out(NUM_GHOST,SEM_PARAMETRO);
		in(ghost_number);
	}while(ghost_number>4 || ghost_number<1);

	return ghost_number;
}
