#include <stdio.h>

void func(void)
{
    int auto_var = 0;
    static int static_var = 0;

    printf("function auto var - %d\n", auto_var++);
    printf("function static var - %d\n", static_var++);
    printf("=========================\n");

    return;
}

int main(void)
{
    int i = 0;

    for(i = 0; i < 5; i++)
    {
       func();
    }

    return 0;
}
