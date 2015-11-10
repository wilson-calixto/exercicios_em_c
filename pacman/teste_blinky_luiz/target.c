#include <stdio.h>
#include <math.h>

int distance( int pac_x, int pac_y, int blinky_x, int blinky_y ) {

	int x, y, d;

	x = pac_x - blinky_x;
	y = pac_y - blinky_y;
	d = pow( x, 2 ) + pow( y, 2 );
	d = pow( d , 0.5 );

	return d;
}
