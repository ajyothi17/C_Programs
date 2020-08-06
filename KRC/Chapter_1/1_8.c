/*
 * Write a program to count blanks, tabs and newlines
 */

#include <stdio.h>

int main(void)
{
    int count_blank = 0;
    int count_tab = 0;
    int count_newline = 0;
    int input;

    while((input = getchar()) != EOF) //Give <Ctrl + D> for EOF from stdin
    {
        switch(input)
	{
            case ' ':
		     count_blank++;
		     break;
            
	    case '\t':
		     count_tab++;
		     break;

            case '\n':
		     count_newline++;
		     break;

            default: break;
	}
    }

    printf("No. of blank spaces - %d\n", count_blank);
    printf("No. of tab spaces - %d\n", count_tab);
    printf("No. of newline - %d\n", count_newline);

    return 0;
}
