#include "main.h"

static char* src = NULL;

char* strtok_s(char* str, const char* delim)
{
	int index1 = 0;
	int index2 = 0;
	int len = 0;
	int flag = 0;
	
	if(((NULL == src) && (NULL == str)) || (NULL == delim))
	{
		return NULL;
	}
	
 	if(NULL == src)
	{
		if(NULL != str)
			src = str;
	}

	if(NULL == str)
	{
		str = src;
	}
	
	
	while('\0' != src[index1])
	{
		index2 = 0;
		
		while('\0' != delim[index2])
		{
			if(src[index1] != delim[index2])
			{
				index2++;
			}
			
			else
			{
				break;
			}
		}
		
		if((0 == index1) && ('\0' != delim[index2]) && (src[index1] == delim[index2]))
		{
			str[index1] = '\0';
			src = src + index1 + 1;
			str = src;
		}
		
		else if(('\0' != delim[index2]) && (src[index1] == delim[index2]))
		{
			str[index1] = '\0';
			src = src + index1 + 1;
			return str;
		}
		
		index1++;
	}
	
	if('\0' == src[index1])
	{
		src = NULL;
		return str;
	}
			
	return NULL;
}
