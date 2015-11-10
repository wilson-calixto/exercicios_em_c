#include <stdio.h>
#include <stdlib.h>

int b[3][3]; /* board. 0: blank; -1: computer; 1: human */
 
int check_winner()
{
	int i;
	for (i = 0; i < 3; i++) {
		if (b[i][0] && b[i][1] == b[i][0] && b[i][2] == b[i][0])
			return b[i][0];
		if (b[0][i] && b[1][i] == b[0][i] && b[2][i] == b[0][i])
			return b[0][i];
	}
	if (!b[1][1]) return 0;
 
	if (b[1][1] == b[0][0] && b[2][2] == b[0][0]) return b[0][0];
	if (b[1][1] == b[2][0] && b[0][2] == b[1][1]) return b[1][1];
 
	return 0;
}
 
#define for_ij for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
int best_i, best_j;
int test_move(int val, int depth)
{
	int i, j, score;
	int best = -1, changed = 0;
 
	if ((score = check_winner())) return (score == val) ? 1 : -1;
 
	for_ij {
		if (b[i][j]) continue;
 
		changed = b[i][j] = val;
		score = -test_move(-val, depth + 1);
		b[i][j] = 0;
 
		if (score <= best) continue;
		if (!depth) {
			best_i = i;
			best_j = j;
		}
		best = score;
	}
 
	return changed ? best : 0;
}

int joga_minimax(char **mat)
{
    int i,j;

    for_ij 
    {
        if (mat[i][j] == 'X')
        {
            b[i][j] = 1;
        }
        else
        {
            if (mat[i][j] == 'O')
            {
             
                b[i][j] = -1;
            }
            else b[i][j] = 0;
        }               
    }

    test_move(-1,0);

    return converte_saida();
}

int converte_saida()
{
    switch (best_i)
    {
        case 0:
            if (best_j == 0)
                return 1;
            if (best_j == 1)
                return 2;
            if (best_j == 2)
                return 3;
        break;
        case 1:
            if (best_j == 0)
                return 4;
            if (best_j == 1)
                return 5;
            if (best_j == 2)
                return 6;
        break;
        case 2:
            if (best_j == 0)
                return 7;
            if (best_j == 1)
                return 8;
            if (best_j == 2)
                return 9;
        break;

    }
}


