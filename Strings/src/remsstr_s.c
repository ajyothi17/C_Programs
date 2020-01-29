#include "main.h"

char* remsstr_s(char* str, char* sstr)
{
	int pos = 0;
	int len = 0;
	
	if((NULL == str) || ('\0' == *str) ||(NULL == sstr) || ('\0' == *sstr))
	{
		printf("invalid string\n");
		return NULL;
	}
	
	if(-1 != (pos = substring_s(sstr, str)))
	{
		len = strlen_s(sstr);
		
		while('\0' != *(str + pos + len))
		{
			*(str + pos) = *(str + pos + len);
			pos++;
		}
		
		*(str + pos) = '\0';
		
		return str;
	}
	
	return str;
}