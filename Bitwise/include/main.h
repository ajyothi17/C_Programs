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
#endif
