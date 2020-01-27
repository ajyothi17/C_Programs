#include "main.h"

static char* src = NULL;

char* strtok_s(char* str, const char* delim)
{
	int index1 = 0;
	int index2 = 0;
	int len = 0;
	int flag = 0;
	
 	if(NULL == src)
	{
		if(NULL != str)
			src = str;
	}

	if(NULL == str)
	{
		str = src;
	}

	len = strlen_s(delim);
	while('\0' != str[index1])
	{
		index2 = 0;
		if(str[index1] == delim[index2])
		{
			while(++index2 < len)
			{
				if(str[index1 + index2] != delim[index2])
					break;
				
				flag = 1;
			}
		}
		
		if(1 == flag)
		{
			src = (str + index1 + index2);
			str[index1 + index2] = '\0';
			return str;
		}
		
		index1++;
	}
	
	return NULL;
}