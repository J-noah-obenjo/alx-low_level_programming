#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings & a new line.
 * @separator: The string  printed btwn strings.
 * @k: The no. of strings passed to the function.
 * @...: A variable no.of strings to be print.
 *
 * Description: If separator == NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int k, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, k);

	for (index = 0; index < k; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (k - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\k");

	va_end(strings);
}
