#ifndef __MAIN_HEADER__
#define __MAIN_HEADER__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define SIZE 256

typedef unsigned int uint;

int read_input(void);
uint strlen_s(const char *str);
char* strncpy_s(char* src, char* dest, uint no_of_char);
char* sappend(char* str1, char* str2);
char* snappend(char* str1, char* str2, int no_of_chars);
int strcmp_s(char* str1, char* str2);
int strspn_s(char* str, char* accept);
char* strtok_s(char* str, const char* delim);
char* reverse_str(char* str, char* rev_str);
char* squeeze_str(char* str);
int strrot_s(char* str, char* rstr);
int substring_s(const char* sub_str, const char* str);
char* remsstr_s(char* str, char* sstr);
char* insert_char(char* str, const char ch, int pos);
int check_consecutive_ones(int arr[], int size);
int vertical_histogram(char *str);
#endif
