#include <stdio.h>

int seq[100000];

void comb(int beg, int n, int k)
{
        int i,j;
        if(k == 1)
        {
                seq[k-1] = beg;
                
                for(i=n-2;i--;)
                { 
                        printf("%d ",seq[i]);
                }
                printf("\n");
                return;
        }
        
        for(i = beg+1;i <= n-k+2;i++)
        {
                seq[k-1] = beg;
                comb(i,n, k-1);
        }
}

int main()
{
        int i,n,k, tam;
        scanf("%d%d",&n,&k);

        for(i = 1;i <= n-k+1;i++) comb(i,n,k);
        
        
        return 0;
}
