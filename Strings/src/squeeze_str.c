#include "main.h"

char* squeeze_str(char* str)
{
	int index1 = 0;
	int index2 = 0;
	int length1 = 0;
	int length2 = 0;
	
	if((NULL == str) || ('\0' == *str))
	{
		printf("invalid input string\n");
		return NULL;
	}

	length1 = strlen_s(str);
	while(index1 < (length1 - length2))
	{
		if(*(str + index1) == *(str + index1 + 1))
		{
			for(index2 = index1; *(str + index2) != '\0'; index2++)
			{
				*(str + index2) = *(str + index2 + 1);
			}
			
			*(str + index2) = '\0';
			length2++;
		}

		else
		{
			index1++;
		}
	}
	
	return str;
}
