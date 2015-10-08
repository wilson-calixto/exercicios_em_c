#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "esp.h"

int main (int argc, char *argv[])
{
    char v1[100];
    
    printf ("digite a entrada da string:\n");

    fgets(v1,sizeof(v1),stdin);

    back(v1);
    
    return 0;
}
