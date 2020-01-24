#ifndef __MAIN_HEADER__
#define __MAIN_HEADER__
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#define SIZE 256
#define INT_BITS 32

#define MASK(n) ~(~0 << n)

#define ODD_TOGGLE 0x55555555
#define EVEN_TOGGLE 0xAAAAAAAA

#define BIT_TEST(num, pos) ((num >> pos) & 1) ? true : false

#define MAX(num1, num2) ((num1 - num2) & 0x80000000) ? num2 : num1
#define MIN(num1, num2) ((num1 - num2) & 0x80000000) ? num1 : num2

#define CLEAR_RIGHTMOST_BIT(num) (BIT_TEST(num, 0)) ? (num & ((~0) << 1)) : num
#define CLEAR_LEFTMOST_BIT(num) (BIT_TEST(num, 31)) ? (num ^ (1 << 31)) : num

#define SET_RIGHTMOST_BIT(num) (BIT_TEST(num, 0)) ? num : (num | 0x1)
#define SET_LEFTMOST_BIT(num) (BIT_TEST(num, 31)) ? num : (num | 0x80000000)

#define GET_BITS(num, pos, no_of_bits) (num >> pos) & (MASK(no_of_bits))

#define SET_BITS(num, src, dest) \
		{ \
			if(src > dest) \
				num = (MASK(src - dest + 1) << dest); \
			else if(dest > src) \
				num = (MASK(dest - src + 1) << src); \
			else \
				num = (1 << src); \
		}
		
#define CLEAR_BITS(num, src, dest) \
		{ \
			if(src > dest) \
				num = ~(MASK(src - dest + 1) << dest); \
			else if(dest > src) \
				num = ~(MASK(dest - src + 1) << src); \
			else \
				num = ~(1 << src); \
		}

#define TOGGLE_BITS(num, src, dest) \
		{ \
			if(src > dest) \
				num = num ^ (MASK(src - dest + 1) << dest); \
			else if(dest > src) \
				num = num ^ (MASK(dest - src + 1) << src); \
			else \
				num = num ^ (1 << src); \
		}

typedef unsigned int uint;

void decimal_to_binary(uint num);
uint bit_swap(uint num, uint src, uint dest);
void bit_swap_nums(uint *snum, uint *dnum, uint src_bit, uint dest_bit);
int bit_copy(uint *snum, uint *dnum, uint src_bit, uint dest_bit, uint no_of_bits);
int even_bit_toggle (uint num);
int odd_bit_toggle (uint num);
uint left_rotate_bits(uint num);
uint right_rotate_bits(uint num);
uint left_rotate_n_bits(uint num, uint no_of_bits);
uint right_rotate_n_bits(uint num, uint no_of_bits);
uint count_bit_set(uint num);
uint count_bit_clear(uint num);
uint count_leading_set_bits(uint num);
uint count_trailing_set_bits(uint num);
uint count_leading_clear_bits(uint num);
uint count_trailing_clear_bits(uint num);
uint setbits(uint num1, uint num2, uint pos, uint no_of_bits);
uint invertbits(uint num1, uint pos, uint no_of_bits);
#endif
