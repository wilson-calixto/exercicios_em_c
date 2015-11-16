#include <stdio.h>
#include "io_blinky.h"
#include "behavior.h"
#define R 23
#define C 19

int main( int argc, const char *argv[] ) {

	int maze[R][C];

	input( maze );
	move_blinky( maze, input_x(), input_y(), input_x(), input_y() );
	print( maze );

	return 0;
}
