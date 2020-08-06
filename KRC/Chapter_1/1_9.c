/*
 *  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
 */

#include <stdio.h>

int main(void)
{
    int cur_input;
    int prev_input;

    prev_input = '\0';
    while((cur_input = getchar()) != EOF) //Give <Ctrl + D> for EOF in stdin
    {
        if(!(' ' == cur_input))
	    printf("%c", cur_input);

	else if((' ' != prev_input) && (' ' == cur_input))
	    printf("%c", cur_input);

	prev_input = cur_input;

    }

    return 0;
}
