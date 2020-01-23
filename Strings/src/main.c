#include "main.h"

int main(void)
{
	char* input = NULL;
	char* src_str = NULL;
	char* dest_str = NULL;
	int no_of_chars = 0;
	
	if(NULL == (input = (char*)malloc(sizeof(char*) * SIZE)))
	{
		printf("no space available\n");
		return EXIT_FAILURE;
	}
	
	if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
	{
		printf("no space available\n");
		return EXIT_FAILURE;
	}
	
	printf("enter input string: ");
	if(NULL == fgets(src_str, SIZE, stdin))
	{
		printf("reading input failed\n");
		return EXIT_FAILURE;
	}
	
	printf("enter the no. of char to be copied: ");
	if(NULL == fgets(input, SIZE, stdin))
	{
		printf("read failed\n");
		return EXIT_FAILURE;
	}
	no_of_chars = atoi(input);
	
	dest_str = strncpy_s(src_str, dest_str, no_of_chars);
	printf("string after strncpy, %s", dest_str);
	
	return EXIT_SUCCESS;
}