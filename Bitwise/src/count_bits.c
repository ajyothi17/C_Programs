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

uint count_leading_set_bits(uint num)
{
	uint count = 0;

	while(num & 0x80000000)
	{
		count++;
		num <<= 1;
	}

	return count;
}

uint count_leading_clear_bits(uint num)
{
	uint count = 0;

	while(!(num & 0x80000000))
	{
		count++;
		num <<= 1;
	}

	return count;
}

uint count_trailing_clear_bits(uint num)
{
	uint count = 0;

	while(!(num & 0x01))
	{
		count++;
		num >>= 1;
	}

	return count;
}

uint count_trailing_set_bits(uint num)
{
	uint count = 0;

	while(num & 0x01)
	{
		count++;
		num >>= 1;
	}

	return count;
}
