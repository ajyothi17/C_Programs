#include "main.h"

int main(void)
{
	char* src_str = NULL;
	char* dest_str = NULL;
	int no_of_chars = 0;
	int run = 1;
	int choice = 0;
	int len = 0;

	while(run)
	{
		printf("1. strncpy_s()\n"
			   "2. sappend()\n"
			   "3. snappend()\n"
			   "4. exit\n"
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

					break;

			case 4:
					run = 0;
					break;

			default: 
					printf("invalid choice!\n");
					break;

		}
	}


	return EXIT_SUCCESS;
}
