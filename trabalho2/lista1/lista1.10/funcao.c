#include<stdio.h>
/* Função randomiza o lançamento de um dado */
int rolldice (void)
{
int die1,die2,work_sm;

die1 = 1+(rand()%6);
die2 = 1+(rand()%6);

work_sm  = die1+die2;

printf("jogador obteve %d+%d = %d\n",die1,die2,work_sm);
return work_sm;
}

