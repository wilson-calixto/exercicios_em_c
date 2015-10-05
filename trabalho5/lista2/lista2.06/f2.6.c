#include<string.h>


int is_segment(int n,char *a, char *t )
{
    int i, j, cont=0;
    for(i=n;i<strlen(t);i++)
    {          
        if(a[cont] == t[i])
        {
            cont++;
            if(cont==strlen(a) && a[0] == t[i])
            {
               return i;
            } 
	        else
	        {
	    	    if(cont==strlen(a))
		        {
                    return i+1;
                }
            }
        }
        else
        {
             cont = 0;
            if(a[cont] == t[i])
            {
                cont++;
            }

        }           
    }
    return 0;
}


int count_segments(char *a, char *t)
{   
    int count=0 , n=0;
    while(is_segment(n,a,t))
    {   
        count++;
        n = is_segment(n,a,t);
    }
    return count;
}

