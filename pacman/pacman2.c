#include "io.c"
#include "clyde.c"
//#include "walk.c"

#define L 0
#define C 1
#define D 2

#define BLINKY 1
#define PINKY 2
#define INKY 3
#define CLYDE 4

#define CENTER 0
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

int main()
{
	char maze[23][30];
	int i,j;

	
	import_maze(maze);
	
	print_maze(maze);
	
	// leitura pacman
	int pacman[3];
	pacman[L] = position_choice(L);
	pacman[C] = position_choice(C);
	pacman[D] = position_choice(D);
	
	maze[pacman[L]][pacman[C]] = 'P';
	
	// leitura ghost
	int ghost[3];
	int tghost;
	tghost = ghost_choice(); // cor do ghost
	print_name(tghost);
	ghost[L] = position_choice(L);
	ghost[C] = position_choice(C);
	ghost[D] = position_choice(D);
	
	maze[ghost[L]][ghost[C]] = 'G';
	
	// leitura target
	int *target = (int *) malloc(sizeof(int)*2);
	int red[3];
	switch (tghost)
	{
		case BLINKY:
			// target = blinky();
			break;
			
		case PINKY:
			//target = pinky();
			break;
		
		case INKY:
			print_name(BLINKY);
			red[L] = position_choice(L);
			red[C] = position_choice(C);
			red[D] = position_choice(D);
			//target = inky();
			break;
			
		case CLYDE:
			target = (int *) clyde(ghost, pacman);
			break;
	
	}
	
	maze[target[0]][target[1]] = 'T';
	
	clear_screen();
	
	//maze = walk(maze, ghost, target);
	
	print_maze(maze);
	
	print_target(target);
	
	return 0;
}
