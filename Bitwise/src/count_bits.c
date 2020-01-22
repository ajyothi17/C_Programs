#include "main.h"

uint count_bit_set(uint num)
{
	uint count = 0;

	while(num)
	{
		count++;
		num &= (num - 1);
	}

	return count;
}

uint count_bit_clear(uint num)
{
	uint count = 0;

	while(num)
	{
		count++;
		num &= (num - 1);
	}

	return 32 - count;
}

uint cnt_leading_set_bits (uint num)
{

}
