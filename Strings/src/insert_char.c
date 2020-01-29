#include "main.h"

char* insert_char(char* str, const char ch, int pos)
{
	int len = 0;
	
	if('\0' == ch)
	{
		printf("invalid char input\n");
		return NULL;
	}
	
	if((NULL == str) || ('\0' == *str))
	{
		printf("invalid input string\n");
		return NULL;
	}
	
	len = strlen_s(str);
	
	if((0 > pos) || (pos > len))
	{
		printf("invalid position\n");
		return NULL;
	}
	
	*(str + len + 1) = '\0';
	while(pos != len)
		*(str + len) = *(str + len -1);
	
	*(str + pos) = ch;
	
	return str;
}