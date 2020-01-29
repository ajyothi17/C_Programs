#include "main.h"

int strrot_s(char* str, char* rstr)
{
	int index1 = 0;
	int index2 = 0;
	char* temp = NULL;

	if((NULL == str) || ('\0' == *str) || (NULL == rstr) || ('\0' == *rstr))
	{
		printf("invalid input string\n");
		return -1;
	}
	
	if(strlen_s(str) != strlen_s(rstr))
	{
		printf("invalid string length\n");
		return -1;
	}
	
	if(0 == strcmp_s(str, rstr))
		return 0;

	if(NULL == (temp = (char*)malloc(sizeof(char*) * SIZE)))
	{
		printf("no space available\n");
		return -1;
	}

	temp = strncpy_s(str, temp, strlen_s(str));
	temp = sappend(str, temp);
	
	if(NULL != str)
	{
		if(-1 != substring_s(rstr, temp))
		{	
			free(temp);
			temp = NULL;
			return 0;
		}

		else
		{
			free(temp);
			temp = NULL;
			return 1;
		}
	}
	
	free(temp);
	temp = NULL;
	
	return -1;
}
