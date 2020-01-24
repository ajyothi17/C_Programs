#include "main.h"

char* strncpy_s(char* src, char* dest, uint no_of_char)
{
	uint len = 0;
	int index = 0;
	
	if(NULL == src)
	{
		printf("invalid string\n");
		return NULL;
	}
	
	len = strlen_s(src);

	if((no_of_char < 0) || (no_of_char > len))
	{
		printf("invalid input\n");
		return NULL;
	}
	
	while(index < no_of_char)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	
	return dest;
}
