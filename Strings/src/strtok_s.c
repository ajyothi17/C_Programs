#include "main.h"

static char* src = NULL;

char* strtok_s(char* str, const char* delim)
{
	if(NULL == src)
	{
		if(NULL != str)
			src = str;
	}

	if(NULL == str)
	{
		str = src;
	}

	while('\0' != *str)
	{
		for(index = 0; '\0' != delim[index]; index++)
		{
			
		}
	}
}
