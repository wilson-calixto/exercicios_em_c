#include <stdio.h>
#define max 3

int best_i, best_j;

int test_move(int val, int depth)
{
	int i, j, score;
	int best = -1, changed = 0;
 
	if ((score = check_winner())) return (score == val) ? 1 : -1;
 
	for(i=0;i<max;i++)
	{
	        for(j=0;j<max;j++)
	        {
		        if (b2[i][j]) continue;
         
		        changed = b2[i][j] = val;
		        score = -test_move(-val, depth + 1);
		        b2[i][j] = 0;
         
		        if (score <= best) continue;
		        if (!depth) {
			        best_i = i;
			        best_j = j;
		        }
		        best = score;
	        }
	  }
 
	return changed ? best : 0;
}
