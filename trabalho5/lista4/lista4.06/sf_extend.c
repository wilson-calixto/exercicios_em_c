#include <stdio.h>
#include <string.h>

int sf_extend(char v1[100], char v2[100])
{
    int i, len, lens, lent, result;
    
    i=0;
    result=1;
    
    fflush(stdin);
    
    lens = strlen(v1);
    lent = strlen(v2);
    len = (lent-lens);

    while( v1[i] != '\0')
    {
        if (v1[i] != v2[len])
        {
            result = 0;
            break;
        }
        i=i+1;
        len=len+1;   
    }

    return result;
}
