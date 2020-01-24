#include "main.h"

uint invertbits(uint num1, uint pos, uint no_of_bits)
{
	if((pos + 1) < no_of_bits)
	{
		printf("invalid position\n");
		return -1;
	}

	num1 = num1 ^ (MASK(no_of_bits) << (pos - no_of_bits + 1));

	return num1;
}
