#include <stdlib.h>

#ifdef WIN32
  #define CLEARSCR system ( "cls" )
#else
  #define CLEARSCR system ( "clear" )
#endif

void clear_screen()
{
    CLEARSCR;
}
