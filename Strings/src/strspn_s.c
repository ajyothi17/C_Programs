#include "main.h"

int strspn_s(char* str, char* accept)
{
	int count = 0;
	int index = 0;

	if((NULL == str) || ('\0' == *str) || (NULL == accept) || ('\0' == *accept))
	{
		printf("invalid string input\n");
		return -1;
	}

	while('\0' != *str)
	{
		index = 0;
		while('\0' != accept[index])
		{
			if(*str == accept[index])
			{
				count++;
				break;
			}

			index++;
		}
		str++;
	}

	return count;
}
