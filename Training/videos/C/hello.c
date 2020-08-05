#include <stdio.h>

/*
 * gcc -c hello.c --> Compilation --> hello.o --> relocatable file
 * gcc -o hello hello.o --> linking --> hello --> executable file
 * gcc -o hello hello.c --> compilation + linking
 */

int main(void)
{
    printf("Hello World!\n");

    return 0;
}
