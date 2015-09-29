#include <stdio.h>
#include <string.h>

int main (int argc, const char *argv[])
{
    int *aux, ind=-1, i=0, j=0;
    char a[100], b[100];

    printf("informe uma sequencia de caracters para o primeiro vet: \n");
    scanf("%s", a);

    printf("informe uma sequencia de caracters: \n");
    scanf("%s", b);

    while (i < strlen(a))
    {
        if((a[i]==b[j]) && (b[j] != '\0'))
        {
            ind = i;
            j++;
        }
        i++;
    }
    
    printf("%d\n",ind);

    return 0;
}
