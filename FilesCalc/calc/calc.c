#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int num1;
	int num2;
	char op;
	
	if(4 != argc)
	{
		printf("invalid number of arguments\n"
			   "expected <executable> <num1> <num2> <operator>\n");

		return EXIT_FAILURE;
    }

	op = argv[3][0];

	switch(op)
	{
		case '+':
				  num1 = atoi(argv[1]);
				  num2 = atoi(argv[2]);

				  printf("sum of %d and %d = %d\n", num1, num2, num1 + num2);

				  break;

		case '-':
				  num1 = atoi(argv[1]);
				  num2 = atoi(argv[2]);

				  printf("diff of %d and %d = %d\n", num1, num2, num1 - num2);

				  break;

		case '*':
				  num1 = atoi(argv[1]);
				  num2 = atoi(argv[2]);

				  printf("multiplication of %d and %d = %d\n", num1, num2, num1 * num2);

				  break;

		case '/':
				  num1 = atoi(argv[1]);
				  num2 = atoi(argv[2]);

				  printf("division of %d and %d = %f\n", num1, num2, ((float)num1) / num2);

				  break;

		default:
				 printf("invalid choice\n");
                 break;
	}

	return EXIT_SUCCESS;
}
