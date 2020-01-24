#ifndef __MAIN_HEADER__
#define __MAIN_HEADER__

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

typedef unsigned int uint;

int read_input(void);
uint strlen_s(char *str);
char* strncpy_s(char* src, char* dest, uint no_of_char);
#endif
