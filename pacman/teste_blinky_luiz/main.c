#include <stdio.h>
#include "io_blinky.h"
#include "target.h"
#define R 19
#define C 23

int main( void ) {

	char maze[R][C];

	//input( maze, R, C );
	//print( maze, R, C );
	
	printf( "%d\n", distance( input_x(), input_y(), input_x(), input_y() ));
	return 0;
}
