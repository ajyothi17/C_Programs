#include "main.h"

int main(void)
{
    uint run = 1;
	uint choice = 0;
	uint num1 = 0;
	uint num2 = 0;
	uint src_bit = 0;
    uint dest_bit = 0;
    uint no_of_bits = 0;
	
	while(0 != run)
	{
		printf("1. Bit swapping\n"
			   "2. Bit swapping in two nums\n"
               "3. Bit copy\n"
               "4. Bit toggle\n"
               "5. Test bit set or not\n"
               "6. Rotate bits\n"
			   "7. Count set bits\n"
			   "8. Count clear bits\n"
			   "9. Count leading set bits\n"
			   "10. Count leading clear bits\n"
			   "11. Count trailing clear bits\n"
			   "12. Count trailing set bits\n"
			   "13. Max/min of two nums\n"
			   "14. Set/Clear bits\n"
			   "15. Set bits\n"
			   "16. Invert bits\n"
			   "17. Getbits\n"
			   "18. exit\n"
			   "enter your choice: ");

    	choice = read_input();

		switch(choice)
		{
			case 1: 
    				printf("enter a num: ");
    				num1 = read_input();

    				printf("enter src_bit: ");
    				src_bit = read_input();

    				printf("enter dest_bit: ");
    				dest_bit = read_input();

					printf("before swaping : ");
    				decimal_to_binary(num1);

					num1 = bit_swap(num1, src_bit, dest_bit);

					printf("after swaping : ");
    				decimal_to_binary(num1);

					break;

			case 2:
    				printf("enter a snum: ");
    				num1 = read_input();

    				printf("enter a dnum: ");
    				num2 = read_input();

    				printf("enter position in snum: ");
    				src_bit = read_input();

    				printf("enter position in dnum: ");
    				dest_bit = read_input();

					printf("before swapping, snum : ");
    				decimal_to_binary(num1);
					printf(", dnum : ");
    				decimal_to_binary(num2);

    				bit_swap_nums(&num1, &num2, src_bit, dest_bit);

					printf("after swapping, snum : ");
    				decimal_to_binary(num1);
					printf(", dnum : ");
    				decimal_to_binary(num2);

					break;

			case 3:
				    printf("enter a snum: ");
    				num1 = read_input();

				    printf("enter a dnum: ");
				    num2 = read_input();
					
				    printf("enter position in snum: ");
				    src_bit = read_input();

				    printf("enter no. of bits to be swapped from snum to dnum: ");
				    no_of_bits = read_input();

				    printf("enter position in dnum: ");
				    dest_bit = read_input();
    
					printf("before bit_copy, snum : ");
				    decimal_to_binary(num1);
					printf(", dnum : ");
				    decimal_to_binary(num2);

				    if(bit_copy(&num1, &num2, src_bit, dest_bit, no_of_bits))
					{
						printf("invalid input\n");
						return EXIT_FAILURE;
					}

					printf("after bit_copy, snum : ");
				    decimal_to_binary(num1);
					printf(", dnum : ");
				    decimal_to_binary(num2);

					break;
                   
			case 4:
				    printf("enter a num for toggle: ");
				    num1 = read_input();

				    printf("before toggle, num : ");
				    decimal_to_binary(num1);

					printf("after even toggle, num : ");
				    decimal_to_binary(even_bit_toggle(num1));

					printf("after odd toggle, num : ");
				    decimal_to_binary(odd_bit_toggle(num1));

					break;

			case 5:
    				printf("enter a num to test bit: ");
    				num1 = read_input();

				    printf("enter the pos to test: ");
				    src_bit = read_input();

					if(BIT_TEST(num1, src_bit))
					{
						printf("bit is set in given position\n");
					}
					else
					{
						printf("bit is not set in the given position\n");
					}

					break;

			case 6:
					printf("1. left rotate\n"
						   "2. right rotate\n"
                           "3. left rotate n times\n"
						   "4. right rotate n times\n"
						   "5. exit\n"
						    "enter your choice: ");

    				choice = read_input();

					switch(choice)
					{
						case 1: 
								printf("enter the num to rotate: ");
								num1 = read_input();

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = left_rotate_bits(num1);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;
								
						case 2:
								printf("enter the num to rotate: ");
								num1 = read_input();

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = right_rotate_bits(num1);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;

						case 3:
								printf("enter the num to rotate: ");
								num1 = read_input();
				    
								printf("enter no. of bits to rotate: ");
								no_of_bits = read_input();

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = left_rotate_n_bits(num1, no_of_bits);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;
								
						case 4:
								printf("enter the num to rotate: ");
								num1 = read_input();
				    
								printf("enter no. of bits to rotate: ");
							    no_of_bits = read_input();

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = right_rotate_n_bits(num1, no_of_bits);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;

						case 5: break;
								
						default:
								printf("invalid choice\n");
								break;
					}

					break;

			case 7:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of set bits in given num: %d\n", count_bit_set(num1));

					break;

			case 8:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of set bits in given num: %d\n", count_bit_clear(num1));

					break;
					
			case 9:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of leading set bits in given num: %d\n", count_leading_set_bits(num1));

					break;

			case 10:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of leading clear bits in given num: %d\n", count_leading_clear_bits(num1));

					break;

			case 11:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of leading clear bits in given num: %d\n", count_trailing_clear_bits(num1));

					break;

			case 12:
    				printf("enter a num: ");
    				num1 = read_input();
					
					printf("Given num: ");
					decimal_to_binary(num1);

					printf("no. of leading clear bits in given num: %d\n", count_trailing_set_bits(num1));

					break;
			
			case 13: 
					printf("enter num1: ");
					num1 = read_input();

					printf("enter num2: ");
					num2 = read_input();

					printf("maximum of given num %d\n", MAX(num1, num2));
					printf("minimum of given num %d\n", MIN(num1, num2));

					break;

			case 14:
					printf("1. Clear the right most set bit\n"
						   "2. Clear the left most set bit\n"
						   "3. Set the right most clear bit\n"
						   "4. Set the left most clear bit\n"
						   "5. Set bit from pos 's' to 'd'\n"
						   "6. Clear bit from pos 's' to 'd'\n"
						   "7. Toggle bit from pos 's' to 'd'\n"
						   "8. Exit\n"
						   "enter your choice: ");

					printf("enter a num: ");
					choice = read_input();

					switch(choice)
					{
						case 1:
								printf("enter a num: ");
								num1 = read_input();

								num1 = CLEAR_RIGHTMOST_BIT(num1);
								decimal_to_binary(num1);

								break;

						case 2:
								printf("enter a num: ");
								num1 = read_input();

								num1 = CLEAR_LEFTMOST_BIT(num1);
								decimal_to_binary(num1);

								break;

						case 3:
								printf("enter a num: ");
								num1 = read_input();

								num1 = SET_RIGHTMOST_BIT(num1);
								decimal_to_binary(num1);

								break;

						case 4:
								printf("enter a num: ");
								num1 = read_input();
								
								num1 = SET_LEFTMOST_BIT(num1);
								decimal_to_binary(num1);

								break;

						case 5:
								printf("enter a num: ");
								num1 = read_input();

								printf("enter src_bit: ");
								src_bit = read_input();
								
								printf("enter dest_bit: ");
								dest_bit = read_input();

								SET_BITS(num1, src_bit, dest_bit);
								decimal_to_binary(num1);

								break;

						case 6:
								printf("enter a num: ");
								num1 = read_input();

								printf("enter src_bit: ");
								src_bit = read_input();
								
								printf("enter dest_bit: ");
								dest_bit = read_input();

								CLEAR_BITS(num1, src_bit, dest_bit);
								decimal_to_binary(num1);

								break;

						case 7:
								printf("enter a num: ");
								num1 = read_input();

								printf("enter src_bit: ");
								src_bit = read_input();
								
								printf("enter dest_bit: ");
								dest_bit = read_input();

								TOGGLE_BITS(num1, src_bit, dest_bit);
								decimal_to_binary(num1);

								break;

						case 8: break;

						default:
								printf("invalid choice\n");
								break;
					}

					break;

			case 15:
					printf("enter a num1: ");
					num1 = read_input();
					
					printf("enter a num2: ");
					num2 = read_input();
					
					printf("enter position: ");
					src_bit = read_input();
					
					printf("enter no_of_bits: ");
					no_of_bits = read_input();
					
					printf("before setbits, num1: ");
					decimal_to_binary(num1);
					printf(", num2: ");
					decimal_to_binary(num2);

					num1 = setbits(num1, num2, src_bit, no_of_bits);
					
					printf("after setbits, num1: ");
					decimal_to_binary(num1);
					printf(", num2: ");
					decimal_to_binary(num2);

					break;

			case 16:
					printf("enter a num: ");
					num1 = read_input();
					
					printf("enter position: ");
					src_bit = read_input();
					
					printf("enter no_of_bits: ");
					no_of_bits = read_input();
					
					printf("before invertbits, num1: ");
					decimal_to_binary(num1);

					num1 = invertbits(num1, src_bit, no_of_bits);
					
					printf("after invertbits, num: ");
					decimal_to_binary(num1);
					
					break;

			case 17:
					printf("enter a num: ");
					num1 = read_input();
					
					printf("enter position: ");
					src_bit = read_input();
					
					printf("enter no_of_bits: ");
					no_of_bits = read_input();
					
					num1 = GET_BITS(num1, src_bit, no_of_bits);
					
					printf("after getbits, num: ");
					decimal_to_binary(num1);
					
					break;

					
			case 18: 
					run = 0;
					break;

			default:
					printf("invalid choice\n"); 
					
		}
	}


	return EXIT_SUCCESS;
}
