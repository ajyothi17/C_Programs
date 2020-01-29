#include "main.h"

int check_consecutive_ones(int arr[], int size)
{
	int index = 0;
	int count = 0;
	
	if((0 > size) || (size > INT_MAX))
	{
		printf("invalid array size\n");
		return -1;
	}

	if(size < 3)
	{
		printf("size of array should be atleast 3\n");
		return -1;
	}

	for(index = 0; index < size; index++)
	{
		if((0 != arr[index]) && (1 != arr[index]))
		{
			printf("invalid array input\n");
			return -1;
		}
		
		if(1 == arr[index])
		{
			count = 1;
			while(arr[index] == arr[index + count])
			{
				count++;
				if(3 == count)
					return 0;
			}
		}
	}
	
	return 1;
}
