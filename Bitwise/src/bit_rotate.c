#include "main.h"

uint left_rotate_bits(uint num)
{
	if(BIT_TEST(num, 31))
		return (num << 1) | 1;

	return num << 1;
}

uint left_rotate_n_bits(uint num, uint no_of_bits)
{
	num = (num << no_of_bits) | ((num >> (31 - no_of_bits + 1)) & MASK(no_of_bits));

	return num;
}

uint right_rotate_n_bits(uint num, uint no_of_bits)
{
	num = (num >> no_of_bits) | ((num & MASK(no_of_bits)) << (31 - no_of_bits + 1));

}

uint right_rotate_bits(uint num)
{
	if(BIT_TEST(num, 0))
		return (num >> 1) | (1 << 31);

	return num >> 1;
}
