/*
 * Write a program to copy its input to its output
 * replacing each tab by "\t "
 * replacing each backspace by "\b"
 * each backslash by "\\"
 */

#include <stdio.h>

int main(void)
{
    int input;

    while((input = getchar()) != EOF) //Give <Ctrl + D> for EOF from stdin
    {
        switch(input)
	{
            case '\t':
		     printf("\\t");
		     break;
            
	    case '\b':
		     printf("\\b");
		     break;

            case '\\':
		     printf("\\\\");
		     break;

            default: printf("%c", input);
	}
    }

    return 0;
}
