#include "main.h"

int main(void)
{
	char* src_str = NULL;
	char* dest_str = NULL;
	char* token = NULL;
	int no_of_chars = 0;
	int run = 1;
	int choice = 0;
	int len = 0;
	int ret = 0;
	int pos = -1;
	int index = 0;
	int size = 0;
	int arr[SIZE];
	char ch = '\0';
	
	while(run)
	{
		printf("1. strncpy_s() - copy str1 to str2\n"
			   "2. sappend_s() - append str2 to str1\n"
			   "3. snappend_s() - append n chars from str2 to str1\n"
			   "4. strcmp_s() - compare two given strings\n"
			   "5. strspn_s() - to count the initial set of chars in str1, matches any of char in str2\n"
			   "6. strtok_s() - return the token split by delimiter\n"
			   "7. reverse_str() - to reverse the given str\n"
			   "8. squeeze_str() - to squeeze the repeating chars in str\n"
			   "9. strrot() - to check whether rstr is rotated str of str\n"
			   "10. remsstr_s() - to remove sstr from str\n"
			   "11. insertchar() - to insert a char at given pos\n"
			   "12. check_consecutive_ones() - to check for consecutive ones in a given number\n"
			   "13. vertical_histogram() - print the given string in vertical histogram\n"
			   "14. exit\n"
			   "enter your choice: ");
		
		choice = read_input();

		switch(choice)
		{
			case 1:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter the no. of char to be copied: ");
					no_of_chars = read_input();
	
					dest_str = strncpy_s(src_str, dest_str, no_of_chars);

					if(NULL != dest_str)
					{
						printf("string after strncpy, %s\n", dest_str);
					}
					else
					{
						printf("strncpy_s() failed\n");
					}

					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;
					
					break;

			case 2:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string1: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter input string2: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';

					printf("before sappend(), str1 - %s, str2 - %s\n", src_str, dest_str);
					
					dest_str = sappend(src_str, dest_str);

					if(NULL != dest_str)
					{
						printf("after sappend(), str1 - %s, str2 - %s\n", src_str, dest_str);
					}
					else
					{
						printf("sappend() failed\n");
					}
					
					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;

					break;

			case 3: 
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string1: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter input string2: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';

					printf("enter the no. of char to be copied: ");
					no_of_chars = read_input();

					printf("before sappend(), str1 - %s, str2 - %s\n", src_str, dest_str);
					
					dest_str = snappend(src_str, dest_str, no_of_chars);

					if(NULL != dest_str)
					{
						printf("after sappend(), str1 - %s, str2 - %s\n", src_str, dest_str);
					}
					else
					{
						printf("sappend() failed\n");
					}

					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;

					break;

			case 4:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string1: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter input string2: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';

					ret = strcmp_s(src_str, dest_str);

					if(0 == ret)
					{
						printf("given strings are equal\n");
					}

					else if(1 == ret)
					{
						printf("%s is greater than %s\n", src_str, dest_str);
					}

					else if(-1 == ret)
					{
						printf("%s is greater than %s\n", dest_str, src_str);
					}

					else
					{
						printf("strcmp_s() failed\n");
					}

					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;

					break;

			case 5:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter accept string: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';
					
					ret = strspn_s(src_str, dest_str);

					if(-1 != ret)
					{
						printf("no of matching chars %d\n", ret);
					}

					else
					{
						printf("strspn_s() failed\n");
					}

					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;

					break;

			case 6:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter the delimiter: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';

					if(NULL == (token = (char*)malloc(sizeof(char) * SIZE)))
					{
						printf("malloc() failed\n");
						return EXIT_FAILURE;
					}

					token = strtok_s(src_str, dest_str);

					while(token != NULL)
					{
						printf("token - %s\n", token);
						token = strtok_s(NULL, dest_str);
					}

					free(src_str);
					src_str = NULL;

					free(dest_str);
					dest_str = NULL;

					free(token);
					token = NULL;

					break;

			case 7:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
					
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
					
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';
					
					dest_str = reverse_str(src_str, dest_str);
					
					if(NULL != dest_str)
					{
						printf("reversed string : %s\n", dest_str);
					}
					else
					{
						printf("reverse_str() failed\n");
					}
					
					free(src_str);
					src_str = NULL;
					
					free(dest_str);
					dest_str = NULL;
					
					break;
				
			case 8:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
					
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';
					
					src_str = squeeze_str(src_str);
					
					if(NULL != src_str)
					{
						printf("str - %s\n", src_str);
					}
					else
					{
						printf("squeeze_str() failed\n");
					}
					
					free(src_str);
					src_str = NULL;
					
					break;
			
			case 9:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					printf("enter the rotated string: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(dest_str);
					dest_str[len - 1] = '\0';

					ret = strrot_s(src_str, dest_str);
					
					if(!ret)
					{
						printf("given %s is a rotated str of %s\n", dest_str, src_str);
					}
					
					else if(1 == ret)
					{
						printf("given %s is not a rotated str of %s\n", dest_str, src_str);
					}
					
					else
					{
						printf("strrot_s() failed\n");
					}
					
					free(src_str);
					src_str = NULL;
					
					free(dest_str);
					dest_str == NULL;
					
					break;
					
			case 10:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					if(NULL == (dest_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
	
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';
					
					printf("enter the string to be removed: ");
					if(NULL == fgets(dest_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					dest_str[len - 1] = '\0';
					
					src_str = remsstr_s(src_str, dest_str);
					
					if(NULL != src_str)
					{
						printf("string - %s\n", src_str);
					}
					
					else
					{
						printf("remsstr() failed\n");
					}
					
					free(src_str);
					src_str = NULL;
					
					free(dest_str);
					dest_str = NULL;
					
					break;
					
			case 11:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
					
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';
					
					printf("enter char to be inserted: ");
					if(EOF == (ch = fgetc(stdin)))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					
					printf("enter the position to be inserted: ");
					pos = read_input();
					
					src_str = insert_char(src_str, ch, pos);
					
					if(NULL != src_str)
					{
						printf("string - %s\n", src_str);
					}
					
					else
					{
						printf("insert_char() failed\n");
					}
					
					free(src_str);
					src_str = NULL;
					
					break;
					
			case 12:
					printf("enter the size of array:");
					size = read_input();
					
					printf("enter array elements:\n");
					for(index = 0; index < size; index++)
					{
						arr[index] = read_input();
						if((0 != arr[index]) && (1 != arr[index]))
						{
							printf("invalid array input\n");
							return EXIT_FAILURE;
						}
					}
					
					ret = check_consecutive_ones(arr, size);
					
					if(0 == ret)
						printf("given array contains consecutive ones\n");
					
					else if(1 == ret)
						printf("given array doesnot contain consecutive ones\n");
					
					else
						printf("check_consecutive_ones() failed\n");
					
					break;
					
			case 13:
					if(NULL == (src_str = (char*)malloc(sizeof(char*) * SIZE)))
					{
						printf("no space available\n");
						return EXIT_FAILURE;
					}
					
					printf("enter input string: ");
					if(NULL == fgets(src_str, SIZE, stdin))
					{
						printf("reading input failed\n");
						return EXIT_FAILURE;
					}
					len = strlen_s(src_str);
					src_str[len - 1] = '\0';

					ret = vertical_histogram(src_str);
					
					if(ret)
						printf("vertical_histogram() failed\n");
					
					break;
					
			case 14:
					run = 0;
					break;

			default: 
					printf("invalid choice!\n");
					break;

		}
	}

	return EXIT_SUCCESS;
}
