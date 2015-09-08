#include <stdio.h> 
#include "funcao.h"

int main ( int argc, const char *argv[] )
{
    int tipo;
    float num;
    printf ( "escolha entre 1-celsius e 2-farenheit: \n" );
    scanf ( "%d", &tipo );
    switch (tipo)
    {
        case 1:
            printf("temperatura:\n");
            scanf ( "%f", &num );
            celsius(num);
            break;

        case 2:
            printf("temperatura:\n");
            scanf ( "%f", &num );
            farenheit(num);
            break;
   }

    return 0;
}
