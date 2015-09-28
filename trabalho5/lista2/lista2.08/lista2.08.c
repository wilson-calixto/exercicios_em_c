#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "esp.h"

int main (int argc, char *argv[])
{
    char v1[50];
    
    printf ("digite a entrada da string:\n");
    scanf ("%[^\n]s", v1);

    back(v1);
    
    return 0;
}
