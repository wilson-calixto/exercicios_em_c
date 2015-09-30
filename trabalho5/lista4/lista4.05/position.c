#include <stdio.h>
#include <string.h>

int position (char a[], char b[])
{
    int *aux, ind=-1, i=0, j=0;
    
    while (i < strlen(a))
    {
        if((a[i]==b[j]) && (b[j] != '\0'))
        {
            ind = i;
            j++;
        }
        i++;
    }
      
    return ind;
}
