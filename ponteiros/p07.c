#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    // alocar 5MB 
	// 5B  = 5 
	// 5KB = 5 * 1024
	// 5MB = 5 * 1024 * 1024 
	//
	int *img = malloc( 5 * 1024 * 1024);
    if ( img == NULL)
	{
        printf("Falha\n");
    } 
	else 
	{
        printf("Sucesso\n");
    }
    
	getchar();
    
	free(img);

	return 0;
}
