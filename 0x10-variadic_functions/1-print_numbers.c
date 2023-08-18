#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers & a new line.
 * @separator: The string to be printed btwn numbers.
 * @k: The no.  of integers passed to the function.
 * @...: A variable number  to be printed.
 */
void print_numbers(const char *separator, const unsigned int k, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, k);

	for (index = 0; index < k; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (k - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\k");

	va_end(nums);
}
