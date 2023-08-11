#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
void *malloc_checked(unsigned int size);
char *string_nconcat(char *str1, char *str2, unsigned int n);
void *_calloc(unsigned int num_elements, unsigned int element_size);
int *array_range(int minimum, int maximum);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void handle_errors(void);
int string_length(char *str);
int is_digit_string(char *str);

#endif
