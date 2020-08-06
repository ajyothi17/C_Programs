/*
 * Verify that the expression getchar() != EOF is 0 or 1
 */

#include <stdio.h>

int main(void)
{
    if(getchar() != EOF)
        printf("Value of getchar() != EOF is 1\n");

    else
        printf("Value of getchar() != EOF is 0\n");

    return 0;
}
