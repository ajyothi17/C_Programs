#include "main.h"

int main(void)
{
	char* src_str = NULL;
	char* dest_str = NULL;
	int no_of_chars = 0;
	
	if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
	{
		printf("no space available\n");
		return EXIT_FAILURE;
	}
	
	if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
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
	no_of_chars = read_input();
	
	dest_str = strncpy_s(src_str, dest_str, no_of_chars);
	printf("string after strncpy, %s\n", dest_str);
	
	return EXIT_SUCCESS;
}
