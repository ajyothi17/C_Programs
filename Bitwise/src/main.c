#include "main.h"

int main(void)
{
    char *input = NULL;
    uint run = 1;
	uint choice = 0;
	uint num1 = 0;
	uint num2 = 0;
	uint src_bit = 0;
    uint dest_bit = 0;
    uint no_of_bits = 0;
	
    if(NULL == (input = (char*)malloc(sizeof(char*) * SIZE)))
 	{
		printf("no space available\n");
        return EXIT_FAILURE;
	}
	
	while(0 != run)
	{
		printf("1. Bit swapping\n"
			   "2. Bit swapping in two nums\n"
               "3. Bit copy\n"
               "4. Bit toggle\n"
               "5. Test bit set or not\n"
               "6. Rotate bits\n"
			   "7. exit\n"
			   "enter your choice: ");

    	if(NULL == (fgets(input, SIZE, stdin)))
		{
			printf("couldn't read the input\n");
			return EXIT_FAILURE;
		}
    	choice = atoi(input);

		switch(choice)
		{
			case 1: 
    				printf("enter a num: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				num1 = atoi(input);

    				printf("enter src_bit: ");
   					if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				src_bit = atoi(input);

    				printf("enter dest_bit: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				dest_bit = atoi(input);

					printf("before swaping : ");
    				decimal_to_binary(num1);

					num1 = bit_swap(num1, src_bit, dest_bit);

					printf("after swaping : ");
    				decimal_to_binary(num1);

					break;

			case 2:
    				printf("enter a snum: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				num1 = atoi(input);

    				printf("enter a dnum: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				num2 = atoi(input);

    				printf("enter position in snum: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				src_bit = atoi(input);

    				printf("enter position in dnum: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				dest_bit = atoi(input);

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
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
    				num1 = atoi(input);

				    printf("enter a dnum: ");
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    num2 = atoi(input);

				    printf("enter position in snum: ");
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    src_bit = atoi(input);

				    printf("enter no. of bits to be swapped from snum to dnum: ");
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    no_of_bits = atoi(input);

				    printf("enter position in dnum: ");
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    dest_bit = atoi(input);
    
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
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    num1 = atoi(input);

				    printf("before toggle, num : ");
				    decimal_to_binary(num1);

					printf("after even toggle, num : ");
				    decimal_to_binary(even_bit_toggle(num1));

					printf("after odd toggle, num : ");
				    decimal_to_binary(odd_bit_toggle(num1));

					break;

			case 5:
    				printf("enter a num to test bit: ");
    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    num1 = atoi(input);

				    printf("enter the pos to test: ");
				    if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
				    src_bit = atoi(input);

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

    				if(NULL == (fgets(input, SIZE, stdin)))
					{
						printf("couldn't read the input\n");
						return EXIT_FAILURE;
					}
			    	choice = atoi(input);

					switch(choice)
					{
						case 1: 
								printf("enter the num to rotate: ");
								if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
								num1 = atoi(input);

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = left_rotate_bits(num1);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;
								
						case 2:
								printf("enter the num to rotate: ");
								if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
								num1 = atoi(input);

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = right_rotate_bits(num1);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;

						case 3:
								printf("enter the num to rotate: ");
								if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
								num1 = atoi(input);
				    
								printf("enter no. of bits to rotate: ");
							    if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
				    			no_of_bits = atoi(input);

								printf("before rotate, num : ");
								decimal_to_binary(num1);

								num1 = left_rotate_n_bits(num1, no_of_bits);

								printf("after rotate, num : ");
								decimal_to_binary(num1);

								break;
						case 4:
								printf("enter the num to rotate: ");
								if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
								num1 = atoi(input);
				    
								printf("enter no. of bits to rotate: ");
							    if(NULL == (fgets(input, SIZE, stdin)))
								{
									printf("couldn't read the input\n");
									return EXIT_FAILURE;
								}
				    			no_of_bits = atoi(input);

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
					run = 0;
					break;

			default:
					printf("invalid choice\n"); 
					
		}
	}


	return EXIT_SUCCESS;
}
