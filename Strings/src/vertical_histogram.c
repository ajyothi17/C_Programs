#include "main.h"

int vertical_histogram(char *str)
{
	int index = 0;
	int words[SIZE];
	int max = 0;
	int no_of_chars = 0;
	int no_of_words = 0;
	
	if(('\0' == *str) || (NULL == str))
	{
		printf("invalid string input\n");
		return 1;
	}
	
	for(index = 0; index < SIZE; index++)
		words[index] = 0;
	
	index = 0;
	while('\0' != *(str + index))
	{
		no_of_chars++;
		
		if((' ' == *(str + index)) || ('\n' == *(str + index)) || ('\t' == *(str + index)))
		{
			if(no_of_chars > max)
				max = no_of_chars;
			
			words[no_of_words] = no_of_chars - 1;
			no_of_chars = 0;
			no_of_words++;
		}
		
		index++;
	}

	printf("max - %d\n", max);
	while(max)
	{
		for(index = 0; index <= no_of_words; index++)
		{
//			printf("words[index] %d\n", words[index]);
			if(words[index] >= max)
				printf("*");
		
			else
				printf(" ");
		}
		printf("\n");
		max--;
	}
	
	return 0;
}
