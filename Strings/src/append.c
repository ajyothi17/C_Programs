#include "main.h"

char* sappend(char* str1, char* str2)
{
	int index = 0;
	int len = 0;

	if((NULL == str1) || ('\0' == *str1) || (NULL == str2) || ('\0' == *str2))
	{
		printf("invalid string\n");
		return NULL;
	}

	len = strlen_s(str2);

	while('\0' != str1[index])
	{
		str2[len] = str1[index];
		index++;
		len++;
	}

	str2[len] = '\0';

	return str2;
}

char* snappend(char* str1, char* str2, int no_of_chars)
{
	int index = 0;
	int len = 0;

	if((NULL == str1) || ('\0' == *str1) || (NULL == str2) || ('\0' == *str2))
	{
		printf("invalid string\n");
		return NULL;
	}

	len = strlen_s(str1);
	if((no_of_chars < 0) || (no_of_chars > len))
	{
		printf("invalid no_of_chars\n");
		return NULL;
	}

	len = strlen_s(str2);

	while(index < no_of_chars)
	{
		str2[len] = str1[index];
		index++;
		len++;
	}

	str2[len] = '\0';

	return str2;
}
