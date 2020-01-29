#include "main.h"

int substring_s(const char* sub_str, const char* str)
{
	int index1 = 0;
	int index2 = 0;
	int flag = 0;
	
	if(('\0' == *sub_str) || (NULL == sub_str) || ('\0' == str) || (NULL == str))
	{
		printf("invalid input string\n");
		return -1;
	}
	
	while('\0' != *(str + index1))
	{
		if(*(str + index1) == *(sub_str + index2))
		{
			flag = 1;

			while('\0' != *(str + (++index2)))
			{
				if(*(str + index1 + index2) != *(sub_str + index2))
				{
					flag = 0;
					break;
				}
				
			}
		}
		
		if(flag)
			return index1;
		
		index1++;
	}
	
	return -1;
}
