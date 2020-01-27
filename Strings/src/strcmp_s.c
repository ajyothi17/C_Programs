#include "main.h"

int strcmp_s(char* str1, char* str2)
{
	int index = 0;

	if(((NULL == str1) || ('\0' == *str1)) || ((NULL == str2) || ('\0' == str2)))
	{
		printf("invalid string\n");
		return -2;
	}

	while(*str1 == *str2)
	{
		if(('\0' == *str1) && ('\0' == *str2))
			return 0;
	
		str1++;
		str2++;
	}
	
	if(0 < (*str1 - *str2))
		return 1;

	return -1;
}
