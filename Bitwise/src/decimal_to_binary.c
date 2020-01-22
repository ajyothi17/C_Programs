#include "main.h"

void decimal_to_binary(uint num)
{
	int index = 0;
	
	for(index = INT_BITS - 1; index >= 0; index--)
	{
		if(1 == ((num >> index) & 1))
			printf("1");
		else
			printf("0");

	}

	printf("\n");
}
