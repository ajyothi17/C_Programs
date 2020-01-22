#include "main.h"

int bit_copy(uint *snum, uint *dnum, uint src_bit, uint dest_bit, uint no_of_bits)
{
    int extract = 0;

	if(((src_bit + 1) < no_of_bits) || ((dest_bit + 1)< no_of_bits))
	{
		printf("invalid src/dest positions\n");
		return 1;
	}

	extract = (*snum >> (src_bit - no_of_bits + 1)) & MASK(no_of_bits);

    *dnum = (*dnum & (~(MASK(no_of_bits) << (dest_bit - no_of_bits + 1)))) ^ (extract << (dest_bit - no_of_bits + 1));

     return 0;
}
