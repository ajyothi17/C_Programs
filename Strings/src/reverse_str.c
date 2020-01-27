#include "main.h"

char* reverse_str(char* str, char* rev_str)
{
	int len = 0;
	int index = 0;
	
	if((NULL == str) || ('\0' == *str))
	{
		printf("invalid input string\n");
		return NULL;
	}
	
	len = strlen_s(str);
	while(--len >= 0)
	{
		rev_str[index] = str[len];
		index++;
	}
	rev_str[index] = '\0';
	
	return rev_str;
}