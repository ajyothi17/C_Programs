#include "main.h"

int read_input(void)
{
	char *input = NULL;
	int num = -1;
	
	if(NULL == (input = (char*)malloc(sizeof(char*) * SIZE)))
 	{
		printf("no space available\n");
        return -1;
	}
	
	if(NULL == (fgets(input, SIZE, stdin)))
	{
		printf("couldn't read the input\n");
		return -1;
	}
	num = atoi(input);
	
	free(input);
	input = NULL;
	
	return num;
}
