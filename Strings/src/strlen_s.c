#include "main.h"

uint strlen_s(char *str)
{
	int len = 0;

	while('\0' != str[len])
	{
		len++;
	}

	return len;
}
